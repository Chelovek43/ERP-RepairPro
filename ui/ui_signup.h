/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *Hello;
    QSpacerItem *verticalSpacer;
    QPushButton *SignUpButton;

    void setupUi(QWidget *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(861, 442);
        QFont font;
        font.setPointSize(18);
        SignUp->setFont(font);
        verticalLayout = new QVBoxLayout(SignUp);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        Hello = new QLabel(SignUp);
        Hello->setObjectName(QString::fromUtf8("Hello"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Hello->sizePolicy().hasHeightForWidth());
        Hello->setSizePolicy(sizePolicy);
        Hello->setMidLineWidth(0);
        Hello->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Hello);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        SignUpButton = new QPushButton(SignUp);
        SignUpButton->setObjectName(QString::fromUtf8("SignUpButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SignUpButton->sizePolicy().hasHeightForWidth());
        SignUpButton->setSizePolicy(sizePolicy1);
        SignUpButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(SignUpButton);


        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QWidget *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Form", nullptr));
        Hello->setText(QCoreApplication::translate("SignUp", "\320\241 \320\262\320\276\320\267\320\262\321\200\320\260\321\211\320\265\320\275\320\270\320\265\320\274!", nullptr));
        SignUpButton->setText(QCoreApplication::translate("SignUp", "\320\222\320\276\320\271\321\202\320\270", nullptr));
#if QT_CONFIG(shortcut)
        SignUpButton->setShortcut(QCoreApplication::translate("SignUp", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
