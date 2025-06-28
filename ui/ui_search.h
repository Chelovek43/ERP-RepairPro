/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *LineForSearch;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QString::fromUtf8("Search"));
        Search->resize(400, 300);
        verticalLayout = new QVBoxLayout(Search);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Search);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        LineForSearch = new QLineEdit(Search);
        LineForSearch->setObjectName(QString::fromUtf8("LineForSearch"));

        horizontalLayout->addWidget(LineForSearch);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(Search);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Search);
        QObject::connect(buttonBox, SIGNAL(accepted()), Search, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Search, SLOT(reject()));

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QCoreApplication::translate("Search", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Search", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\273\320\276\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
