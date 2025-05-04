/********************************************************************************
** Form generated from reading UI file 'menu_tob.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_TOB_H
#define UI_MENU_TOB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *pushButton;
    QLineEdit *name;
    QSpinBox *price;
    QTextEdit *introduction;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *id;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QTextEdit *photo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(800, 632);
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(60, 30, 711, 341));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 390, 80, 24));
        name = new QLineEdit(centralwidget);
        name->setObjectName("name");
        name->setGeometry(QRect(310, 430, 161, 23));
        price = new QSpinBox(centralwidget);
        price->setObjectName("price");
        price->setGeometry(QRect(520, 430, 51, 24));
        introduction = new QTextEdit(centralwidget);
        introduction->setObjectName("introduction");
        introduction->setGeometry(QRect(110, 470, 461, 51));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 430, 31, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 470, 31, 51));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(480, 430, 41, 21));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(690, 380, 80, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(110, 390, 80, 24));
        id = new QLineEdit(centralwidget);
        id->setObjectName("id");
        id->setGeometry(QRect(110, 430, 113, 23));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 430, 31, 21));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(490, 390, 80, 24));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 530, 31, 31));
        photo = new QTextEdit(centralwidget);
        photo->setObjectName("photo");
        photo->setGeometry(QRect(110, 530, 461, 31));
        Menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName("statusbar");
        Menu->setStatusBar(statusbar);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Menu", "\345\242\236\345\212\240\350\217\234\345\223\201", nullptr));
        label->setText(QCoreApplication::translate("Menu", "\350\217\234\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Menu", "\344\273\213\347\273\215", nullptr));
        label_3->setText(QCoreApplication::translate("Menu", "\345\215\225\344\273\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Menu", "\345\210\267\346\226\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Menu", "\345\210\240\351\231\244\350\217\234\345\223\201", nullptr));
        label_4->setText(QCoreApplication::translate("Menu", "id\345\217\267", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Menu", "\344\277\256\346\224\271\350\217\234\345\223\201", nullptr));
        label_5->setText(QCoreApplication::translate("Menu", "\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_TOB_H
