/********************************************************************************
** Form generated from reading UI file 'widgetusb202.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETUSB202_H
#define UI_WIDGETUSB202_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetUSB202
{
public:
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_BP1;
    QLabel *label_BP2;
    QLabel *label_BP3;
    QLabel *label_BP4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_LED1;
    QCheckBox *checkBox_LED2;
    QCheckBox *checkBox_LED3;
    QCheckBox *checkBox_LED4;

    void setupUi(QWidget *WidgetUSB202)
    {
        if (WidgetUSB202->objectName().isEmpty())
            WidgetUSB202->setObjectName(QString::fromUtf8("WidgetUSB202"));
        WidgetUSB202->resize(800, 600);
        pushButton = new QPushButton(WidgetUSB202);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 60, 101, 31));
        verticalLayoutWidget = new QWidget(WidgetUSB202);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 81, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_BP1 = new QLabel(verticalLayoutWidget);
        label_BP1->setObjectName(QString::fromUtf8("label_BP1"));
        QFont font;
        font.setPointSize(15);
        label_BP1->setFont(font);
        label_BP1->setAutoFillBackground(false);
        label_BP1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0)"));
        label_BP1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_BP1);

        label_BP2 = new QLabel(verticalLayoutWidget);
        label_BP2->setObjectName(QString::fromUtf8("label_BP2"));
        label_BP2->setFont(font);
        label_BP2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0)"));
        label_BP2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_BP2);

        label_BP3 = new QLabel(verticalLayoutWidget);
        label_BP3->setObjectName(QString::fromUtf8("label_BP3"));
        label_BP3->setFont(font);
        label_BP3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0)"));
        label_BP3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_BP3);

        label_BP4 = new QLabel(verticalLayoutWidget);
        label_BP4->setObjectName(QString::fromUtf8("label_BP4"));
        label_BP4->setFont(font);
        label_BP4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0)"));
        label_BP4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_BP4);

        verticalLayoutWidget_2 = new QWidget(WidgetUSB202);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(110, 10, 81, 136));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox_LED1 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_LED1->setObjectName(QString::fromUtf8("checkBox_LED1"));
        checkBox_LED1->setFont(font);

        verticalLayout_2->addWidget(checkBox_LED1);

        checkBox_LED2 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_LED2->setObjectName(QString::fromUtf8("checkBox_LED2"));
        checkBox_LED2->setFont(font);

        verticalLayout_2->addWidget(checkBox_LED2);

        checkBox_LED3 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_LED3->setObjectName(QString::fromUtf8("checkBox_LED3"));
        checkBox_LED3->setFont(font);

        verticalLayout_2->addWidget(checkBox_LED3);

        checkBox_LED4 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_LED4->setObjectName(QString::fromUtf8("checkBox_LED4"));
        checkBox_LED4->setFont(font);

        verticalLayout_2->addWidget(checkBox_LED4);


        retranslateUi(WidgetUSB202);
        QObject::connect(pushButton, &QPushButton::clicked, WidgetUSB202, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(WidgetUSB202);
    } // setupUi

    void retranslateUi(QWidget *WidgetUSB202)
    {
        WidgetUSB202->setWindowTitle(QCoreApplication::translate("WidgetUSB202", "WidgetUSB202", nullptr));
        pushButton->setText(QCoreApplication::translate("WidgetUSB202", "Quitter", nullptr));
        label_BP1->setText(QCoreApplication::translate("WidgetUSB202", "BP 1", nullptr));
        label_BP2->setText(QCoreApplication::translate("WidgetUSB202", "BP 2", nullptr));
        label_BP3->setText(QCoreApplication::translate("WidgetUSB202", "BP 3", nullptr));
        label_BP4->setText(QCoreApplication::translate("WidgetUSB202", "BP 4", nullptr));
        checkBox_LED1->setText(QCoreApplication::translate("WidgetUSB202", "LED 1", nullptr));
        checkBox_LED2->setText(QCoreApplication::translate("WidgetUSB202", "LED 2", nullptr));
        checkBox_LED3->setText(QCoreApplication::translate("WidgetUSB202", "LED 3", nullptr));
        checkBox_LED4->setText(QCoreApplication::translate("WidgetUSB202", "LED 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetUSB202: public Ui_WidgetUSB202 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETUSB202_H
