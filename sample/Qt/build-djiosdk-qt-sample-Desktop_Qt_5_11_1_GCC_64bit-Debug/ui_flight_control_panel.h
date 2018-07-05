/********************************************************************************
** Form generated from reading UI file 'flight_control_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHT_CONTROL_PANEL_H
#define UI_FLIGHT_CONTROL_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlightControlPanel
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox4;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QComboBox *cb_command;
    QPushButton *btn_flight_runCommand;
    QGroupBox *groupBox5;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QGroupBox *horizontalControlBox;
    QVBoxLayout *verticalLayout_23;
    QRadioButton *btr_flight_HLA;
    QRadioButton *btr_flight_HLV;
    QRadioButton *btr_flight_HLP;
    QRadioButton *btr_flight_HLW;
    QGroupBox *verticalControlBox;
    QVBoxLayout *verticalLayout_24;
    QRadioButton *btr_flight_VLV;
    QRadioButton *btr_flight_VLP;
    QRadioButton *btr_flight_VLT;
    QGroupBox *groupBox9;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *btr_flight_SMD;
    QRadioButton *btr_flight_SME;
    QGroupBox *groupBox7;
    QVBoxLayout *verticalLayout_26;
    QRadioButton *btr_flight_CLG;
    QRadioButton *btr_flight_CLB;
    QGroupBox *yawBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *yawAngleButton;
    QRadioButton *yawRateButton;
    QVBoxLayout *ControlValues;
    QFrame *xControlValues;
    QGridLayout *gridLayout_3;
    QLabel *xControlMax;
    QLineEdit *xControlModeText;
    QLabel *xControlMin;
    QSlider *xControlSlider;
    QDoubleSpinBox *xControlSpinBox;
    QFrame *yControlValues;
    QGridLayout *gridLayout_4;
    QLabel *yControlMin;
    QSlider *yControlSlider;
    QLabel *yControlMax;
    QLineEdit *yControlModeText;
    QDoubleSpinBox *yControlSpinBox;
    QFrame *zControlValues;
    QGridLayout *gridLayout_5;
    QLineEdit *zControlModeText;
    QLabel *zControlMin;
    QSlider *zControlSlider;
    QLabel *zControlMax;
    QDoubleSpinBox *zControlSpinBox;
    QFrame *yawControlValues;
    QGridLayout *gridLayout_6;
    QLineEdit *yawControlModeText;
    QLabel *yawControlMin;
    QSlider *yawControlSlider;
    QLabel *yawControlMax;
    QDoubleSpinBox *yawControlSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *durationSpinBox;
    QLabel *label;
    QPushButton *btn_flight_arm;
    QPushButton *btn_flight_send;
    QButtonGroup *buttonGroupYaw;
    QButtonGroup *buttonGroupHorizontal;
    QButtonGroup *buttonGroupStable;
    QButtonGroup *buttonGroupVertical;
    QButtonGroup *buttonGroupFrame;

    void setupUi(QWidget *FlightControlPanel)
    {
        if (FlightControlPanel->objectName().isEmpty())
            FlightControlPanel->setObjectName(QStringLiteral("FlightControlPanel"));
        FlightControlPanel->resize(782, 743);
        FlightControlPanel->setMaximumSize(QSize(971, 743));
        gridLayout_2 = new QGridLayout(FlightControlPanel);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        groupBox_10 = new QGroupBox(FlightControlPanel);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setFocusPolicy(Qt::ClickFocus);
        verticalLayout_3 = new QVBoxLayout(groupBox_10);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(12, 12, 12, 12);
        groupBox4 = new QGroupBox(groupBox_10);
        groupBox4->setObjectName(QStringLiteral("groupBox4"));
        groupBox4->setAlignment(Qt::AlignCenter);
        horizontalLayout_6 = new QHBoxLayout(groupBox4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(12, 12, 12, 12);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cb_command = new QComboBox(groupBox4);
        cb_command->addItem(QString());
        cb_command->addItem(QString());
        cb_command->addItem(QString());
        cb_command->addItem(QString());
        cb_command->addItem(QString());
        cb_command->addItem(QString());
        cb_command->addItem(QString());
        cb_command->addItem(QString());
        cb_command->addItem(QString());
        cb_command->addItem(QString());
        cb_command->setObjectName(QStringLiteral("cb_command"));

        horizontalLayout->addWidget(cb_command);

        btn_flight_runCommand = new QPushButton(groupBox4);
        btn_flight_runCommand->setObjectName(QStringLiteral("btn_flight_runCommand"));

        horizontalLayout->addWidget(btn_flight_runCommand);


        horizontalLayout_6->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox4);

        groupBox5 = new QGroupBox(groupBox_10);
        groupBox5->setObjectName(QStringLiteral("groupBox5"));
        groupBox5->setAlignment(Qt::AlignCenter);
        verticalLayout = new QVBoxLayout(groupBox5);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(12, 12, 12, 12);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        horizontalControlBox = new QGroupBox(groupBox5);
        horizontalControlBox->setObjectName(QStringLiteral("horizontalControlBox"));
        horizontalControlBox->setMinimumSize(QSize(110, 88));
        horizontalControlBox->setMaximumSize(QSize(272, 234));
        horizontalControlBox->setAlignment(Qt::AlignCenter);
        horizontalControlBox->setCheckable(false);
        verticalLayout_23 = new QVBoxLayout(horizontalControlBox);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(6, 6, 6, 6);
        btr_flight_HLA = new QRadioButton(horizontalControlBox);
        buttonGroupHorizontal = new QButtonGroup(FlightControlPanel);
        buttonGroupHorizontal->setObjectName(QStringLiteral("buttonGroupHorizontal"));
        buttonGroupHorizontal->addButton(btr_flight_HLA);
        btr_flight_HLA->setObjectName(QStringLiteral("btr_flight_HLA"));
        btr_flight_HLA->setMinimumSize(QSize(0, 20));

        verticalLayout_23->addWidget(btr_flight_HLA);

        btr_flight_HLV = new QRadioButton(horizontalControlBox);
        buttonGroupHorizontal->addButton(btr_flight_HLV);
        btr_flight_HLV->setObjectName(QStringLiteral("btr_flight_HLV"));
        btr_flight_HLV->setMinimumSize(QSize(0, 20));
        btr_flight_HLV->setChecked(true);

        verticalLayout_23->addWidget(btr_flight_HLV);

        btr_flight_HLP = new QRadioButton(horizontalControlBox);
        buttonGroupHorizontal->addButton(btr_flight_HLP);
        btr_flight_HLP->setObjectName(QStringLiteral("btr_flight_HLP"));
        btr_flight_HLP->setMinimumSize(QSize(0, 20));

        verticalLayout_23->addWidget(btr_flight_HLP);

        btr_flight_HLW = new QRadioButton(horizontalControlBox);
        buttonGroupHorizontal->addButton(btr_flight_HLW);
        btr_flight_HLW->setObjectName(QStringLiteral("btr_flight_HLW"));
        btr_flight_HLW->setMinimumSize(QSize(0, 20));
        btr_flight_HLW->setChecked(false);

        verticalLayout_23->addWidget(btr_flight_HLW);


        gridLayout->addWidget(horizontalControlBox, 0, 0, 2, 1);

        verticalControlBox = new QGroupBox(groupBox5);
        verticalControlBox->setObjectName(QStringLiteral("verticalControlBox"));
        verticalControlBox->setMinimumSize(QSize(112, 88));
        verticalControlBox->setMaximumSize(QSize(271, 229));
        verticalControlBox->setAlignment(Qt::AlignCenter);
        verticalLayout_24 = new QVBoxLayout(verticalControlBox);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(6, 6, 6, 6);
        btr_flight_VLV = new QRadioButton(verticalControlBox);
        buttonGroupVertical = new QButtonGroup(FlightControlPanel);
        buttonGroupVertical->setObjectName(QStringLiteral("buttonGroupVertical"));
        buttonGroupVertical->addButton(btr_flight_VLV);
        btr_flight_VLV->setObjectName(QStringLiteral("btr_flight_VLV"));
        btr_flight_VLV->setMinimumSize(QSize(0, 20));
        btr_flight_VLV->setChecked(true);

        verticalLayout_24->addWidget(btr_flight_VLV);

        btr_flight_VLP = new QRadioButton(verticalControlBox);
        buttonGroupVertical->addButton(btr_flight_VLP);
        btr_flight_VLP->setObjectName(QStringLiteral("btr_flight_VLP"));
        btr_flight_VLP->setMinimumSize(QSize(0, 20));
        btr_flight_VLP->setChecked(false);

        verticalLayout_24->addWidget(btr_flight_VLP);

        btr_flight_VLT = new QRadioButton(verticalControlBox);
        buttonGroupVertical->addButton(btr_flight_VLT);
        btr_flight_VLT->setObjectName(QStringLiteral("btr_flight_VLT"));
        btr_flight_VLT->setMinimumSize(QSize(0, 20));

        verticalLayout_24->addWidget(btr_flight_VLT);


        gridLayout->addWidget(verticalControlBox, 0, 1, 2, 1);

        groupBox9 = new QGroupBox(groupBox5);
        groupBox9->setObjectName(QStringLiteral("groupBox9"));
        groupBox9->setMinimumSize(QSize(110, 62));
        groupBox9->setMaximumSize(QSize(272, 140));
        groupBox9->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox9);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        btr_flight_SMD = new QRadioButton(groupBox9);
        buttonGroupStable = new QButtonGroup(FlightControlPanel);
        buttonGroupStable->setObjectName(QStringLiteral("buttonGroupStable"));
        buttonGroupStable->addButton(btr_flight_SMD);
        btr_flight_SMD->setObjectName(QStringLiteral("btr_flight_SMD"));
        btr_flight_SMD->setMinimumSize(QSize(0, 20));

        verticalLayout_2->addWidget(btr_flight_SMD);

        btr_flight_SME = new QRadioButton(groupBox9);
        buttonGroupStable->addButton(btr_flight_SME);
        btr_flight_SME->setObjectName(QStringLiteral("btr_flight_SME"));
        btr_flight_SME->setMinimumSize(QSize(0, 20));
        btr_flight_SME->setChecked(true);

        verticalLayout_2->addWidget(btr_flight_SME);


        gridLayout->addWidget(groupBox9, 0, 2, 1, 1);

        groupBox7 = new QGroupBox(groupBox5);
        groupBox7->setObjectName(QStringLiteral("groupBox7"));
        groupBox7->setMinimumSize(QSize(110, 62));
        groupBox7->setMaximumSize(QSize(271, 140));
        groupBox7->setAlignment(Qt::AlignCenter);
        verticalLayout_26 = new QVBoxLayout(groupBox7);
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(6, 6, 6, 6);
        btr_flight_CLG = new QRadioButton(groupBox7);
        buttonGroupFrame = new QButtonGroup(FlightControlPanel);
        buttonGroupFrame->setObjectName(QStringLiteral("buttonGroupFrame"));
        buttonGroupFrame->addButton(btr_flight_CLG);
        btr_flight_CLG->setObjectName(QStringLiteral("btr_flight_CLG"));
        btr_flight_CLG->setMinimumSize(QSize(0, 20));

        verticalLayout_26->addWidget(btr_flight_CLG);

        btr_flight_CLB = new QRadioButton(groupBox7);
        buttonGroupFrame->addButton(btr_flight_CLB);
        btr_flight_CLB->setObjectName(QStringLiteral("btr_flight_CLB"));
        btr_flight_CLB->setMinimumSize(QSize(0, 20));
        btr_flight_CLB->setChecked(true);

        verticalLayout_26->addWidget(btr_flight_CLB);


        gridLayout->addWidget(groupBox7, 0, 3, 1, 1);

        yawBox = new QGroupBox(groupBox5);
        yawBox->setObjectName(QStringLiteral("yawBox"));
        yawBox->setMaximumSize(QSize(555, 600));
        yawBox->setAlignment(Qt::AlignCenter);
        horizontalLayout_2 = new QHBoxLayout(yawBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, 6, 6, 6);
        yawAngleButton = new QRadioButton(yawBox);
        buttonGroupYaw = new QButtonGroup(FlightControlPanel);
        buttonGroupYaw->setObjectName(QStringLiteral("buttonGroupYaw"));
        buttonGroupYaw->addButton(yawAngleButton);
        yawAngleButton->setObjectName(QStringLiteral("yawAngleButton"));
        yawAngleButton->setChecked(true);

        horizontalLayout_2->addWidget(yawAngleButton);

        yawRateButton = new QRadioButton(yawBox);
        buttonGroupYaw->addButton(yawRateButton);
        yawRateButton->setObjectName(QStringLiteral("yawRateButton"));

        horizontalLayout_2->addWidget(yawRateButton);


        gridLayout->addWidget(yawBox, 1, 2, 1, 2);


        verticalLayout->addLayout(gridLayout);

        ControlValues = new QVBoxLayout();
        ControlValues->setSpacing(0);
        ControlValues->setObjectName(QStringLiteral("ControlValues"));
        ControlValues->setSizeConstraint(QLayout::SetDefaultConstraint);
        xControlValues = new QFrame(groupBox5);
        xControlValues->setObjectName(QStringLiteral("xControlValues"));
        xControlValues->setMinimumSize(QSize(436, 42));
        xControlValues->setFrameShape(QFrame::StyledPanel);
        xControlValues->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(xControlValues);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, 6);
        xControlMax = new QLabel(xControlValues);
        xControlMax->setObjectName(QStringLiteral("xControlMax"));

        gridLayout_3->addWidget(xControlMax, 0, 4, 1, 1);

        xControlModeText = new QLineEdit(xControlValues);
        xControlModeText->setObjectName(QStringLiteral("xControlModeText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(xControlModeText->sizePolicy().hasHeightForWidth());
        xControlModeText->setSizePolicy(sizePolicy);
        xControlModeText->setMaximumSize(QSize(150, 16777215));

        gridLayout_3->addWidget(xControlModeText, 0, 0, 1, 1);

        xControlMin = new QLabel(xControlValues);
        xControlMin->setObjectName(QStringLiteral("xControlMin"));

        gridLayout_3->addWidget(xControlMin, 0, 2, 1, 1);

        xControlSlider = new QSlider(xControlValues);
        xControlSlider->setObjectName(QStringLiteral("xControlSlider"));
        xControlSlider->setMinimumSize(QSize(200, 0));
        xControlSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(xControlSlider, 0, 3, 1, 1);

        xControlSpinBox = new QDoubleSpinBox(xControlValues);
        xControlSpinBox->setObjectName(QStringLiteral("xControlSpinBox"));

        gridLayout_3->addWidget(xControlSpinBox, 0, 1, 1, 1);

        xControlSlider->raise();
        xControlModeText->raise();
        xControlMin->raise();
        xControlMax->raise();
        xControlSpinBox->raise();

        ControlValues->addWidget(xControlValues);

        yControlValues = new QFrame(groupBox5);
        yControlValues->setObjectName(QStringLiteral("yControlValues"));
        yControlValues->setMinimumSize(QSize(0, 41));
        yControlValues->setFrameShape(QFrame::StyledPanel);
        yControlValues->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(yControlValues);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(6, 6, 6, 6);
        yControlMin = new QLabel(yControlValues);
        yControlMin->setObjectName(QStringLiteral("yControlMin"));

        gridLayout_4->addWidget(yControlMin, 0, 2, 1, 1);

        yControlSlider = new QSlider(yControlValues);
        yControlSlider->setObjectName(QStringLiteral("yControlSlider"));
        yControlSlider->setMinimumSize(QSize(200, 0));
        yControlSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(yControlSlider, 0, 3, 1, 1);

        yControlMax = new QLabel(yControlValues);
        yControlMax->setObjectName(QStringLiteral("yControlMax"));

        gridLayout_4->addWidget(yControlMax, 0, 4, 1, 1);

        yControlModeText = new QLineEdit(yControlValues);
        yControlModeText->setObjectName(QStringLiteral("yControlModeText"));
        yControlModeText->setMaximumSize(QSize(150, 16777215));

        gridLayout_4->addWidget(yControlModeText, 0, 0, 1, 1);

        yControlSpinBox = new QDoubleSpinBox(yControlValues);
        yControlSpinBox->setObjectName(QStringLiteral("yControlSpinBox"));

        gridLayout_4->addWidget(yControlSpinBox, 0, 1, 1, 1);


        ControlValues->addWidget(yControlValues);

        zControlValues = new QFrame(groupBox5);
        zControlValues->setObjectName(QStringLiteral("zControlValues"));
        zControlValues->setMinimumSize(QSize(0, 42));
        zControlValues->setFrameShape(QFrame::StyledPanel);
        zControlValues->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(zControlValues);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(6, 6, 6, 6);
        zControlModeText = new QLineEdit(zControlValues);
        zControlModeText->setObjectName(QStringLiteral("zControlModeText"));
        zControlModeText->setMaximumSize(QSize(150, 16777215));

        gridLayout_5->addWidget(zControlModeText, 0, 0, 1, 1);

        zControlMin = new QLabel(zControlValues);
        zControlMin->setObjectName(QStringLiteral("zControlMin"));

        gridLayout_5->addWidget(zControlMin, 0, 2, 1, 1);

        zControlSlider = new QSlider(zControlValues);
        zControlSlider->setObjectName(QStringLiteral("zControlSlider"));
        zControlSlider->setMinimumSize(QSize(200, 0));
        zControlSlider->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(zControlSlider, 0, 3, 1, 1);

        zControlMax = new QLabel(zControlValues);
        zControlMax->setObjectName(QStringLiteral("zControlMax"));

        gridLayout_5->addWidget(zControlMax, 0, 4, 1, 1);

        zControlSpinBox = new QDoubleSpinBox(zControlValues);
        zControlSpinBox->setObjectName(QStringLiteral("zControlSpinBox"));

        gridLayout_5->addWidget(zControlSpinBox, 0, 1, 1, 1);


        ControlValues->addWidget(zControlValues);

        yawControlValues = new QFrame(groupBox5);
        yawControlValues->setObjectName(QStringLiteral("yawControlValues"));
        yawControlValues->setMinimumSize(QSize(0, 41));
        yawControlValues->setFrameShape(QFrame::StyledPanel);
        yawControlValues->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(yawControlValues);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(6, 6, 6, 6);
        yawControlModeText = new QLineEdit(yawControlValues);
        yawControlModeText->setObjectName(QStringLiteral("yawControlModeText"));
        yawControlModeText->setMaximumSize(QSize(150, 16777215));

        gridLayout_6->addWidget(yawControlModeText, 0, 0, 1, 1);

        yawControlMin = new QLabel(yawControlValues);
        yawControlMin->setObjectName(QStringLiteral("yawControlMin"));

        gridLayout_6->addWidget(yawControlMin, 0, 2, 1, 1);

        yawControlSlider = new QSlider(yawControlValues);
        yawControlSlider->setObjectName(QStringLiteral("yawControlSlider"));
        yawControlSlider->setMinimumSize(QSize(200, 0));
        yawControlSlider->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(yawControlSlider, 0, 3, 1, 1);

        yawControlMax = new QLabel(yawControlValues);
        yawControlMax->setObjectName(QStringLiteral("yawControlMax"));

        gridLayout_6->addWidget(yawControlMax, 0, 4, 1, 1);

        yawControlSpinBox = new QDoubleSpinBox(yawControlValues);
        yawControlSpinBox->setObjectName(QStringLiteral("yawControlSpinBox"));

        gridLayout_6->addWidget(yawControlSpinBox, 0, 1, 1, 1);


        ControlValues->addWidget(yawControlValues);


        verticalLayout->addLayout(ControlValues);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(groupBox5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(label_2);

        durationSpinBox = new QDoubleSpinBox(groupBox5);
        durationSpinBox->setObjectName(QStringLiteral("durationSpinBox"));
        durationSpinBox->setSingleStep(0.1);
        durationSpinBox->setValue(0.1);

        horizontalLayout_3->addWidget(durationSpinBox);

        label = new QLabel(groupBox5);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        btn_flight_arm = new QPushButton(groupBox5);
        btn_flight_arm->setObjectName(QStringLiteral("btn_flight_arm"));
        btn_flight_arm->setCheckable(true);

        horizontalLayout_4->addWidget(btn_flight_arm);

        btn_flight_send = new QPushButton(groupBox5);
        btn_flight_send->setObjectName(QStringLiteral("btn_flight_send"));

        horizontalLayout_4->addWidget(btn_flight_send);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(groupBox5);


        gridLayout_2->addWidget(groupBox_10, 0, 0, 1, 1);


        retranslateUi(FlightControlPanel);

        QMetaObject::connectSlotsByName(FlightControlPanel);
    } // setupUi

    void retranslateUi(QWidget *FlightControlPanel)
    {
        FlightControlPanel->setWindowTitle(QApplication::translate("FlightControlPanel", "Form", nullptr));
        groupBox_10->setTitle(QApplication::translate("FlightControlPanel", "Flight", nullptr));
        groupBox4->setTitle(QApplication::translate("FlightControlPanel", "High-Level Flight Commands", nullptr));
        cb_command->setItemText(0, QApplication::translate("FlightControlPanel", "Takeoff", nullptr));
        cb_command->setItemText(1, QApplication::translate("FlightControlPanel", "Land", nullptr));
        cb_command->setItemText(2, QApplication::translate("FlightControlPanel", "Go Home", nullptr));
        cb_command->setItemText(3, QApplication::translate("FlightControlPanel", "Exit Takeoff", nullptr));
        cb_command->setItemText(4, QApplication::translate("FlightControlPanel", "Exit Landing", nullptr));
        cb_command->setItemText(5, QApplication::translate("FlightControlPanel", "Exit GoHome", nullptr));
        cb_command->setItemText(6, QApplication::translate("FlightControlPanel", "Calibrate Compass", nullptr));
        cb_command->setItemText(7, QApplication::translate("FlightControlPanel", "Exit Compass Calibration", nullptr));
        cb_command->setItemText(8, QApplication::translate("FlightControlPanel", "Landing Gear Up", nullptr));
        cb_command->setItemText(9, QApplication::translate("FlightControlPanel", "Landing Gear Down", nullptr));

        btn_flight_runCommand->setText(QApplication::translate("FlightControlPanel", "Run Command", nullptr));
        groupBox5->setTitle(QApplication::translate("FlightControlPanel", "Low-Level Flight Control", nullptr));
        horizontalControlBox->setTitle(QApplication::translate("FlightControlPanel", "Horizontal Control", nullptr));
        btr_flight_HLA->setText(QApplication::translate("FlightControlPanel", "Angle", nullptr));
        btr_flight_HLV->setText(QApplication::translate("FlightControlPanel", "Velocity", nullptr));
        btr_flight_HLP->setText(QApplication::translate("FlightControlPanel", "Position", nullptr));
        btr_flight_HLW->setText(QApplication::translate("FlightControlPanel", "Angular Rate", nullptr));
        verticalControlBox->setTitle(QApplication::translate("FlightControlPanel", "Vertical Control", nullptr));
        btr_flight_VLV->setText(QApplication::translate("FlightControlPanel", "Velocity", nullptr));
        btr_flight_VLP->setText(QApplication::translate("FlightControlPanel", "Position", nullptr));
        btr_flight_VLT->setText(QApplication::translate("FlightControlPanel", "Thrust", nullptr));
        groupBox9->setTitle(QApplication::translate("FlightControlPanel", "Stable Mode", nullptr));
        btr_flight_SMD->setText(QApplication::translate("FlightControlPanel", "Disable", nullptr));
        btr_flight_SME->setText(QApplication::translate("FlightControlPanel", "Enable", nullptr));
        groupBox7->setTitle(QApplication::translate("FlightControlPanel", "Coordinate Frame", nullptr));
        btr_flight_CLG->setText(QApplication::translate("FlightControlPanel", "Ground", nullptr));
        btr_flight_CLB->setText(QApplication::translate("FlightControlPanel", "Body", nullptr));
        yawBox->setTitle(QApplication::translate("FlightControlPanel", "Yaw Logic", nullptr));
        yawAngleButton->setText(QApplication::translate("FlightControlPanel", "Yaw Angle", nullptr));
        yawRateButton->setText(QApplication::translate("FlightControlPanel", "Yaw Rate", nullptr));
        xControlMax->setText(QApplication::translate("FlightControlPanel", "100", nullptr));
        xControlModeText->setText(QApplication::translate("FlightControlPanel", "X:", nullptr));
        xControlMin->setText(QApplication::translate("FlightControlPanel", "0", nullptr));
        yControlMin->setText(QApplication::translate("FlightControlPanel", "0", nullptr));
        yControlMax->setText(QApplication::translate("FlightControlPanel", "100", nullptr));
        yControlModeText->setText(QApplication::translate("FlightControlPanel", "Y:", nullptr));
        zControlModeText->setText(QApplication::translate("FlightControlPanel", "Z:", nullptr));
        zControlMin->setText(QApplication::translate("FlightControlPanel", "0", nullptr));
        zControlMax->setText(QApplication::translate("FlightControlPanel", "100", nullptr));
        yawControlModeText->setText(QApplication::translate("FlightControlPanel", "Yaw:", nullptr));
        yawControlMin->setText(QApplication::translate("FlightControlPanel", "0", nullptr));
        yawControlMax->setText(QApplication::translate("FlightControlPanel", "100", nullptr));
        label_2->setText(QApplication::translate("FlightControlPanel", "Send For:", nullptr));
        label->setText(QApplication::translate("FlightControlPanel", "sec", nullptr));
        btn_flight_arm->setText(QApplication::translate("FlightControlPanel", "Emergency Brake", nullptr));
        btn_flight_send->setText(QApplication::translate("FlightControlPanel", "Send Flight Control", nullptr));
#ifndef QT_NO_SHORTCUT
        btn_flight_send->setShortcut(QApplication::translate("FlightControlPanel", "P", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class FlightControlPanel: public Ui_FlightControlPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHT_CONTROL_PANEL_H
