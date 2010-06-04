/****************************************************************************
    **
    ** Copyright (C) 2004-2005 Trolltech AS. All rights reserved.
    **
    ** This file is part of the documentation of the Qt Toolkit.
    **
    ** This file may be used under the terms of the GNU General Public
** License version 2.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of
** this file.  Please review the following information to ensure GNU
** General Public Licensing requirements will be met:
** http://www.trolltech.com/products/qt/opensource.html
**
** If you are unsure which license is appropriate for your use, please
** review the following information:
** http://www.trolltech.com/products/qt/licensing.html or contact the
** sales department at sales@trolltech.com.
    **
    ** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
    ** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
    **
    ****************************************************************************/

    #include <QtGui>
    #include <QtNetwork>

    #include <stdlib.h>

    #include "Server.h"

    Server::Server(QWidget *parent)
        : QDialog(parent)
    {
        statusLabel = new QLabel;
        quitButton = new QPushButton(tr("Quit"));
        quitButton->setAutoDefault(false);

        tcpServer = new QTcpServer(this);
        if (!tcpServer->listen(QHostAddress::Any,quint16(2323))) {
            QMessageBox::critical(this, tr("Fortune Server"),
                                  tr("Unable to start the server: %1.")
                                  .arg(tcpServer->errorString()));
            close();
            return;
        }

        statusLabel->setText(tr("The server is running on port %1.\n"
                                "Run the Fortune Client example now.")
                             .arg(tcpServer->serverPort()));

        fortunes << tr("You've been leading a dog's life. Stay off the furniture.")
                 << tr("You've got to think about tomorrow.")
                 << tr("You will be surprised by a loud noise.")
                 << tr("You will feel hungry again in another hour.")
                 << tr("You might have mail.")
                 << tr("You cannot kill time without injuring eternity.")
                 << tr("Computers are not intelligent. They only think they are.");

        connect(quitButton, SIGNAL(clicked()), this, SLOT(close()));
        //connect(tcpServer, SIGNAL(newConnection()), this, SLOT(sendFortune()));
        connect(tcpServer, SIGNAL(newConnection()), this, SLOT(recibir()));
        QHBoxLayout *buttonLayout = new QHBoxLayout;
        buttonLayout->addStretch(1);
        buttonLayout->addWidget(quitButton);

        QVBoxLayout *mainLayout = new QVBoxLayout;
        mainLayout->addWidget(statusLabel);
        mainLayout->addLayout(buttonLayout);
        setLayout(mainLayout);

        setWindowTitle(tr("Fortune Server"));
    }

void Server::recibir(){
    qDebug()<<"recibir";
    clientConnection = tcpServer->nextPendingConnection();
    connect( clientConnection, SIGNAL( readyRead() ), this, SLOT( processClientData() ) );

}
void Server::processClientData(){
    qDebug()<<"processClientData";
    QByteArray payload = clientConnection->readAll();
    qDebug()<<"payload"<<payload.data();
}

    void Server::sendFortune()
    {
        QByteArray block;
        QDataStream out(&block, QIODevice::WriteOnly);
        out.setVersion(QDataStream::Qt_4_0);
        out << (quint16)0;
        out << fortunes.at(rand() % fortunes.size());
        out.device()->seek(0);
        out << (quint16)(block.size() - sizeof(quint16));

        QTcpSocket *clientConnection = tcpServer->nextPendingConnection();
        connect(clientConnection, SIGNAL(disconnected()),
                clientConnection, SLOT(deleteLater()));

        clientConnection->write(block);
        clientConnection->disconnectFromHost();
    }