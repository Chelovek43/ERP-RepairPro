/********************************************************************************
** Form generated from reading UI file 'graphiccircle.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICCIRCLE_H
#define UI_GRAPHICCIRCLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_graphicCircle
{
public:
    QHBoxLayout *horizontalLayout;
    QCustomPlot *widget;

    void setupUi(QWidget *graphicCircle)
    {
        if (graphicCircle->objectName().isEmpty())
            graphicCircle->setObjectName(QString::fromUtf8("graphicCircle"));
        graphicCircle->resize(745, 546);
        horizontalLayout = new QHBoxLayout(graphicCircle);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QCustomPlot(graphicCircle);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout->addWidget(widget);


        retranslateUi(graphicCircle);

        QMetaObject::connectSlotsByName(graphicCircle);
    } // setupUi

    void retranslateUi(QWidget *graphicCircle)
    {
        graphicCircle->setWindowTitle(QCoreApplication::translate("graphicCircle", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graphicCircle: public Ui_graphicCircle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICCIRCLE_H
