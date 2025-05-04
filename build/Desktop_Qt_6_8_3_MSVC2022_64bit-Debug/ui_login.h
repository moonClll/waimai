/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_2;
    QPushButton *login;
    QPushButton *signup;
    QCheckBox *password_show;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(455, 300);
        username = new QLineEdit(Login);
        username->setObjectName("username");
        username->setGeometry(QRect(122, 60, 191, 23));
        password = new QLineEdit(Login);
        password->setObjectName("password");
        password->setGeometry(QRect(120, 110, 191, 23));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 70, 54, 16));
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 110, 54, 16));
        login = new QPushButton(Login);
        login->setObjectName("login");
        login->setGeometry(QRect(120, 170, 80, 24));
        signup = new QPushButton(Login);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(230, 170, 80, 24));
        password_show = new QCheckBox(Login);
        password_show->setObjectName("password_show");
        password_show->setGeometry(QRect(330, 110, 101, 22));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        label->setText(QCoreApplication::translate("Login", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
        login->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        signup->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        password_show->setText(QCoreApplication::translate("Login", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
