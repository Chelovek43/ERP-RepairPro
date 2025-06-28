/********************************************************************************
** Form generated from reading UI file 'manageprofessionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEPROFESSIONSDIALOG_H
#define UI_MANAGEPROFESSIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ManageProfessionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ManageProfessionsDialog)
    {
        if (ManageProfessionsDialog->objectName().isEmpty())
            ManageProfessionsDialog->setObjectName(QString::fromUtf8("ManageProfessionsDialog"));
        ManageProfessionsDialog->resize(720, 503);
        verticalLayout = new QVBoxLayout(ManageProfessionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(ManageProfessionsDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        buttonBox = new QDialogButtonBox(ManageProfessionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ManageProfessionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ManageProfessionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ManageProfessionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ManageProfessionsDialog);
    } // setupUi

    void retranslateUi(QDialog *ManageProfessionsDialog)
    {
        ManageProfessionsDialog->setWindowTitle(QCoreApplication::translate("ManageProfessionsDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageProfessionsDialog: public Ui_ManageProfessionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEPROFESSIONSDIALOG_H
