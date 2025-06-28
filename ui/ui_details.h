/********************************************************************************
** Form generated from reading UI file 'details.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILS_H
#define UI_DETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Details
{
public:
    QAction *calculate;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *TableForDetails;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonForAddRow;
    QPushButton *ButtonForDeleteRow;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Details)
    {
        if (Details->objectName().isEmpty())
            Details->setObjectName(QString::fromUtf8("Details"));
        Details->resize(800, 600);
        calculate = new QAction(Details);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        calculate->setIcon(icon);
        centralwidget = new QWidget(Details);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TableForDetails = new QTableView(centralwidget);
        TableForDetails->setObjectName(QString::fromUtf8("TableForDetails"));

        verticalLayout->addWidget(TableForDetails);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ButtonForAddRow = new QPushButton(centralwidget);
        ButtonForAddRow->setObjectName(QString::fromUtf8("ButtonForAddRow"));

        horizontalLayout->addWidget(ButtonForAddRow);

        ButtonForDeleteRow = new QPushButton(centralwidget);
        ButtonForDeleteRow->setObjectName(QString::fromUtf8("ButtonForDeleteRow"));

        horizontalLayout->addWidget(ButtonForDeleteRow);


        verticalLayout->addLayout(horizontalLayout);

        Details->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Details);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Details->setMenuBar(menubar);
        statusbar = new QStatusBar(Details);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Details->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(calculate);

        retranslateUi(Details);

        QMetaObject::connectSlotsByName(Details);
    } // setupUi

    void retranslateUi(QMainWindow *Details)
    {
        Details->setWindowTitle(QCoreApplication::translate("Details", "MainWindow", nullptr));
        calculate->setText(QCoreApplication::translate("Details", "\320\237\320\276\320\264\321\201\321\207\320\265\321\202 \321\201\321\203\320\274\320\274\321\213", nullptr));
#if QT_CONFIG(shortcut)
        calculate->setShortcut(QCoreApplication::translate("Details", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        ButtonForAddRow->setText(QCoreApplication::translate("Details", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\265\321\202\320\260\320\273\321\214", nullptr));
        ButtonForDeleteRow->setText(QCoreApplication::translate("Details", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\264\320\265\321\202\320\260\320\273\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("Details", "\320\237\320\276\320\264\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Details: public Ui_Details {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILS_H
