/********************************************************************************
** Form generated from reading UI file 'visual.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUAL_H
#define UI_VISUAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
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

class Ui_Visual
{
public:
    QAction *Details;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *ButtonForSend;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Visual)
    {
        if (Visual->objectName().isEmpty())
            Visual->setObjectName(QString::fromUtf8("Visual"));
        Visual->resize(998, 713);
        Details = new QAction(Visual);
        Details->setObjectName(QString::fromUtf8("Details"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/details.png"), QSize(), QIcon::Normal, QIcon::Off);
        Details->setIcon(icon);
        centralwidget = new QWidget(Visual);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        ButtonForSend = new QPushButton(centralwidget);
        ButtonForSend->setObjectName(QString::fromUtf8("ButtonForSend"));

        verticalLayout->addWidget(ButtonForSend);

        Visual->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Visual);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 998, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Visual->setMenuBar(menubar);
        statusbar = new QStatusBar(Visual);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Visual->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(Details);

        retranslateUi(Visual);

        QMetaObject::connectSlotsByName(Visual);
    } // setupUi

    void retranslateUi(QMainWindow *Visual)
    {
        Visual->setWindowTitle(QCoreApplication::translate("Visual", "MainWindow", nullptr));
        Details->setText(QCoreApplication::translate("Visual", "\320\224\320\265\321\202\320\260\320\273\320\270", nullptr));
        ButtonForSend->setText(QCoreApplication::translate("Visual", "\320\237\320\265\321\200\320\265\320\275\320\265\321\201\321\202\320\270", nullptr));
        menu->setTitle(QCoreApplication::translate("Visual", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Visual: public Ui_Visual {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUAL_H
