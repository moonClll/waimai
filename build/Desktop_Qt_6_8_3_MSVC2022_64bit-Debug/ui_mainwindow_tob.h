/********************************************************************************
** Form generated from reading UI file 'mainwindow_tob.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_TOB_H
#define UI_MAINWINDOW_TOB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_tob
{
public:
    QAction *action_back;
    QAction *action_3;
    QAction *action_change;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow_tob)
    {
        if (MainWindow_tob->objectName().isEmpty())
            MainWindow_tob->setObjectName("MainWindow_tob");
        MainWindow_tob->resize(450, 800);
        MainWindow_tob->setMinimumSize(QSize(450, 800));
        MainWindow_tob->setMaximumSize(QSize(450, 800));
        action_back = new QAction(MainWindow_tob);
        action_back->setObjectName("action_back");
        action_3 = new QAction(MainWindow_tob);
        action_3->setObjectName("action_3");
        action_change = new QAction(MainWindow_tob);
        action_change->setObjectName("action_change");
        centralwidget = new QWidget(MainWindow_tob);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 401, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 170, 111, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 260, 111, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(170, 350, 111, 24));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(170, 90, 111, 21));
        QFont font1;
        font1.setPointSize(9);
        pushButton_4->setFont(font1);
        MainWindow_tob->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow_tob);
        statusbar->setObjectName("statusbar");
        MainWindow_tob->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow_tob);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 450, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow_tob->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow_tob);

        QMetaObject::connectSlotsByName(MainWindow_tob);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_tob)
    {
        MainWindow_tob->setWindowTitle(QCoreApplication::translate("MainWindow_tob", "MainWindow", nullptr));
        action_back->setText(QCoreApplication::translate("MainWindow_tob", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow_tob", "\344\277\256\346\224\271\345\234\260\345\235\200", nullptr));
        action_change->setText(QCoreApplication::translate("MainWindow_tob", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow_tob", "\350\217\234\345\215\225\347\256\241\347\220\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow_tob", "\350\256\242\345\215\225\347\256\241\347\220\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow_tob", "\350\220\245\346\224\266\346\237\245\347\234\213", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow_tob", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow_tob", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_tob: public Ui_MainWindow_tob {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_TOB_H
