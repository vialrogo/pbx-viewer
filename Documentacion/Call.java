/*
 * Call.java
 *
 * Created on 24 de abril de 2007, 14:02
 *
 * To change this template, choose Tools | Template Manager
 * and open the template in the editor.
 */

package zentinella.net;

import zentinella.io.Buffer;
import zentinella.io.DataBase;

import java.util.Calendar;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/**
 *
 * @author root
 */
public class Call {
    
    private String time;
    private short type;
    private int seconds;
    private float minutes;
    private float cost;
    private String sinkPhone;
    private String sourcePhone;
    private String accountCode;
    
    /** Creates a new instance of Call */
    public Call() {
    }
    
    // Avaya Coomeva
    /*public void setData( String data ) throws FrameFormatException {
        String timeYear, timeMonth, timeDate, timeHour, timeMinute;
        if( data.length() != 83 )
            throw new FrameFormatException( "La trama no tiene la longitud adecuada. " + data.length() );
        try {
            Integer.parseInt( timeYear = data.substring( 4, 6 ) );
            Integer.parseInt( timeMonth = data.substring( 0, 2 ) );
            Integer.parseInt( timeDate = data.substring( 2, 4 ) );
            Integer.parseInt( timeHour = data.substring( 6, 8 ) );
            Integer.parseInt( timeMinute = data.substring( 8, 10 ) );
            seconds = Integer.parseInt( data.substring( 10, 14 ) );
        } catch( NumberFormatException nfe ) {
            throw new FrameFormatException( "Un campo no tiene el formato numerico.<br>\n" +
                    "Trama: [<font color=#888888>" + data + "</font>]");
        }
        time = "20" + timeYear + "-" +
                timeMonth + "-" +
                timeDate + " " +
                timeHour + ":" +
                timeMinute;
        sinkPhone = data.substring( 26, 44 ).trim();
        sourcePhone = data.substring( 44, 59 ).trim();
        accountCode = data.substring( 59, 72 ).trim();
        if( data.substring( 14, 15 ).trim().equals( "9" ) ) {
            type = 0;
            minutes = seconds/60.0f;
        } else {
            if( data.substring( 15, 19 ).trim().equals( "9" ) ) {
                if( sinkPhone.startsWith( "00" ) ) {
                    type = 5;
                    minutes = (float) Math.ceil( seconds/6.0 )/10;
                } else if( sinkPhone.startsWith( "0" ) ) {
                    if( sinkPhone.substring( 1, 3 ).equals( "18" ) ) {
                        type = 6;
                        minutes = seconds/60.0f;
                    } else if( sinkPhone.charAt( 1 ) == '3' ) {
                        type = 3;
                        minutes = (float) Math.ceil( seconds/60.0 );
                    } else {
                        type = 4;
                        minutes = (float) Math.ceil( seconds/6.0 )/10;
                    }
                } else {
                    type = 2;
                    minutes = (float) Math.ceil( seconds/60.0 );
                }
            } else {
                type = 1;
                minutes = seconds/60.0f;
            }
        }
    }*/
    
    // Avaya Palmolive
    public void setData( String data ) throws FrameFormatException {
        String timeHour, timeMinute;
        if( data.length() != 100 )
            throw new FrameFormatException( "La trama no tiene la longitud adecuada." );
        try {
            Integer.parseInt( timeHour = data.substring( 0, 2 ) );
            Integer.parseInt( timeMinute = data.substring( 2, 4 ) );
            seconds = Integer.parseInt( data.substring( 4, 8 ) );
        } catch( NumberFormatException nfe ) {
            throw new FrameFormatException( "Un campo no tiene el formato numerico.<br>\n" +
                    "Trama: [<font color=#888888>" + data + "</font>]");
        }
        Calendar c = Calendar.getInstance();
        time = c.get(Calendar.YEAR) + "-" +
                (c.get(Calendar.MONTH) + 1) + "-" +
                c.get(Calendar.DATE) + " " +
                timeHour + ":" + timeMinute;
        sinkPhone = data.substring( 17, 32 ).trim();
        sourcePhone = data.substring( 32, 42 ).trim();
        accountCode = data.substring( 59, 64 ).trim();
        if( data.substring( 11, 13 ).trim().equals( "" ) ) { // Esto es una llamada interna!!! (a una extension) type=0
            type = 0;
            minutes = seconds/60.0f;
        } else {
            if( sinkPhone.startsWith( "00" ) ) { //Esto es una llamada internacional , type =5
                type = 5;
                minutes = (float) Math.ceil( seconds/6.0 )/10;
            } else if( sinkPhone.startsWith( "0" ) ) { //esto es una llamda nacional (celular y fijo)
                if( sinkPhone.charAt( 1 ) == '3' ) { // type = 3 es a celular!!
                    type = 3;
                    minutes = (float) Math.ceil( seconds/60.0 );
                } else { //todos los demas destinos (llamadas nacionales NO celular)
                    type = 4;
                    minutes = (float) Math.ceil( seconds/6.0 )/10;
                }
            } else { //de lo contrario es una llamada local. :D
                type = 2;
                minutes = (float) Math.ceil( seconds/60.0 );
            }
        }
    }
    
    // Panasonic
    /*public void setData( String data ) throws FrameFormatException {
        String date, month, year, timeMinute;
        int timeHour;
        if( data.length() != 65 )
            throw new FrameFormatException( "La trama no tiene la longitud adecuada." );
        try {
            Integer.parseInt( date = data.substring( 0, 2 ) );
            Integer.parseInt( month = data.substring( 3, 5 ) );
            Integer.parseInt( year = ("20" + data.substring( 6, 8 )) );
            timeHour = Integer.parseInt( data.substring( 9, 11 ) );
            Integer.parseInt( timeMinute = data.substring( 12, 14 ) );
            seconds = 3600*Integer.parseInt( data.substring( 57, 59 ) ) +
                    60*Integer.parseInt( data.substring( 60, 62 ) ) +
                    Integer.parseInt( data.substring( 63 ) );
        } catch( NumberFormatException nfe ) {
            throw new FrameFormatException( "Un campo no tiene el formato numerico.<br>\n" +
                    "Trama: [<font color=#888888>" + data + "</font>]");
        }
        time = year + "-" + month + "-" + date + " " +
                (data.substring(14,16).equals("AM")?timeHour:(timeHour+12)) + ":" + timeMinute;
        accountCode = "";
        if( data.substring(26,29).equals( "<I>" ) ) {
            sinkPhone = data.substring( 18, 22 ).trim();
            sourcePhone = data.substring( 29, 51 ).trim();
            type = 0;
            minutes = seconds/60.0f;
        } else {
            sinkPhone = data.substring( 26, 51 ).trim();
            sourcePhone = data.substring( 18, 22 ).trim();
            if( sinkPhone.startsWith( "00" ) ) {
                type = 5;
                minutes = (float) Math.ceil( seconds/6.0 )/10;
            } else if( sinkPhone.startsWith( "0" ) ) {
                if( sinkPhone.charAt( 1 ) == '3' ) {
                    type = 3;
                    minutes = (float) Math.ceil( seconds/60.0 );
                } else {
                    type = 4;
                    minutes = (float) Math.ceil( seconds/6.0 )/10;
                }
            } else {
                type = 2;
                minutes = (float) Math.ceil( seconds/60.0 );
            }
        }
    }*/
    
    public void tariff( int idPBX, int idRegion ) {
        if( type >= 2 && type <= 5 ) {
            cost = DataBase.getCost( type, truncate( sinkPhone ), idPBX, idRegion );
            if( cost > 0 )
                cost = cost * minutes;
        }
        Buffer.saveCall( this, idPBX );
    }

    private String truncate( String phone ) { //Esta vaina quita la letra al final del telefono si la hay
        String truncatePhone = phone;
        Pattern pattern = Pattern.compile( "[0-9]*[a-zA-Z]+" );
        Matcher matcher = pattern.matcher( truncatePhone );
        while( matcher.matches() ) {
            truncatePhone = truncatePhone.substring( 0, truncatePhone.length() - 1 );
            matcher = pattern.matcher( truncatePhone );
        }
        return truncatePhone;
    }

    public String getDate() {
        return time;
    }

    public short getType() {
        return type;
    }
    
    public int getSeconds() {
        return seconds;
    }

    public float getMinutes() {
        return minutes;
    }

    public float getCost() {
        return cost;
    }
    
    public String getSinkPhone() {
        return sinkPhone;
    }
    
    public String getSourcePhone() {
        return sourcePhone;
    }
    
    public String getAccountCode() {
        return accountCode;
    }
    
}
