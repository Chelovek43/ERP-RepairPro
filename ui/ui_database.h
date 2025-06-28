/********************************************************************************
** Form generated from reading UI file 'database.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_H
#define UI_DATABASE_H

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

class Ui_anotherwindow
{
public:
    QAction *action_2;
    QAction *TryToVisual;
    QAction *Save;
    QAction *Search;
    QAction *Archive;
    QAction *EditEmployee;
    QAction *DetailsInfo;
    QAction *Salary;
    QAction *GenerationAct;
    QAction *Salary_graph;
    QAction *refresh;
    QAction *exportIn;
    QAction *importFrom;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *anotherwindow)
    {
        if (anotherwindow->objectName().isEmpty())
            anotherwindow->setObjectName(QString::fromUtf8("anotherwindow"));
        anotherwindow->resize(1169, 654);
        action_2 = new QAction(anotherwindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        TryToVisual = new QAction(anotherwindow);
        TryToVisual->setObjectName(QString::fromUtf8("TryToVisual"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/progressbar.png"), QSize(), QIcon::Normal, QIcon::Off);
        TryToVisual->setIcon(icon);
        Save = new QAction(anotherwindow);
        Save->setObjectName(QString::fromUtf8("Save"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon1);
        Search = new QAction(anotherwindow);
        Search->setObjectName(QString::fromUtf8("Search"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/magnifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        Search->setIcon(icon2);
        Archive = new QAction(anotherwindow);
        Archive->setObjectName(QString::fromUtf8("Archive"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/archive.png"), QSize(), QIcon::Normal, QIcon::Off);
        Archive->setIcon(icon3);
        EditEmployee = new QAction(anotherwindow);
        EditEmployee->setObjectName(QString::fromUtf8("EditEmployee"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/employee.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditEmployee->setIcon(icon4);
        DetailsInfo = new QAction(anotherwindow);
        DetailsInfo->setObjectName(QString::fromUtf8("DetailsInfo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/details.png"), QSize(), QIcon::Normal, QIcon::Off);
        DetailsInfo->setIcon(icon5);
        Salary = new QAction(anotherwindow);
        Salary->setObjectName(QString::fromUtf8("Salary"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/salary.png"), QSize(), QIcon::Normal, QIcon::Off);
        Salary->setIcon(icon6);
        GenerationAct = new QAction(anotherwindow);
        GenerationAct->setObjectName(QString::fromUtf8("GenerationAct"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        GenerationAct->setIcon(icon7);
        Salary_graph = new QAction(anotherwindow);
        Salary_graph->setObjectName(QString::fromUtf8("Salary_graph"));
        refresh = new QAction(anotherwindow);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh->setIcon(icon8);
        exportIn = new QAction(anotherwindow);
        exportIn->setObjectName(QString::fromUtf8("exportIn"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportIn->setIcon(icon9);
        importFrom = new QAction(anotherwindow);
        importFrom->setObjectName(QString::fromUtf8("importFrom"));
        centralwidget = new QWidget(anotherwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        AddButton = new QPushButton(centralwidget);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50; /* \320\227\320\265\320\273\320\265\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size: 16px;\n"
"    margin: 4px 2px;\n"
"    border-radius: 12px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* \320\221\320\276\320\273\320\265\320\265 \321\202\320\265\320\274\320\275\321\213\320\271 \320\267\320\265\320\273\320\265\320\275\321\213\320\271 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #388E3C; /* \320\225\321\211\320\265 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270"
                        "\320\270 */\n"
"}\n"
""));

        horizontalLayout->addWidget(AddButton);

        DeleteButton = new QPushButton(centralwidget);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));
        DeleteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f44336; /* \320\232\321\200\320\260\321\201\320\275\321\213\320\271 \321\204\320\276\320\275 */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 24px;\n"
"    text-align: center;\n"
"    font-size: 16px;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d32f2f; /* \320\221\320\276\320\273\320\265\320\265 \321\202\320\265\320\274\320\275\321\213\320\271 \320\272\321\200\320\260\321\201\320\275\321\213\320\271 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #b71c1c; /* \320\225\321\211\320\265 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    color: #fff5f5; /* \320\221\320\276\320\273\320\265\320\265 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270"
                        "\320\270 */\n"
"}\n"
""));

        horizontalLayout->addWidget(DeleteButton);


        verticalLayout->addLayout(horizontalLayout);

        anotherwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(anotherwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1169, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        anotherwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(anotherwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        anotherwindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(TryToVisual);
        menu->addAction(Archive);
        menu->addAction(GenerationAct);
        menu->addAction(exportIn);
        menu->addAction(importFrom);
        menu_2->addAction(Save);
        menu_2->addAction(Search);
        menu_2->addAction(refresh);
        menu_3->addAction(EditEmployee);
        menu_3->addAction(Salary);
        menu_4->addAction(DetailsInfo);

        retranslateUi(anotherwindow);

        QMetaObject::connectSlotsByName(anotherwindow);
    } // setupUi

    void retranslateUi(QMainWindow *anotherwindow)
    {
        anotherwindow->setWindowTitle(QCoreApplication::translate("anotherwindow", "MainWindow", nullptr));
        action_2->setText(QCoreApplication::translate("anotherwindow", "\320\222\320\270\320\267\321\203\320\260\320\273\321\214\320\275\320\276\320\265 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        TryToVisual->setText(QCoreApplication::translate("anotherwindow", "\320\222\320\270\320\267\321\203\320\260\320\273\321\214\320\275\320\276\320\265 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
#if QT_CONFIG(shortcut)
        TryToVisual->setShortcut(QCoreApplication::translate("anotherwindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        Save->setText(QCoreApplication::translate("anotherwindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        Save->setShortcut(QCoreApplication::translate("anotherwindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        Search->setText(QCoreApplication::translate("anotherwindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
#if QT_CONFIG(shortcut)
        Search->setShortcut(QCoreApplication::translate("anotherwindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        Archive->setText(QCoreApplication::translate("anotherwindow", "\320\220\321\200\321\205\320\270\320\262", nullptr));
#if QT_CONFIG(shortcut)
        Archive->setShortcut(QCoreApplication::translate("anotherwindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        EditEmployee->setText(QCoreApplication::translate("anotherwindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260\320\274\320\270", nullptr));
#if QT_CONFIG(shortcut)
        EditEmployee->setShortcut(QCoreApplication::translate("anotherwindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        DetailsInfo->setText(QCoreApplication::translate("anotherwindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\275\321\213\320\265 \320\264\320\265\321\202\320\260\320\273\320\270", nullptr));
#if QT_CONFIG(shortcut)
        DetailsInfo->setShortcut(QCoreApplication::translate("anotherwindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        Salary->setText(QCoreApplication::translate("anotherwindow", "\320\227\320\260\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\276", nullptr));
#if QT_CONFIG(shortcut)
        Salary->setShortcut(QCoreApplication::translate("anotherwindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        GenerationAct->setText(QCoreApplication::translate("anotherwindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217 \320\260\320\272\321\202\320\260", nullptr));
#if QT_CONFIG(shortcut)
        GenerationAct->setShortcut(QCoreApplication::translate("anotherwindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        Salary_graph->setText(QCoreApplication::translate("anotherwindow", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", nullptr));
        refresh->setText(QCoreApplication::translate("anotherwindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        refresh->setShortcut(QCoreApplication::translate("anotherwindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        exportIn->setText(QCoreApplication::translate("anotherwindow", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        importFrom->setText(QCoreApplication::translate("anotherwindow", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
        AddButton->setText(QCoreApplication::translate("anotherwindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        DeleteButton->setText(QCoreApplication::translate("anotherwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("anotherwindow", "\320\237\320\265\321\200\320\265\321\205\320\276\320\264", nullptr));
        menu_2->setTitle(QCoreApplication::translate("anotherwindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\320\265", nullptr));
        menu_3->setTitle(QCoreApplication::translate("anotherwindow", "\320\237\320\265\321\200\321\201\320\276\320\275\320\260\320\273", nullptr));
        menu_4->setTitle(QCoreApplication::translate("anotherwindow", "\320\224\320\265\321\202\320\260\320\273\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class anotherwindow: public Ui_anotherwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_H
