/********************************************************************************
** Form generated from reading UI file 'hotpoint_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTPOINT_PANEL_H
#define UI_HOTPOINT_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HotpointPanel
{
public:
    QGridLayout *gridLayout;
    QGroupBox *HotPointBox;
    QVBoxLayout *verticalLayout_59;
    QGroupBox *hpPositionInputBox;
    QVBoxLayout *verticalLayout_39;
    QPushButton *btn_hotPoint_current;
    QPushButton *btn_hp_data;
    QVBoxLayout *verticalLayout_34;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_29;
    QLineEdit *le_hp_la;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_30;
    QLineEdit *le_hp_lo;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_31;
    QLineEdit *le_hp_al;
    QGroupBox *hpParametersInputBox;
    QVBoxLayout *verticalLayout_51;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_32;
    QLineEdit *le_hp_ra;
    QPushButton *btn_hp_setRadius;
    QHBoxLayout *horizontalLayout_48;
    QLabel *label_33;
    QLineEdit *le_hp_pa;
    QPushButton *btn_hp_setPal;
    QHBoxLayout *horizontalLayout_53;
    QPushButton *btn_hp_setYaw;
    QComboBox *cb_hp_yaw;
    QCheckBox *cb_hp_cl;
    QHBoxLayout *horizontalLayout_37;
    QPushButton *btn_hotPoint_start;
    QPushButton *btn_hotPoint_stop;
    QPushButton *btn_hp_pause;
    QHBoxLayout *horizontalLayout_40;
    QPushButton *btn_camera_send_8;
    QPushButton *btn_camera_send_7;

    void setupUi(QFrame *HotpointPanel)
    {
        if (HotpointPanel->objectName().isEmpty())
            HotpointPanel->setObjectName(QStringLiteral("HotpointPanel"));
        HotpointPanel->resize(520, 675);
        HotpointPanel->setMaximumSize(QSize(520, 675));
        HotpointPanel->setFrameShape(QFrame::StyledPanel);
        HotpointPanel->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(HotpointPanel);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(12, 12, 12, 12);
        HotPointBox = new QGroupBox(HotpointPanel);
        HotPointBox->setObjectName(QStringLiteral("HotPointBox"));
        HotPointBox->setEnabled(true);
        HotPointBox->setMinimumSize(QSize(270, 629));
        verticalLayout_59 = new QVBoxLayout(HotPointBox);
        verticalLayout_59->setSpacing(6);
        verticalLayout_59->setObjectName(QStringLiteral("verticalLayout_59"));
        verticalLayout_59->setContentsMargins(12, 12, 12, 12);
        hpPositionInputBox = new QGroupBox(HotPointBox);
        hpPositionInputBox->setObjectName(QStringLiteral("hpPositionInputBox"));
        hpPositionInputBox->setMinimumSize(QSize(0, 160));
        verticalLayout_39 = new QVBoxLayout(hpPositionInputBox);
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        verticalLayout_39->setContentsMargins(12, 12, 12, 12);
        btn_hotPoint_current = new QPushButton(hpPositionInputBox);
        btn_hotPoint_current->setObjectName(QStringLiteral("btn_hotPoint_current"));
        btn_hotPoint_current->setMinimumSize(QSize(0, 25));

        verticalLayout_39->addWidget(btn_hotPoint_current);

        btn_hp_data = new QPushButton(hpPositionInputBox);
        btn_hp_data->setObjectName(QStringLiteral("btn_hp_data"));
        btn_hp_data->setMinimumSize(QSize(0, 25));

        verticalLayout_39->addWidget(btn_hp_data);

        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        label_29 = new QLabel(hpPositionInputBox);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_41->addWidget(label_29);

        le_hp_la = new QLineEdit(hpPositionInputBox);
        le_hp_la->setObjectName(QStringLiteral("le_hp_la"));
        le_hp_la->setMinimumSize(QSize(80, 0));
        le_hp_la->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_41->addWidget(le_hp_la);


        verticalLayout_34->addLayout(horizontalLayout_41);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        label_30 = new QLabel(hpPositionInputBox);
        label_30->setObjectName(QStringLiteral("label_30"));

        horizontalLayout_42->addWidget(label_30);

        le_hp_lo = new QLineEdit(hpPositionInputBox);
        le_hp_lo->setObjectName(QStringLiteral("le_hp_lo"));
        le_hp_lo->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_42->addWidget(le_hp_lo);


        verticalLayout_34->addLayout(horizontalLayout_42);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setObjectName(QStringLiteral("horizontalLayout_43"));
        label_31 = new QLabel(hpPositionInputBox);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_43->addWidget(label_31);

        le_hp_al = new QLineEdit(hpPositionInputBox);
        le_hp_al->setObjectName(QStringLiteral("le_hp_al"));
        le_hp_al->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_43->addWidget(le_hp_al);


        verticalLayout_34->addLayout(horizontalLayout_43);


        verticalLayout_39->addLayout(verticalLayout_34);


        verticalLayout_59->addWidget(hpPositionInputBox);

        hpParametersInputBox = new QGroupBox(HotPointBox);
        hpParametersInputBox->setObjectName(QStringLiteral("hpParametersInputBox"));
        hpParametersInputBox->setMinimumSize(QSize(0, 100));
        verticalLayout_51 = new QVBoxLayout(hpParametersInputBox);
        verticalLayout_51->setSpacing(6);
        verticalLayout_51->setObjectName(QStringLiteral("verticalLayout_51"));
        verticalLayout_51->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        label_32 = new QLabel(hpParametersInputBox);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_39->addWidget(label_32);

        le_hp_ra = new QLineEdit(hpParametersInputBox);
        le_hp_ra->setObjectName(QStringLiteral("le_hp_ra"));
        le_hp_ra->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_39->addWidget(le_hp_ra);

        btn_hp_setRadius = new QPushButton(hpParametersInputBox);
        btn_hp_setRadius->setObjectName(QStringLiteral("btn_hp_setRadius"));
        btn_hp_setRadius->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_39->addWidget(btn_hp_setRadius);


        verticalLayout_51->addLayout(horizontalLayout_39);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setObjectName(QStringLiteral("horizontalLayout_48"));
        label_33 = new QLabel(hpParametersInputBox);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout_48->addWidget(label_33);

        le_hp_pa = new QLineEdit(hpParametersInputBox);
        le_hp_pa->setObjectName(QStringLiteral("le_hp_pa"));
        le_hp_pa->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_48->addWidget(le_hp_pa);

        btn_hp_setPal = new QPushButton(hpParametersInputBox);
        btn_hp_setPal->setObjectName(QStringLiteral("btn_hp_setPal"));

        horizontalLayout_48->addWidget(btn_hp_setPal);


        verticalLayout_51->addLayout(horizontalLayout_48);

        horizontalLayout_53 = new QHBoxLayout();
        horizontalLayout_53->setObjectName(QStringLiteral("horizontalLayout_53"));
        btn_hp_setYaw = new QPushButton(hpParametersInputBox);
        btn_hp_setYaw->setObjectName(QStringLiteral("btn_hp_setYaw"));
        btn_hp_setYaw->setMinimumSize(QSize(75, 0));
        btn_hp_setYaw->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_53->addWidget(btn_hp_setYaw);

        cb_hp_yaw = new QComboBox(hpParametersInputBox);
        cb_hp_yaw->addItem(QString());
        cb_hp_yaw->addItem(QString());
        cb_hp_yaw->addItem(QString());
        cb_hp_yaw->addItem(QString());
        cb_hp_yaw->addItem(QString());
        cb_hp_yaw->setObjectName(QStringLiteral("cb_hp_yaw"));

        horizontalLayout_53->addWidget(cb_hp_yaw);

        cb_hp_cl = new QCheckBox(hpParametersInputBox);
        cb_hp_cl->setObjectName(QStringLiteral("cb_hp_cl"));

        horizontalLayout_53->addWidget(cb_hp_cl);


        verticalLayout_51->addLayout(horizontalLayout_53);


        verticalLayout_59->addWidget(hpParametersInputBox);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        horizontalLayout_37->setContentsMargins(12, 12, 12, 12);
        btn_hotPoint_start = new QPushButton(HotPointBox);
        btn_hotPoint_start->setObjectName(QStringLiteral("btn_hotPoint_start"));

        horizontalLayout_37->addWidget(btn_hotPoint_start);

        btn_hotPoint_stop = new QPushButton(HotPointBox);
        btn_hotPoint_stop->setObjectName(QStringLiteral("btn_hotPoint_stop"));

        horizontalLayout_37->addWidget(btn_hotPoint_stop);

        btn_hp_pause = new QPushButton(HotPointBox);
        btn_hp_pause->setObjectName(QStringLiteral("btn_hp_pause"));
        btn_hp_pause->setCheckable(true);

        horizontalLayout_37->addWidget(btn_hp_pause);


        verticalLayout_59->addLayout(horizontalLayout_37);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        btn_camera_send_8 = new QPushButton(HotPointBox);
        btn_camera_send_8->setObjectName(QStringLiteral("btn_camera_send_8"));

        horizontalLayout_40->addWidget(btn_camera_send_8);

        btn_camera_send_7 = new QPushButton(HotPointBox);
        btn_camera_send_7->setObjectName(QStringLiteral("btn_camera_send_7"));

        horizontalLayout_40->addWidget(btn_camera_send_7);


        verticalLayout_59->addLayout(horizontalLayout_40);


        gridLayout->addWidget(HotPointBox, 0, 0, 1, 1);


        retranslateUi(HotpointPanel);

        QMetaObject::connectSlotsByName(HotpointPanel);
    } // setupUi

    void retranslateUi(QFrame *HotpointPanel)
    {
        HotpointPanel->setWindowTitle(QApplication::translate("HotpointPanel", "Frame", nullptr));
        HotPointBox->setTitle(QApplication::translate("HotpointPanel", "Hotpoint/POI Setup", nullptr));
        hpPositionInputBox->setTitle(QApplication::translate("HotpointPanel", "Position", nullptr));
        btn_hotPoint_current->setText(QApplication::translate("HotpointPanel", "Set Current Position As Hotpoint", nullptr));
        btn_hp_data->setText(QApplication::translate("HotpointPanel", "Reset and Input New Hoptpoint Position", nullptr));
        label_29->setText(QApplication::translate("HotpointPanel", "Latitude (Deg)", nullptr));
        le_hp_la->setText(QString());
        label_30->setText(QApplication::translate("HotpointPanel", "Longitude (Deg)", nullptr));
        le_hp_lo->setText(QString());
        label_31->setText(QApplication::translate("HotpointPanel", "Altitude (Meters)", nullptr));
        le_hp_al->setText(QString());
        hpParametersInputBox->setTitle(QApplication::translate("HotpointPanel", "Mission Parameters", nullptr));
        label_32->setText(QApplication::translate("HotpointPanel", "Radius", nullptr));
        le_hp_ra->setText(QApplication::translate("HotpointPanel", "10", nullptr));
        btn_hp_setRadius->setText(QApplication::translate("HotpointPanel", "set", nullptr));
        label_33->setText(QApplication::translate("HotpointPanel", "Yaw Rate", nullptr));
        le_hp_pa->setText(QApplication::translate("HotpointPanel", "15", nullptr));
        btn_hp_setPal->setText(QApplication::translate("HotpointPanel", "set", nullptr));
        btn_hp_setYaw->setText(QApplication::translate("HotpointPanel", "reset", nullptr));
        cb_hp_yaw->setItemText(0, QApplication::translate("HotpointPanel", "Auto Yaw", nullptr));
        cb_hp_yaw->setItemText(1, QApplication::translate("HotpointPanel", "Align Inside", nullptr));
        cb_hp_yaw->setItemText(2, QApplication::translate("HotpointPanel", "Align Outside", nullptr));
        cb_hp_yaw->setItemText(3, QApplication::translate("HotpointPanel", "User define", nullptr));
        cb_hp_yaw->setItemText(4, QApplication::translate("HotpointPanel", "Static", nullptr));

        cb_hp_cl->setText(QApplication::translate("HotpointPanel", "clockwise", nullptr));
        btn_hotPoint_start->setText(QApplication::translate("HotpointPanel", "start", nullptr));
        btn_hotPoint_stop->setText(QApplication::translate("HotpointPanel", "stop", nullptr));
        btn_hp_pause->setText(QApplication::translate("HotpointPanel", "pause", nullptr));
        btn_camera_send_8->setText(QApplication::translate("HotpointPanel", "check", nullptr));
        btn_camera_send_7->setText(QApplication::translate("HotpointPanel", "reset yaw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HotpointPanel: public Ui_HotpointPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTPOINT_PANEL_H
