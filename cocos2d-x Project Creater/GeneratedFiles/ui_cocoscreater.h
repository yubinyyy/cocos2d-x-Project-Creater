/********************************************************************************
** Form generated from reading UI file 'cocoscreater.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COCOSCREATER_H
#define UI_COCOSCREATER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CCocosCreaterClass
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *lbProjectName;
    QLineEdit *leProjectName;
    QLabel *lbPackageName;
    QLineEdit *lePackageName;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *RbtnCpp;
    QRadioButton *RbtnLua;
    QRadioButton *RbtnJs;
    QLabel *lbProjectPath;
    QLineEdit *leProjectPath;
    QPushButton *btnBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCreate;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *CCocosCreaterClass)
    {
        if (CCocosCreaterClass->objectName().isEmpty())
            CCocosCreaterClass->setObjectName(QStringLiteral("CCocosCreaterClass"));
        CCocosCreaterClass->resize(381, 189);
        verticalLayout = new QVBoxLayout(CCocosCreaterClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lbProjectName = new QLabel(CCocosCreaterClass);
        lbProjectName->setObjectName(QStringLiteral("lbProjectName"));

        gridLayout->addWidget(lbProjectName, 0, 0, 1, 1);

        leProjectName = new QLineEdit(CCocosCreaterClass);
        leProjectName->setObjectName(QStringLiteral("leProjectName"));

        gridLayout->addWidget(leProjectName, 0, 1, 1, 1);

        lbPackageName = new QLabel(CCocosCreaterClass);
        lbPackageName->setObjectName(QStringLiteral("lbPackageName"));

        gridLayout->addWidget(lbPackageName, 1, 0, 1, 1);

        lePackageName = new QLineEdit(CCocosCreaterClass);
        lePackageName->setObjectName(QStringLiteral("lePackageName"));

        gridLayout->addWidget(lePackageName, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        RbtnCpp = new QRadioButton(CCocosCreaterClass);
        RbtnCpp->setObjectName(QStringLiteral("RbtnCpp"));
        RbtnCpp->setChecked(true);

        horizontalLayout_2->addWidget(RbtnCpp);

        RbtnLua = new QRadioButton(CCocosCreaterClass);
        RbtnLua->setObjectName(QStringLiteral("RbtnLua"));

        horizontalLayout_2->addWidget(RbtnLua);

        RbtnJs = new QRadioButton(CCocosCreaterClass);
        RbtnJs->setObjectName(QStringLiteral("RbtnJs"));

        horizontalLayout_2->addWidget(RbtnJs);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 3);

        lbProjectPath = new QLabel(CCocosCreaterClass);
        lbProjectPath->setObjectName(QStringLiteral("lbProjectPath"));

        gridLayout->addWidget(lbProjectPath, 3, 0, 1, 1);

        leProjectPath = new QLineEdit(CCocosCreaterClass);
        leProjectPath->setObjectName(QStringLiteral("leProjectPath"));

        gridLayout->addWidget(leProjectPath, 3, 1, 1, 1);

        btnBrowser = new QPushButton(CCocosCreaterClass);
        btnBrowser->setObjectName(QStringLiteral("btnBrowser"));

        gridLayout->addWidget(btnBrowser, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCreate = new QPushButton(CCocosCreaterClass);
        btnCreate->setObjectName(QStringLiteral("btnCreate"));

        horizontalLayout->addWidget(btnCreate);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CCocosCreaterClass);

        QMetaObject::connectSlotsByName(CCocosCreaterClass);
    } // setupUi

    void retranslateUi(QDialog *CCocosCreaterClass)
    {
        CCocosCreaterClass->setWindowTitle(QApplication::translate("CCocosCreaterClass", "Cocos2d-x\345\267\245\347\250\213\345\210\233\345\273\272\345\231\250", 0));
        lbProjectName->setText(QApplication::translate("CCocosCreaterClass", "\345\267\245\347\250\213\345\220\215\347\247\260\357\274\232", 0));
        leProjectName->setText(QApplication::translate("CCocosCreaterClass", "NewProject", 0));
        lbPackageName->setText(QApplication::translate("CCocosCreaterClass", "\345\214\205\345\220\215\347\247\260\357\274\232", 0));
        lePackageName->setText(QApplication::translate("CCocosCreaterClass", "NewPacket", 0));
        RbtnCpp->setText(QApplication::translate("CCocosCreaterClass", "Cpp", 0));
        RbtnLua->setText(QApplication::translate("CCocosCreaterClass", "Lua", 0));
        RbtnJs->setText(QApplication::translate("CCocosCreaterClass", "Js", 0));
        lbProjectPath->setText(QApplication::translate("CCocosCreaterClass", "\350\267\257\345\276\204\357\274\232", 0));
        btnBrowser->setText(QApplication::translate("CCocosCreaterClass", "\346\265\217\350\247\210", 0));
        btnCreate->setText(QApplication::translate("CCocosCreaterClass", "\345\210\233\345\273\272", 0));
    } // retranslateUi

};

namespace Ui {
    class CCocosCreaterClass: public Ui_CCocosCreaterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COCOSCREATER_H
