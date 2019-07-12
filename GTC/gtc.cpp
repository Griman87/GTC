#include "stdafx.h"
#include "gtc.h"
#include "sql.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>

bool ok = false;
QSqlDatabase db;
int dia_nuevo;
int mes_nuevo;
int anio_nuevo;

GTC::GTC(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("CITA.s3db");
	ok = db.open();

	ui.setupUi(this);

	QSqlQuery query;
	QString a1;
	QDate fecha;

	fecha = ui.Calendario->selectedDate();
	dia_nuevo = fecha.day();
	mes_nuevo = fecha.month();
	anio_nuevo = fecha.year();

	a1 = "create table D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice float, Cliente varchar(200))";
	ok = query.exec(a1);

	if (ok == true)
	{
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(1)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(2)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(3)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(4)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(5)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(6)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(7)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(8)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(9)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(10)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(11)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(12)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(13)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(14)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(15)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(16)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(17)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(18)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(19)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(20)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(21)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(22)+")";
		ok = query.exec(a1);
		ui.Linea_1->setText("");
		ui.Linea_2->setText("");
		ui.Linea_3->setText("");
		ui.Linea_4->setText("");
		ui.Linea_5->setText("");
		ui.Linea_6->setText("");
		ui.Linea_7->setText("");
		ui.Linea_8->setText("");
		ui.Linea_9->setText("");
		ui.Linea_10->setText("");
		ui.Linea_11->setText("");
		ui.Linea_12->setText("");
		ui.Linea_13->setText("");
		ui.Linea_14->setText("");
		ui.Linea_15->setText("");
		ui.Linea_16->setText("");
		ui.Linea_17->setText("");
		ui.Linea_18->setText("");
		ui.Linea_19->setText("");
		ui.Linea_20->setText("");
		ui.Linea_21->setText("");
		ui.Linea_22->setText("");
	} //Si es true es que no habia una entrada anterior
	else //Si es false es que ese dia ya esta creado por lo que tenemos que leer los datos que hay guardados en el
	{
		a1 ="SELECT Cliente FROM D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+"";
		ok = query.exec(a1);
		query.next();
		ui.Linea_1->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_2->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_3->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_4->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_5->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_6->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_7->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_8->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_9->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_10->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_11->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_12->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_13->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_14->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_15->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_16->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_17->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_19->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_19->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_20->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_21->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_22->setText(query.value(0).toString().toAscii().data());
	}

	if (ui.Linea_1->text() != "")
	{
		ui.Linea_1->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_1->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_2->text() != "")
	{
		ui.Linea_2->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_2->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_3->text() != "")
	{
		ui.Linea_3->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_3->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_4->text() != "")
	{
		ui.Linea_4->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_4->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_5->text() != "")
	{
		ui.Linea_5->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_5->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_6->text() != "")
	{
		ui.Linea_6->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_6->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_7->text() != "")
	{
		ui.Linea_7->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_7->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_8->text() != "")
	{
		ui.Linea_8->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_8->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_9->text() != "")
	{
		ui.Linea_9->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_9->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_10->text() != "")
	{
		ui.Linea_10->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_10->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_11->text() != "")
	{
		ui.Linea_11->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_11->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_12->text() != "")
	{
		ui.Linea_12->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_12->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_13->text() != "")
	{
		ui.Linea_13->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_13->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_14->text() != "")
	{
		ui.Linea_14->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_14->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_15->text() != "")
	{
		ui.Linea_15->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_15->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_16->text() != "")
	{
		ui.Linea_16->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_16->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_17->text() != "")
	{
		ui.Linea_17->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_17->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_18->text() != "")
	{
		ui.Linea_18->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_18->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_19->text() != "")
	{
		ui.Linea_19->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_19->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_20->text() != "")
	{
		ui.Linea_20->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_20->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_21->text() != "")
	{
		ui.Linea_21->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_21->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_22->text() != "")
	{
		ui.Linea_22->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_22->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	ui.Fecha->setText(QString::number(dia_nuevo)+"/"+QString::number(mes_nuevo)+"/"+QString::number(anio_nuevo));

	QTimer * timer = new QTimer(this);
	connect(timer,SIGNAL(timeout()),this,SLOT(cambio()));
	timer->start(1000);
}

GTC::~GTC()
{

}

void GTC::on_Calendario_selectionChanged()
{
	QSqlQuery query;
	QString a1;
	QTableWidgetItem * elemento = new QTableWidgetItem;
	
	QDate fecha;

	fecha = ui.Calendario->selectedDate();

	dia_nuevo = fecha.day();
	mes_nuevo = fecha.month();
	anio_nuevo = fecha.year();

	a1 = "create table D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice float, Cliente varchar(200))";
	ok = query.exec(a1);

	if (ok == true)
	{
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(1)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(2)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(3)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(4)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(5)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(6)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(7)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(8)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(9)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(10)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(11)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(12)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(13)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(14)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(15)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(16)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(17)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(18)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(19)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(20)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(21)+")";
		ok = query.exec(a1);
		a1 = "INSERT INTO D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" (Indice)""VALUES ("+QString::number(22)+")";
		ok = query.exec(a1);
		ui.Linea_1->setText("");
		ui.Linea_2->setText("");
		ui.Linea_3->setText("");
		ui.Linea_4->setText("");
		ui.Linea_5->setText("");
		ui.Linea_6->setText("");
		ui.Linea_7->setText("");
		ui.Linea_8->setText("");
		ui.Linea_9->setText("");
		ui.Linea_10->setText("");
		ui.Linea_11->setText("");
		ui.Linea_12->setText("");
		ui.Linea_13->setText("");
		ui.Linea_14->setText("");
		ui.Linea_15->setText("");
		ui.Linea_16->setText("");
		ui.Linea_17->setText("");
		ui.Linea_18->setText("");
		ui.Linea_19->setText("");
		ui.Linea_20->setText("");
		ui.Linea_21->setText("");
		ui.Linea_22->setText("");
	} //Si es true es que no habia una entrada anterior
	else //Si es false es que ese dia ya esta creado por lo que tenemos que leer los datos que hay guardados en el
	{
		a1 ="SELECT Cliente FROM D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+"";
		ok = query.exec(a1);
		query.next();
		ui.Linea_1->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_2->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_3->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_4->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_5->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_6->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_7->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_8->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_9->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_10->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_11->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_12->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_13->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_14->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_15->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_16->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_17->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_18->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_19->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_20->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_21->setText(query.value(0).toString().toAscii().data());
		query.next();
		ui.Linea_22->setText(query.value(0).toString().toAscii().data());
	}

	if (ui.Linea_1->text() != "")
	{
		ui.Linea_1->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_1->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_2->text() != "")
	{
		ui.Linea_2->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_2->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_3->text() != "")
	{
		ui.Linea_3->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_3->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_4->text() != "")
	{
		ui.Linea_4->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_4->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_5->text() != "")
	{
		ui.Linea_5->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_5->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_6->text() != "")
	{
		ui.Linea_6->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_6->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_7->text() != "")
	{
		ui.Linea_7->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_7->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_8->text() != "")
	{
		ui.Linea_8->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_8->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_9->text() != "")
	{
		ui.Linea_9->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_9->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_10->text() != "")
	{
		ui.Linea_10->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_10->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_11->text() != "")
	{
		ui.Linea_11->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_11->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_12->text() != "")
	{
		ui.Linea_12->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_12->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_13->text() != "")
	{
		ui.Linea_13->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_13->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_14->text() != "")
	{
		ui.Linea_14->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_14->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_15->text() != "")
	{
		ui.Linea_15->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_15->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_16->text() != "")
	{
		ui.Linea_16->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_16->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_17->text() != "")
	{
		ui.Linea_17->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_17->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_18->text() != "")
	{
		ui.Linea_18->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_18->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_19->text() != "")
	{
		ui.Linea_19->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_19->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_20->text() != "")
	{
		ui.Linea_20->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_20->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_21->text() != "")
	{
		ui.Linea_21->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_21->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_22->text() != "")
	{
		ui.Linea_22->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_22->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	ui.Fecha->setText(QString::number(dia_nuevo)+"/"+QString::number(mes_nuevo)+"/"+QString::number(anio_nuevo));
	
}

void GTC::cambio()
{
	if (ui.Linea_1->text() != "")
	{
		ui.Linea_1->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_1->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_2->text() != "")
	{
		ui.Linea_2->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_2->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_3->text() != "")
	{
		ui.Linea_3->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_3->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_4->text() != "")
	{
		ui.Linea_4->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_4->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_5->text() != "")
	{
		ui.Linea_5->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_5->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_6->text() != "")
	{
		ui.Linea_6->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_6->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_7->text() != "")
	{
		ui.Linea_7->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_7->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_8->text() != "")
	{
		ui.Linea_8->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_8->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_9->text() != "")
	{
		ui.Linea_9->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_9->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_10->text() != "")
	{
		ui.Linea_10->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_10->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_11->text() != "")
	{
		ui.Linea_11->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_11->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_12->text() != "")
	{
		ui.Linea_12->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_12->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_13->text() != "")
	{
		ui.Linea_13->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_13->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_14->text() != "")
	{
		ui.Linea_14->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_14->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_15->text() != "")
	{
		ui.Linea_15->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_15->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_16->text() != "")
	{
		ui.Linea_16->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_16->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_17->text() != "")
	{
		ui.Linea_17->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_17->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_18->text() != "")
	{
		ui.Linea_18->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_18->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_19->text() != "")
	{
		ui.Linea_19->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_19->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_20->text() != "")
	{
		ui.Linea_20->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_20->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_21->text() != "")
	{
		ui.Linea_21->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_21->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}

	if (ui.Linea_22->text() != "")
	{
		ui.Linea_22->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(21, 230, 226);");
	}
	else
	{
		ui.Linea_22->setStyleSheet("border: 2px solid #555;border-radius: 11px;background-color: rgb(255, 255, 255);");
	}
}


void GTC::on_Linea_1_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_1->text() +"'  WHERE Indice = "+QString::number(1.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_2_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_2->text() +"'  WHERE Indice = "+QString::number(2.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_3_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_3->text() +"'  WHERE Indice = "+QString::number(3.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_4_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_4->text() +"'  WHERE Indice = "+QString::number(4.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_5_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_5->text() +"'  WHERE Indice = "+QString::number(5.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_6_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_6->text() +"'  WHERE Indice = "+QString::number(6.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_7_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_7->text() +"'  WHERE Indice = "+QString::number(7.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_8_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_8->text() +"'  WHERE Indice = "+QString::number(8.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_9_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_9->text() +"'  WHERE Indice = "+QString::number(9.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_10_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_10->text() +"'  WHERE Indice = "+QString::number(10.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_11_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_11->text() +"'  WHERE Indice = "+QString::number(11.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_12_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_12->text() +"'  WHERE Indice = "+QString::number(12.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_13_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_13->text() +"'  WHERE Indice = "+QString::number(13.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_14_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_14->text() +"'  WHERE Indice = "+QString::number(14.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_15_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_15->text() +"'  WHERE Indice = "+QString::number(15.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_16_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_16->text() +"'  WHERE Indice = "+QString::number(16.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_17_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_17->text() +"'  WHERE Indice = "+QString::number(17.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_18_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_18->text() +"'  WHERE Indice = "+QString::number(18.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_19_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_19->text() +"'  WHERE Indice = "+QString::number(19.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_20_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_20->text() +"'  WHERE Indice = "+QString::number(20.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_21_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_21->text() +"'  WHERE Indice = "+QString::number(21.0)+"";
	ok = query.exec(a1);
}

void GTC::on_Linea_22_textChanged()
{
	QSqlQuery query;
	QString a1;

	a1 = "UPDATE D"+QString::number(dia_nuevo)+"_"+QString::number(mes_nuevo)+"_"+QString::number(anio_nuevo)+" SET Cliente ='" + ui.Linea_22->text() +"'  WHERE Indice = "+QString::number(22.0)+"";
	ok = query.exec(a1);
}
