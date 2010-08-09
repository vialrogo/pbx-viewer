/* 
 * File:   GUIMiniPBX.h
 * Author: vialrogo
 *
 * Created on 9 de Agosto de 2010, 11:34
 */

#ifndef _GUIMINIPBX_H
#define	_GUIMINIPBX_H

#include "ui_GUIMiniPBX.h"

class GUIMiniPBX : public QMainWindow {
    Q_OBJECT
public:
    GUIMiniPBX();
    virtual ~GUIMiniPBX();
private:
    Ui::GUIMiniPBX widget;
};

#endif	/* _GUIMINIPBX_H */
