/********************************************************************************
** Form generated from reading UI file 'gubbe.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUBBE_H
#define UI_GUBBE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GubbeClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GubbeClass)
    {
        if (GubbeClass->objectName().isEmpty())
            GubbeClass->setObjectName(QStringLiteral("GubbeClass"));
        GubbeClass->resize(600, 400);
        menuBar = new QMenuBar(GubbeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        GubbeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GubbeClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GubbeClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(GubbeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GubbeClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(GubbeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GubbeClass->setStatusBar(statusBar);

        retranslateUi(GubbeClass);

        QMetaObject::connectSlotsByName(GubbeClass);
    } // setupUi

    void retranslateUi(QMainWindow *GubbeClass)
    {
        GubbeClass->setWindowTitle(QApplication::translate("GubbeClass", "Gubbe", 0));
    } // retranslateUi

};

namespace Ui {
    class GubbeClass: public Ui_GubbeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUBBE_H
