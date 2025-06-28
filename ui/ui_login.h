/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *enter;
    QSpacerItem *verticalSpacer_2;
    QFormLayout *formLayout_2;
    QLabel *login;
    QLineEdit *LineForMyLogin;
    QLabel *pass;
    QLineEdit *LineForMyPassword;
    QCheckBox *rememberMeCheckBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ButtonForEnter;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(800, 600);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        enter = new QLabel(centralwidget);
        enter->setObjectName(QString::fromUtf8("enter"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(enter->sizePolicy().hasHeightForWidth());
        enter->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        enter->setFont(font);

        verticalLayout->addWidget(enter, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        login = new QLabel(centralwidget);
        login->setObjectName(QString::fromUtf8("login"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(14);
        login->setFont(font1);
        login->setPixmap(QPixmap(QString::fromUtf8(":/img/person.png")));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, login);

        LineForMyLogin = new QLineEdit(centralwidget);
        LineForMyLogin->setObjectName(QString::fromUtf8("LineForMyLogin"));
        sizePolicy1.setHeightForWidth(LineForMyLogin->sizePolicy().hasHeightForWidth());
        LineForMyLogin->setSizePolicy(sizePolicy1);
        LineForMyLogin->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding-left: 30px;  /* \320\236\321\202\321\201\321\202\321\203\320\277 \320\264\320\273\321\217 \320\270\320\272\320\276\320\275\320\272\320\270 */\n"
"    font-size: 16px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    height: 40px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid teal;\n"
"}"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, LineForMyLogin);

        pass = new QLabel(centralwidget);
        pass->setObjectName(QString::fromUtf8("pass"));
        sizePolicy1.setHeightForWidth(pass->sizePolicy().hasHeightForWidth());
        pass->setSizePolicy(sizePolicy1);
        pass->setFont(font1);
        pass->setPixmap(QPixmap(QString::fromUtf8(":/img/lock.png")));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pass);

        LineForMyPassword = new QLineEdit(centralwidget);
        LineForMyPassword->setObjectName(QString::fromUtf8("LineForMyPassword"));
        sizePolicy1.setHeightForWidth(LineForMyPassword->sizePolicy().hasHeightForWidth());
        LineForMyPassword->setSizePolicy(sizePolicy1);
        LineForMyPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding-left: 30px;  /* \320\236\321\202\321\201\321\202\321\203\320\277 \320\264\320\273\321\217 \320\270\320\272\320\276\320\275\320\272\320\270 */\n"
"    font-size: 16px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    height: 40px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid teal;\n"
"}"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, LineForMyPassword);


        verticalLayout->addLayout(formLayout_2);

        rememberMeCheckBox = new QCheckBox(centralwidget);
        rememberMeCheckBox->setObjectName(QString::fromUtf8("rememberMeCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(rememberMeCheckBox->sizePolicy().hasHeightForWidth());
        rememberMeCheckBox->setSizePolicy(sizePolicy2);
        QFont font2;
        rememberMeCheckBox->setFont(font2);
        rememberMeCheckBox->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    font-size: 18px;\n"
"    margin-left: 10px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}"));

        verticalLayout->addWidget(rememberMeCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        ButtonForEnter = new QPushButton(centralwidget);
        ButtonForEnter->setObjectName(QString::fromUtf8("ButtonForEnter"));
        sizePolicy1.setHeightForWidth(ButtonForEnter->sizePolicy().hasHeightForWidth());
        ButtonForEnter->setSizePolicy(sizePolicy1);
        ButtonForEnter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: teal;\n"
"    color: white;\n"
"    font-size: 18px;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #00695C;\n"
"}"));

        horizontalLayout_2->addWidget(ButtonForEnter);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        enter->setText(QCoreApplication::translate("Login", "\320\222\321\205\320\276\320\264", nullptr));
        login->setText(QString());
        pass->setText(QString());
        rememberMeCheckBox->setText(QCoreApplication::translate("Login", "\320\227\320\260\320\277\320\276\320\274\320\275\320\270\321\202\321\214", nullptr));
        ButtonForEnter->setText(QCoreApplication::translate("Login", "\320\222\320\276\320\271\321\202\320\270", nullptr));
#if QT_CONFIG(shortcut)
        ButtonForEnter->setShortcut(QCoreApplication::translate("Login", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
