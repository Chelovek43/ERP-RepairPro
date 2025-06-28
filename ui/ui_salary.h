/********************************************************************************
** Form generated from reading UI file 'salary.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALARY_H
#define UI_SALARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Salary
{
public:
    QAction *histogram;
    QAction *pieChart;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *SalaryTable;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Salary)
    {
        if (Salary->objectName().isEmpty())
            Salary->setObjectName(QString::fromUtf8("Salary"));
        Salary->resize(800, 600);
        histogram = new QAction(Salary);
        histogram->setObjectName(QString::fromUtf8("histogram"));
        pieChart = new QAction(Salary);
        pieChart->setObjectName(QString::fromUtf8("pieChart"));
        centralwidget = new QWidget(Salary);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SalaryTable = new QTableView(centralwidget);
        SalaryTable->setObjectName(QString::fromUtf8("SalaryTable"));

        verticalLayout->addWidget(SalaryTable);

        Salary->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Salary);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Salary->setMenuBar(menubar);
        statusbar = new QStatusBar(Salary);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Salary->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(histogram);
        menu->addAction(pieChart);

        retranslateUi(Salary);

        QMetaObject::connectSlotsByName(Salary);
    } // setupUi

    void retranslateUi(QMainWindow *Salary)
    {
        Salary->setWindowTitle(QCoreApplication::translate("Salary", "MainWindow", nullptr));
        histogram->setText(QCoreApplication::translate("Salary", "\320\223\320\270\321\201\321\202\320\276\320\263\321\200\320\260\320\274\320\274\320\260", nullptr));
        pieChart->setText(QCoreApplication::translate("Salary", "\320\232\321\200\321\203\320\263\320\276\320\262\320\260\321\217 \320\264\320\270\320\260\320\263\321\200\320\260\320\274\320\274\320\260", nullptr));
        menu->setTitle(QCoreApplication::translate("Salary", "\320\227/\320\237 \320\262 \320\263\321\200\320\260\321\204\320\270\320\272\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Salary: public Ui_Salary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALARY_H
