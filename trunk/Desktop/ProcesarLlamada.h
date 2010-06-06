/* 
 * File:   ProcesarLlamada.h
 * Author: vialrogo
 *
 * Created on 2 de Junho de 2010, 12:23
 */

#ifndef _PROCESARLLAMADA_H
#define	_PROCESARLLAMADA_H

#include <QString>
#include "Llamada.h"

class ProcesarLlamada {
public:
    ProcesarLlamada();
    virtual ~ProcesarLlamada();
    bool procesallamada(QString flujollamadaS);
private:
    Llamada* llamadita;
};

#endif	/* _PROCESARLLAMADA_H */

