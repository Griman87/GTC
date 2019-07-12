#include "stdafx.h"
#include "gtc.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GTC w;
	w.show();
	return a.exec();
}
