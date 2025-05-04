/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *ensure_password;
    QPushButton *signup;
    QPushButton *back;
    QCheckBox *password_show;
    QCheckBox *ensure_password_show;
    QCheckBox *checktype;
    QLabel *label_4;
    QLineEdit *storename;

    void setupUi(QWidget *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(481, 308);
        label = new QLabel(Signup);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 80, 54, 16));
        label_2 = new QLabel(Signup);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 120, 54, 16));
        label_3 = new QLabel(Signup);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 160, 91, 16));
        username = new QLineEdit(Signup);
        username->setObjectName("username");
        username->setGeometry(QRect(140, 80, 191, 23));
        password = new QLineEdit(Signup);
        password->setObjectName("password");
        password->setGeometry(QRect(140, 120, 191, 23));
        password->setEchoMode(QLineEdit::Password);
        ensure_password = new QLineEdit(Signup);
        ensure_password->setObjectName("ensure_password");
        ensure_password->setGeometry(QRect(140, 160, 191, 23));
        ensure_password->setEchoMode(QLineEdit::Password);
        signup = new QPushButton(Signup);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(70, 210, 80, 24));
        back = new QPushButton(Signup);
        back->setObjectName("back");
        back->setGeometry(QRect(180, 210, 80, 24));
        password_show = new QCheckBox(Signup);
        password_show->setObjectName("password_show");
        password_show->setGeometry(QRect(350, 120, 91, 22));
        ensure_password_show = new QCheckBox(Signup);
        ensure_password_show->setObjectName("ensure_password_show");
        ensure_password_show->setGeometry(QRect(350, 160, 91, 22));
        checktype = new QCheckBox(Signup);
        checktype->setObjectName("checktype");
        checktype->setGeometry(QRect(290, 210, 81, 22));
        label_4 = new QLabel(Signup);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 250, 61, 41));
        storename = new QLineEdit(Signup);
        storename->setObjectName("storename");
        storename->setGeometry(QRect(140, 260, 281, 23));
        checktype->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        username->raise();
        password->raise();
        ensure_password->raise();
        signup->raise();
        back->raise();
        password_show->raise();
        ensure_password_show->raise();
        label_4->raise();
        storename->raise();

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QWidget *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Form", nullptr));
        label->setText(QCoreApplication::translate("Signup", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        signup->setText(QCoreApplication::translate("Signup", "\347\241\256\345\256\232", nullptr));
        back->setText(QCoreApplication::translate("Signup", "\350\277\224\345\233\236", nullptr));
        password_show->setText(QCoreApplication::translate("Signup", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        ensure_password_show->setText(QCoreApplication::translate("Signup", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        checktype->setText(QCoreApplication::translate("Signup", "\346\210\221\346\230\257\345\225\206\345\256\266", nullptr));
        label_4->setText(QCoreApplication::translate("Signup", "\345\272\227\351\223\272\345\220\215\347\247\260", nullptr));
        storename->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
