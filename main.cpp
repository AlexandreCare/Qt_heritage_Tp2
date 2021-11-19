#include "QtWidgetsApplication5.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidgetsApplication5 w;
    w.show();
    return a.exec();
}
