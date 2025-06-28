/********************************************************************************
** Form generated from reading UI file 'alldetailsinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLDETAILSINFO_H
#define UI_ALLDETAILSINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllDetailsInfo
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *DetailsInfo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AllDetailsInfo)
    {
        if (AllDetailsInfo->objectName().isEmpty())
            AllDetailsInfo->setObjectName(QString::fromUtf8("AllDetailsInfo"));
        AllDetailsInfo->resize(800, 600);
        centralwidget = new QWidget(AllDetailsInfo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        DetailsInfo = new QTableView(centralwidget);
        DetailsInfo->setObjectName(QString::fromUtf8("DetailsInfo"));

        verticalLayout->addWidget(DetailsInfo);

        AllDetailsInfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AllDetailsInfo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        AllDetailsInfo->setMenuBar(menubar);
        statusbar = new QStatusBar(AllDetailsInfo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AllDetailsInfo->setStatusBar(statusbar);

        retranslateUi(AllDetailsInfo);

        QMetaObject::connectSlotsByName(AllDetailsInfo);
    } // setupUi

    void retranslateUi(QMainWindow *AllDetailsInfo)
    {
        AllDetailsInfo->setWindowTitle(QCoreApplication::translate("AllDetailsInfo", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllDetailsInfo: public Ui_AllDetailsInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLDETAILSINFO_H
