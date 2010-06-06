/* 
 * File:   GUIDesktop.h
 * Author: vialrogo
 *
 * Created on 6 de Junho de 2010, 17:10
 */

#ifndef _GUIDESKTOP_H
#define	_GUIDESKTOP_H

#include "ui_GUIDesktop.h"

class GUIDesktop : public QMainWindow {
    Q_OBJECT
public:
    GUIDesktop();
    virtual ~GUIDesktop();
private:
    Ui::GUIDesktop widget;
};

#endif	/* _GUIDESKTOP_H */
