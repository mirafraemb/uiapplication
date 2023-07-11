/****************************************************************************

** Copyrights : Mirafra Technologies Ltd (2023)
** This code is the sole proprietary of Mirafra Technologies Limited
** Unauthorised distribution, sale, copy will invite strict penal actions
****************************************************************************/

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
