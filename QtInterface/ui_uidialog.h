/********************************************************************************
** Form generated from reading UI file 'uidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIDIALOG_H
#define UI_UIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_uiDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *uiDialog)
    {
        if (uiDialog->objectName().isEmpty())
            uiDialog->setObjectName(QString::fromUtf8("uiDialog"));
        uiDialog->resize(400, 537);
        verticalLayout = new QVBoxLayout(uiDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(uiDialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        buttonBox = new QDialogButtonBox(uiDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(uiDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), uiDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), uiDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(uiDialog);
    } // setupUi

    void retranslateUi(QDialog *uiDialog)
    {
        uiDialog->setWindowTitle(QApplication::translate("uiDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uiDialog: public Ui_uiDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIDIALOG_H
