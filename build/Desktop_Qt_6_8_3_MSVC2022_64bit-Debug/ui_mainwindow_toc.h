/********************************************************************************
** Form generated from reading UI file 'mainwindow_toc.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_TOC_H
#define UI_MAINWINDOW_TOC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_toc
{
public:
    QAction *action;
    QWidget *centralwidget;
    QLabel *label;
    QScrollArea *m_scrollArea;
    QWidget *scrollAreaWidgetContents;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow_toc)
    {
        if (MainWindow_toc->objectName().isEmpty())
            MainWindow_toc->setObjectName("MainWindow_toc");
        MainWindow_toc->resize(450, 800);
        MainWindow_toc->setMinimumSize(QSize(450, 800));
        MainWindow_toc->setMaximumSize(QSize(450, 843));
        action = new QAction(MainWindow_toc);
        action->setObjectName("action");
        centralwidget = new QWidget(MainWindow_toc);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(450, 800));
        centralwidget->setMaximumSize(QSize(450, 800));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 0, 101, 51));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        m_scrollArea = new QScrollArea(centralwidget);
        m_scrollArea->setObjectName("m_scrollArea");
        m_scrollArea->setGeometry(QRect(-10, 50, 450, 720));
        m_scrollArea->setMinimumSize(QSize(450, 720));
        m_scrollArea->setMaximumSize(QSize(450, 720));
        m_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 448, 718));
        m_scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow_toc->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow_toc);
        statusbar->setObjectName("statusbar");
        MainWindow_toc->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow_toc);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 450, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow_toc->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow_toc);
        QObject::connect(action, &QAction::triggered, MainWindow_toc, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow_toc);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_toc)
    {
        MainWindow_toc->setWindowTitle(QCoreApplication::translate("MainWindow_toc", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow_toc", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("MainWindow_toc", "\346\254\242\350\277\216\351\200\211\351\244\220", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow_toc", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_toc: public Ui_MainWindow_toc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_TOC_H
