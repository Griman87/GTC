#ifndef GTC_H
#define GTC_H

#include <QtGui/QMainWindow>
#include "ui_gtc.h"

class GTC : public QMainWindow
{
	Q_OBJECT

public:
	GTC(QWidget *parent = 0, Qt::WFlags flags = 0);
	~GTC();

private:
	Ui::GTCClass ui;


	public slots:
		void on_Calendario_selectionChanged();

		void cambio();

		void on_Linea_1_textChanged();
		void on_Linea_2_textChanged();
		void on_Linea_3_textChanged();
		void on_Linea_4_textChanged();
		void on_Linea_5_textChanged();
		void on_Linea_6_textChanged();
		void on_Linea_7_textChanged();
		void on_Linea_8_textChanged();
		void on_Linea_9_textChanged();
		void on_Linea_10_textChanged();
		void on_Linea_11_textChanged();
		void on_Linea_12_textChanged();
		void on_Linea_13_textChanged();
		void on_Linea_14_textChanged();
		void on_Linea_15_textChanged();
		void on_Linea_16_textChanged();
		void on_Linea_17_textChanged();
		void on_Linea_18_textChanged();
		void on_Linea_19_textChanged();
		void on_Linea_20_textChanged();
		void on_Linea_21_textChanged();
		void on_Linea_22_textChanged();
};

#endif // GTC_H
