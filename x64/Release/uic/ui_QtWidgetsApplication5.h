/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication5.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION5_H
#define UI_QTWIDGETSAPPLICATION5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication5Class
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication5Class)
    {
        if (QtWidgetsApplication5Class->objectName().isEmpty())
            QtWidgetsApplication5Class->setObjectName(QString::fromUtf8("QtWidgetsApplication5Class"));
        QtWidgetsApplication5Class->resize(600, 400);
        centralWidget = new QWidget(QtWidgetsApplication5Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 30, 113, 20));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(60, 60, 256, 192));
        QtWidgetsApplication5Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsApplication5Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        QtWidgetsApplication5Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication5Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtWidgetsApplication5Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsApplication5Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetsApplication5Class->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication5Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication5Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication5Class)
    {
        QtWidgetsApplication5Class->setWindowTitle(QCoreApplication::translate("QtWidgetsApplication5Class", "QtWidgetsApplication5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication5Class: public Ui_QtWidgetsApplication5Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION5_H
