/********************************************************************************
** Form generated from reading UI file 'income_tob.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOME_TOB_H
#define UI_INCOME_TOB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Income
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *m_Layout;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Income)
    {
        if (Income->objectName().isEmpty())
            Income->setObjectName("Income");
        Income->resize(800, 800);
        Income->setMinimumSize(QSize(800, 800));
        Income->setMaximumSize(QSize(800, 800));
        centralwidget = new QWidget(Income);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 20, 91, 61));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(330, 30, 151, 41));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 110, 801, 641));
        m_Layout = new QVBoxLayout(verticalLayoutWidget);
        m_Layout->setObjectName("m_Layout");
        m_Layout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 30, 54, 41));
        label_2->setFont(font);
        Income->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Income);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Income->setMenuBar(menubar);
        statusbar = new QStatusBar(Income);
        statusbar->setObjectName("statusbar");
        Income->setStatusBar(statusbar);

        retranslateUi(Income);

        QMetaObject::connectSlotsByName(Income);
    } // setupUi

    void retranslateUi(QMainWindow *Income)
    {
        Income->setWindowTitle(QCoreApplication::translate("Income", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Income", "\346\200\273\350\220\245\346\224\266", nullptr));
        label_2->setText(QCoreApplication::translate("Income", "\345\205\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Income: public Ui_Income {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOME_TOB_H
