#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication5.h"
#include <QLineEdit>
#include <QKeyEvent>
#include <QString>
#include <QTableView>

class QtWidgetsApplication5 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication5(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtWidgetsApplication5Class ui;

public slots:

	void QtWidgetsApplication5::QLineEdit_Histo();

};
