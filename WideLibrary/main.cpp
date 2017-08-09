#include "widelibrary.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	WideLibrary w;
	w.show();
	return a.exec();
}
