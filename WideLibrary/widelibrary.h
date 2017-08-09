#ifndef WIDELIBRARY_H
#define WIDELIBRARY_H

#include <QtGui/QMainWindow>
#include "ui_widelibrary.h"

class WideLibrary : public QMainWindow
{
	Q_OBJECT

public:
	WideLibrary(QWidget *parent = 0, Qt::WFlags flags = 0);
	~WideLibrary();

private:
	Ui::WideLibraryClass ui;
};

#endif // WIDELIBRARY_H
