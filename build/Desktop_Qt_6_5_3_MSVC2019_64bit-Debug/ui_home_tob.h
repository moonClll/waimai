/********************************************************************************
** Form generated from reading UI file 'home_tob.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_TOB_H
#define UI_HOME_TOB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QWidget *centralwidget;
    QGraphicsView *photo;
    QPushButton *change;
    QTextEdit *storeaddress;
    QLabel *label;
    QTextEdit *storename;
    QLabel *label_2;
    QTextEdit *storephoto;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName("home");
        home->resize(700, 300);
        home->setMinimumSize(QSize(700, 300));
        home->setMaximumSize(QSize(700, 300));
        centralwidget = new QWidget(home);
        centralwidget->setObjectName("centralwidget");
        photo = new QGraphicsView(centralwidget);
        photo->setObjectName("photo");
        photo->setGeometry(QRect(20, 20, 200, 200));
        photo->setMinimumSize(QSize(200, 200));
        photo->setMaximumSize(QSize(200, 200));
        change = new QPushButton(centralwidget);
        change->setObjectName("change");
        change->setGeometry(QRect(300, 220, 80, 24));
        storeaddress = new QTextEdit(centralwidget);
        storeaddress->setObjectName("storeaddress");
        storeaddress->setGeometry(QRect(325, 95, 301, 41));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(228, 21, 91, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        storename = new QTextEdit(centralwidget);
        storename->setObjectName("storename");
        storename->setGeometry(QRect(325, 21, 301, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(228, 95, 91, 41));
        label_2->setFont(font);
        storephoto = new QTextEdit(centralwidget);
        storephoto->setObjectName("storephoto");
        storephoto->setGeometry(QRect(325, 168, 301, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(228, 168, 91, 41));
        label_3->setFont(font);
        home->setCentralWidget(centralwidget);
        menubar = new QMenuBar(home);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 21));
        home->setMenuBar(menubar);
        statusbar = new QStatusBar(home);
        statusbar->setObjectName("statusbar");
        home->setStatusBar(statusbar);

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QMainWindow *home)
    {
        home->setWindowTitle(QCoreApplication::translate("home", "MainWindow", nullptr));
        change->setText(QCoreApplication::translate("home", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label->setText(QCoreApplication::translate("home", "\345\272\227\351\223\272\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("home", "\345\272\227\351\223\272\345\234\260\345\235\200", nullptr));
        label_3->setText(QCoreApplication::translate("home", "\345\272\227\351\223\272\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_TOB_H
