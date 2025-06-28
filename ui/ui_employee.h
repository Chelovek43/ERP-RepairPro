/********************************************************************************
** Form generated from reading UI file 'employee.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_H
#define UI_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Employee
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *EmployeeTable;
    QGridLayout *gridLayout;
    QPushButton *AddEmployeeButton;
    QPushButton *DeleteEmployeeButton;
    QPushButton *AddPositionButton;
    QPushButton *DeletePositionButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Employee)
    {
        if (Employee->objectName().isEmpty())
            Employee->setObjectName(QString::fromUtf8("Employee"));
        Employee->resize(800, 600);
        centralwidget = new QWidget(Employee);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        EmployeeTable = new QTableView(centralwidget);
        EmployeeTable->setObjectName(QString::fromUtf8("EmployeeTable"));

        verticalLayout->addWidget(EmployeeTable);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        AddEmployeeButton = new QPushButton(centralwidget);
        AddEmployeeButton->setObjectName(QString::fromUtf8("AddEmployeeButton"));

        gridLayout->addWidget(AddEmployeeButton, 0, 0, 1, 1);

        DeleteEmployeeButton = new QPushButton(centralwidget);
        DeleteEmployeeButton->setObjectName(QString::fromUtf8("DeleteEmployeeButton"));

        gridLayout->addWidget(DeleteEmployeeButton, 0, 1, 1, 1);

        AddPositionButton = new QPushButton(centralwidget);
        AddPositionButton->setObjectName(QString::fromUtf8("AddPositionButton"));

        gridLayout->addWidget(AddPositionButton, 1, 0, 1, 1);

        DeletePositionButton = new QPushButton(centralwidget);
        DeletePositionButton->setObjectName(QString::fromUtf8("DeletePositionButton"));

        gridLayout->addWidget(DeletePositionButton, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        Employee->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Employee);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Employee->setMenuBar(menubar);
        statusbar = new QStatusBar(Employee);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Employee->setStatusBar(statusbar);

        retranslateUi(Employee);

        QMetaObject::connectSlotsByName(Employee);
    } // setupUi

    void retranslateUi(QMainWindow *Employee)
    {
        Employee->setWindowTitle(QCoreApplication::translate("Employee", "MainWindow", nullptr));
        AddEmployeeButton->setText(QCoreApplication::translate("Employee", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260", nullptr));
        DeleteEmployeeButton->setText(QCoreApplication::translate("Employee", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260", nullptr));
        AddPositionButton->setText(QCoreApplication::translate("Employee", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        DeletePositionButton->setText(QCoreApplication::translate("Employee", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Employee: public Ui_Employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
