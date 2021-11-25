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

		int x = 15;
		int y = 50;
		int largeur = 100; 
		int hauteur = 20;

public:
    QtWidgetsApplication5(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtWidgetsApplication5Class ui;

public slots:

	void returnPressed();

};
