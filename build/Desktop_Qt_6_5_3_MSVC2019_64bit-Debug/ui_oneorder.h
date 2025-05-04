/********************************************************************************
** Form generated from reading UI file 'oneorder.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEORDER_H
#define UI_ONEORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oneOrder
{
public:
    QTextBrowser *showorder;
    QPushButton *complete;

    void setupUi(QWidget *oneOrder)
    {
        if (oneOrder->objectName().isEmpty())
            oneOrder->setObjectName("oneOrder");
        oneOrder->resize(400, 300);
        oneOrder->setMinimumSize(QSize(400, 300));
        oneOrder->setMaximumSize(QSize(400, 300));
        showorder = new QTextBrowser(oneOrder);
        showorder->setObjectName("showorder");
        showorder->setGeometry(QRect(30, 30, 251, 241));
        complete = new QPushButton(oneOrder);
        complete->setObjectName("complete");
        complete->setGeometry(QRect(300, 140, 80, 24));

        retranslateUi(oneOrder);

        QMetaObject::connectSlotsByName(oneOrder);
    } // setupUi

    void retranslateUi(QWidget *oneOrder)
    {
        oneOrder->setWindowTitle(QCoreApplication::translate("oneOrder", "Form", nullptr));
        complete->setText(QCoreApplication::translate("oneOrder", "\345\256\214\346\210\220\350\256\242\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oneOrder: public Ui_oneOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEORDER_H
