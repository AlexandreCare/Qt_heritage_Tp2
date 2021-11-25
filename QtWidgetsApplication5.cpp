#include "QtWidgetsApplication5.h"


QtWidgetsApplication5::QtWidgetsApplication5(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	QLineEdit *EditLine = new QLineEdit(ui.centralWidget);
	EditLine->move(x, y);

}

/*void QLineEdit::keyPressEvent(QKeyEvent *event)
{
	if (event->key() == Qt::Key_Enter) {
		QString send = ui.centralWidget->text();
	}
}*/

void QLineEdit::returnPressed() 
{






	/*int i = 0;

	for (i; i < 10; i++) {

		QTableWidgetItem *value = new QTableWidgetItem(QString::number(tiragede));
		ui.tableWidget->setItem(i, 0, value);

	}*/
}