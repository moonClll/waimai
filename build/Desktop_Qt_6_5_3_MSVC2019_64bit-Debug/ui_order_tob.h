/********************************************************************************
** Form generated from reading UI file 'order_tob.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_TOB_H
#define UI_ORDER_TOB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_order_tob
{
public:
    QWidget *centralwidget;
    QScrollArea *m_scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *order_tob)
    {
        if (order_tob->objectName().isEmpty())
            order_tob->setObjectName("order_tob");
        order_tob->resize(520, 722);
        centralwidget = new QWidget(order_tob);
        centralwidget->setObjectName("centralwidget");
        m_scrollArea = new QScrollArea(centralwidget);
        m_scrollArea->setObjectName("m_scrollArea");
        m_scrollArea->setGeometry(QRect(0, 0, 500, 700));
        m_scrollArea->setMinimumSize(QSize(500, 700));
        m_scrollArea->setMaximumSize(QSize(500, 700));
        m_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 498, 698));
        m_scrollArea->setWidget(scrollAreaWidgetContents);
        order_tob->setCentralWidget(centralwidget);
        menubar = new QMenuBar(order_tob);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 520, 21));
        order_tob->setMenuBar(menubar);
        statusbar = new QStatusBar(order_tob);
        statusbar->setObjectName("statusbar");
        order_tob->setStatusBar(statusbar);

        retranslateUi(order_tob);

        QMetaObject::connectSlotsByName(order_tob);
    } // setupUi

    void retranslateUi(QMainWindow *order_tob)
    {
        order_tob->setWindowTitle(QCoreApplication::translate("order_tob", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class order_tob: public Ui_order_tob {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_TOB_H
