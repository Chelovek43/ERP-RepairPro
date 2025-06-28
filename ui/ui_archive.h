/********************************************************************************
** Form generated from reading UI file 'archive.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHIVE_H
#define UI_ARCHIVE_H

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

class Ui_Archive
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *TableArchive;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Archive)
    {
        if (Archive->objectName().isEmpty())
            Archive->setObjectName(QString::fromUtf8("Archive"));
        Archive->resize(800, 600);
        centralwidget = new QWidget(Archive);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TableArchive = new QTableView(centralwidget);
        TableArchive->setObjectName(QString::fromUtf8("TableArchive"));

        verticalLayout->addWidget(TableArchive);

        Archive->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Archive);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Archive->setMenuBar(menubar);
        statusbar = new QStatusBar(Archive);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Archive->setStatusBar(statusbar);

        retranslateUi(Archive);

        QMetaObject::connectSlotsByName(Archive);
    } // setupUi

    void retranslateUi(QMainWindow *Archive)
    {
        Archive->setWindowTitle(QCoreApplication::translate("Archive", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Archive: public Ui_Archive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHIVE_H
