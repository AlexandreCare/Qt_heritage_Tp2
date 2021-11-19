#include "QtWidgetsApplication5.h"


QtWidgetsApplication5::QtWidgetsApplication5(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	this->ui.tableWidget->setRowCount(10);
	this->ui.tableWidget->setColumnCount(1);
}

void QtWidgetsApplication5::QLineEdit_Histo()
{
	if (QEvent::Enter)//Quand la touche entrer en pressez 
	{
		QString contenu = ui->lineEdit->text();

		QTableWidgetItem *value = new QTableWidgetItem(QString::number(contenu));
		ui.tableWidget->setItem(0, 0, value);

	}
}
//void QLineEdit::returnPressed()