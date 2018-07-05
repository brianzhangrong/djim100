/********************************************************************************
** Form generated from reading UI file 'mfio_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MFIO_PANEL_H
#define UI_MFIO_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MFIOPanel
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *cb_channel;
    QComboBox *cb_mode;
    QPushButton *btn_init;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *le_val;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *le_freq;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *cb_channel_get;
    QPushButton *btn_get;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_get;
    QLineEdit *le_val_get;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *cb_channel_set;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_set;
    QLineEdit *le_val_set;
    QPushButton *btn_set;

    void setupUi(QWidget *MFIOPanel)
    {
        if (MFIOPanel->objectName().isEmpty())
            MFIOPanel->setObjectName(QStringLiteral("MFIOPanel"));
        MFIOPanel->resize(580, 336);
        MFIOPanel->setMaximumSize(QSize(580, 336));
        verticalLayout = new QVBoxLayout(MFIOPanel);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(12, 12, 12, 12);
        groupBox = new QGroupBox(MFIOPanel);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setContentsMargins(12, 12, 12, 12);
        cb_channel = new QComboBox(groupBox);
        cb_channel->addItem(QString());
        cb_channel->addItem(QString());
        cb_channel->addItem(QString());
        cb_channel->addItem(QString());
        cb_channel->addItem(QString());
        cb_channel->addItem(QString());
        cb_channel->addItem(QString());
        cb_channel->addItem(QString());
        cb_channel->addItem(QString());
        cb_channel->setObjectName(QStringLiteral("cb_channel"));

        gridLayout->addWidget(cb_channel, 0, 0, 1, 2);

        cb_mode = new QComboBox(groupBox);
        cb_mode->addItem(QString());
        cb_mode->addItem(QString());
        cb_mode->addItem(QString());
        cb_mode->addItem(QString());
        cb_mode->addItem(QString());
        cb_mode->setObjectName(QStringLiteral("cb_mode"));

        gridLayout->addWidget(cb_mode, 0, 2, 1, 1);

        btn_init = new QPushButton(groupBox);
        btn_init->setObjectName(QStringLiteral("btn_init"));

        gridLayout->addWidget(btn_init, 0, 3, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        le_val = new QLineEdit(groupBox);
        le_val->setObjectName(QStringLiteral("le_val"));

        horizontalLayout->addWidget(le_val);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        le_freq = new QLineEdit(groupBox);
        le_freq->setObjectName(QStringLiteral("le_freq"));

        horizontalLayout_4->addWidget(le_freq);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 2);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MFIOPanel);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 90));
        horizontalLayout_5 = new QHBoxLayout(groupBox_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(12, 6, 12, 6);
        cb_channel_get = new QComboBox(groupBox_2);
        cb_channel_get->setObjectName(QStringLiteral("cb_channel_get"));
        cb_channel_get->setMinimumSize(QSize(161, 0));

        horizontalLayout_5->addWidget(cb_channel_get);

        btn_get = new QPushButton(groupBox_2);
        btn_get->setObjectName(QStringLiteral("btn_get"));

        horizontalLayout_5->addWidget(btn_get);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_get = new QLabel(groupBox_2);
        label_get->setObjectName(QStringLiteral("label_get"));

        horizontalLayout_2->addWidget(label_get);

        le_val_get = new QLineEdit(groupBox_2);
        le_val_get->setObjectName(QStringLiteral("le_val_get"));

        horizontalLayout_2->addWidget(le_val_get);


        horizontalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(MFIOPanel);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 89));
        horizontalLayout_6 = new QHBoxLayout(groupBox_3);
        horizontalLayout_6->setSpacing(12);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(12, 6, 12, 6);
        cb_channel_set = new QComboBox(groupBox_3);
        cb_channel_set->setObjectName(QStringLiteral("cb_channel_set"));
        cb_channel_set->setMinimumSize(QSize(166, 0));

        horizontalLayout_6->addWidget(cb_channel_set);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_set = new QLabel(groupBox_3);
        label_set->setObjectName(QStringLiteral("label_set"));

        horizontalLayout_3->addWidget(label_set);

        le_val_set = new QLineEdit(groupBox_3);
        le_val_set->setObjectName(QStringLiteral("le_val_set"));

        horizontalLayout_3->addWidget(le_val_set);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        btn_set = new QPushButton(groupBox_3);
        btn_set->setObjectName(QStringLiteral("btn_set"));

        horizontalLayout_6->addWidget(btn_set);


        verticalLayout->addWidget(groupBox_3);


        retranslateUi(MFIOPanel);

        QMetaObject::connectSlotsByName(MFIOPanel);
    } // setupUi

    void retranslateUi(QWidget *MFIOPanel)
    {
        MFIOPanel->setWindowTitle(QApplication::translate("MFIOPanel", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("MFIOPanel", "Initial Configuration and Setting Values", nullptr));
        cb_channel->setItemText(0, QApplication::translate("MFIOPanel", "channel_F1", nullptr));
        cb_channel->setItemText(1, QApplication::translate("MFIOPanel", "channel_F2", nullptr));
        cb_channel->setItemText(2, QApplication::translate("MFIOPanel", "channel_F3", nullptr));
        cb_channel->setItemText(3, QApplication::translate("MFIOPanel", "channel_F4", nullptr));
        cb_channel->setItemText(4, QApplication::translate("MFIOPanel", "channel_F5", nullptr));
        cb_channel->setItemText(5, QApplication::translate("MFIOPanel", "channel_F6", nullptr));
        cb_channel->setItemText(6, QApplication::translate("MFIOPanel", "channel_F7", nullptr));
        cb_channel->setItemText(7, QApplication::translate("MFIOPanel", "channel_F8", nullptr));
        cb_channel->setItemText(8, QString());

        cb_mode->setItemText(0, QApplication::translate("MFIOPanel", "PWMO", nullptr));
        cb_mode->setItemText(1, QApplication::translate("MFIOPanel", "PWMI", nullptr));
        cb_mode->setItemText(2, QApplication::translate("MFIOPanel", "GPO", nullptr));
        cb_mode->setItemText(3, QApplication::translate("MFIOPanel", "GPI", nullptr));
        cb_mode->setItemText(4, QApplication::translate("MFIOPanel", "ADC", nullptr));

        btn_init->setText(QApplication::translate("MFIOPanel", "Set \n"
"Configuration", nullptr));
        label_2->setText(QApplication::translate("MFIOPanel", "value", nullptr));
        label->setText(QApplication::translate("MFIOPanel", "freq", nullptr));
        groupBox_2->setTitle(QApplication::translate("MFIOPanel", "Reading Values", nullptr));
        btn_get->setText(QApplication::translate("MFIOPanel", "Get Value", nullptr));
        label_get->setText(QApplication::translate("MFIOPanel", "value", nullptr));
        groupBox_3->setTitle(QApplication::translate("MFIOPanel", "Writing Values", nullptr));
        label_set->setText(QApplication::translate("MFIOPanel", "value", nullptr));
        btn_set->setText(QApplication::translate("MFIOPanel", "Set Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MFIOPanel: public Ui_MFIOPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MFIO_PANEL_H
