/********************************************************************************
** Form generated from reading UI file 'widelibrary.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDELIBRARY_H
#define UI_WIDELIBRARY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WideLibraryClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WideLibraryClass)
    {
        if (WideLibraryClass->objectName().isEmpty())
            WideLibraryClass->setObjectName(QString::fromUtf8("WideLibraryClass"));
        WideLibraryClass->resize(600, 400);
        menuBar = new QMenuBar(WideLibraryClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        WideLibraryClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WideLibraryClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        WideLibraryClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(WideLibraryClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        WideLibraryClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WideLibraryClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        WideLibraryClass->setStatusBar(statusBar);

        retranslateUi(WideLibraryClass);

        QMetaObject::connectSlotsByName(WideLibraryClass);
    } // setupUi

    void retranslateUi(QMainWindow *WideLibraryClass)
    {
        WideLibraryClass->setWindowTitle(QApplication::translate("WideLibraryClass", "WideLibrary", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WideLibraryClass: public Ui_WideLibraryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDELIBRARY_H
