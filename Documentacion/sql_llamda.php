<?php
$conexion=mysql_connect("localhost","pbxviewer","pbxviewer")   or die("Problemas en la conexion");
mysql_select_db("pbxviewer",$conexion) or   die("Problemas en la seleccion de la base de datos");
$rs = mysql_query("SELECT * FROM llamada;", $conexion) or die("Problemas en el select".mysql_error());
$rows = array();
while($arreglo = mysql_fetch_array($rs))
{
$rows[] = array($arreglo['lla_hora'],$arreglo['lla_origen'],$arreglo['lla_destino'],$arreglo['lla_codigocuenta'],$arreglo['lla_idTipo'],$arreglo['lla_duracion']);
}
mysql_close($conexion);
$header = array('Hora', 'Origen','Destino','Codigo cuenta','Tipo','Duracion');
return theme('table', $header, $rows,array(),"Llamada");
?>
