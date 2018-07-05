/********************************************************************************
** Form generated from reading UI file 'camera_gimbal_control_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_GIMBAL_CONTROL_PANEL_H
#define UI_CAMERA_GIMBAL_CONTROL_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraGimbalControl
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *cameraControl;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *photoButton;
    QPushButton *videoButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QGroupBox *controlMode;
    QHBoxLayout *horizontalLayout;
    QRadioButton *angleMode;
    QRadioButton *speedMode;
    QGroupBox *angleControlMode;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *absoluteMode;
    QRadioButton *incrementatlMode;
    QGroupBox *inputValues;
    QVBoxLayout *verticalLayout;
    QFrame *rollControlValues;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *rollControlSpinBox;
    QLabel *rollControlMin;
    QLineEdit *rollControlModeText;
    QLabel *rollControlMax;
    QSlider *rollControlSlider;
    QCheckBox *rollCheckBox;
    QFrame *pitchControlValues;
    QGridLayout *gridLayout_4;
    QLineEdit *pitchControlModeText;
    QLabel *pitchControlMax;
    QDoubleSpinBox *pitchControlSpinBox;
    QSlider *pitchControlSlider;
    QLabel *pitchControlMin;
    QCheckBox *pitchCheckBox;
    QFrame *yawControlValues;
    QGridLayout *gridLayout_5;
    QLabel *yawControlMax;
    QDoubleSpinBox *yawControlSpinBox;
    QLineEdit *yawControlModeText;
    QLabel *yawControlMin;
    QSlider *yawControlSlider;
    QCheckBox *yawCheckBox;
    QHBoxLayout *durationLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *durationLabel;
    QDoubleSpinBox *durationSpinBox;
    QLabel *label;
    QPushButton *sendGimbalCommand;
    QButtonGroup *angleControlButtonGroup;
    QButtonGroup *controlModeButtonGroup;

    void setupUi(QWidget *CameraGimbalControl)
    {
        if (CameraGimbalControl->objectName().isEmpty())
            CameraGimbalControl->setObjectName(QStringLiteral("CameraGimbalControl"));
        CameraGimbalControl->resize(762, 524);
        CameraGimbalControl->setMaximumSize(QSize(762, 524));
        verticalLayout_2 = new QVBoxLayout(CameraGimbalControl);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(12, 12, 12, 12);
        cameraControl = new QGroupBox(CameraGimbalControl);
        cameraControl->setObjectName(QStringLiteral("cameraControl"));
        horizontalLayout_3 = new QHBoxLayout(cameraControl);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(12, 12, 12, 12);
        photoButton = new QPushButton(cameraControl);
        photoButton->setObjectName(QStringLiteral("photoButton"));

        horizontalLayout_3->addWidget(photoButton);

        videoButton = new QPushButton(cameraControl);
        videoButton->setObjectName(QStringLiteral("videoButton"));

        horizontalLayout_3->addWidget(videoButton);


        verticalLayout_2->addWidget(cameraControl);

        groupBox = new QGroupBox(CameraGimbalControl);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(12, 12, 12, 12);
        controlMode = new QGroupBox(groupBox);
        controlMode->setObjectName(QStringLiteral("controlMode"));
        horizontalLayout = new QHBoxLayout(controlMode);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        angleMode = new QRadioButton(controlMode);
        controlModeButtonGroup = new QButtonGroup(CameraGimbalControl);
        controlModeButtonGroup->setObjectName(QStringLiteral("controlModeButtonGroup"));
        controlModeButtonGroup->addButton(angleMode);
        angleMode->setObjectName(QStringLiteral("angleMode"));

        horizontalLayout->addWidget(angleMode);

        speedMode = new QRadioButton(controlMode);
        controlModeButtonGroup->addButton(speedMode);
        speedMode->setObjectName(QStringLiteral("speedMode"));

        horizontalLayout->addWidget(speedMode);


        gridLayout->addWidget(controlMode, 0, 0, 1, 1);

        angleControlMode = new QGroupBox(groupBox);
        angleControlMode->setObjectName(QStringLiteral("angleControlMode"));
        horizontalLayout_2 = new QHBoxLayout(angleControlMode);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, 6, 6, 6);
        absoluteMode = new QRadioButton(angleControlMode);
        angleControlButtonGroup = new QButtonGroup(CameraGimbalControl);
        angleControlButtonGroup->setObjectName(QStringLiteral("angleControlButtonGroup"));
        angleControlButtonGroup->addButton(absoluteMode);
        absoluteMode->setObjectName(QStringLiteral("absoluteMode"));

        horizontalLayout_2->addWidget(absoluteMode);

        incrementatlMode = new QRadioButton(angleControlMode);
        angleControlButtonGroup->addButton(incrementatlMode);
        incrementatlMode->setObjectName(QStringLiteral("incrementatlMode"));

        horizontalLayout_2->addWidget(incrementatlMode);


        gridLayout->addWidget(angleControlMode, 0, 1, 1, 1);

        inputValues = new QGroupBox(groupBox);
        inputValues->setObjectName(QStringLiteral("inputValues"));
        verticalLayout = new QVBoxLayout(inputValues);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(12, 12, 12, 12);
        rollControlValues = new QFrame(inputValues);
        rollControlValues->setObjectName(QStringLiteral("rollControlValues"));
        rollControlValues->setMinimumSize(QSize(0, 0));
        rollControlValues->setFrameShape(QFrame::StyledPanel);
        rollControlValues->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(rollControlValues);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, 6);
        rollControlSpinBox = new QDoubleSpinBox(rollControlValues);
        rollControlSpinBox->setObjectName(QStringLiteral("rollControlSpinBox"));

        gridLayout_3->addWidget(rollControlSpinBox, 0, 2, 1, 1);

        rollControlMin = new QLabel(rollControlValues);
        rollControlMin->setObjectName(QStringLiteral("rollControlMin"));

        gridLayout_3->addWidget(rollControlMin, 0, 3, 1, 1);

        rollControlModeText = new QLineEdit(rollControlValues);
        rollControlModeText->setObjectName(QStringLiteral("rollControlModeText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rollControlModeText->sizePolicy().hasHeightForWidth());
        rollControlModeText->setSizePolicy(sizePolicy);
        rollControlModeText->setMaximumSize(QSize(150, 16777215));

        gridLayout_3->addWidget(rollControlModeText, 0, 1, 1, 1);

        rollControlMax = new QLabel(rollControlValues);
        rollControlMax->setObjectName(QStringLiteral("rollControlMax"));

        gridLayout_3->addWidget(rollControlMax, 0, 5, 1, 1);

        rollControlSlider = new QSlider(rollControlValues);
        rollControlSlider->setObjectName(QStringLiteral("rollControlSlider"));
        rollControlSlider->setMinimumSize(QSize(200, 0));
        rollControlSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(rollControlSlider, 0, 4, 1, 1);

        rollCheckBox = new QCheckBox(rollControlValues);
        rollCheckBox->setObjectName(QStringLiteral("rollCheckBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rollCheckBox->sizePolicy().hasHeightForWidth());
        rollCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(rollCheckBox, 0, 0, 1, 1);

        rollControlSlider->raise();
        rollControlModeText->raise();
        rollControlMin->raise();
        rollControlMax->raise();
        rollControlSpinBox->raise();
        rollCheckBox->raise();

        verticalLayout->addWidget(rollControlValues);

        pitchControlValues = new QFrame(inputValues);
        pitchControlValues->setObjectName(QStringLiteral("pitchControlValues"));
        pitchControlValues->setMinimumSize(QSize(0, 0));
        pitchControlValues->setFrameShape(QFrame::StyledPanel);
        pitchControlValues->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(pitchControlValues);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(6, 6, 6, 6);
        pitchControlModeText = new QLineEdit(pitchControlValues);
        pitchControlModeText->setObjectName(QStringLiteral("pitchControlModeText"));
        sizePolicy.setHeightForWidth(pitchControlModeText->sizePolicy().hasHeightForWidth());
        pitchControlModeText->setSizePolicy(sizePolicy);
        pitchControlModeText->setMaximumSize(QSize(150, 16777215));

        gridLayout_4->addWidget(pitchControlModeText, 0, 1, 1, 1);

        pitchControlMax = new QLabel(pitchControlValues);
        pitchControlMax->setObjectName(QStringLiteral("pitchControlMax"));

        gridLayout_4->addWidget(pitchControlMax, 0, 5, 1, 1);

        pitchControlSpinBox = new QDoubleSpinBox(pitchControlValues);
        pitchControlSpinBox->setObjectName(QStringLiteral("pitchControlSpinBox"));

        gridLayout_4->addWidget(pitchControlSpinBox, 0, 2, 1, 1);

        pitchControlSlider = new QSlider(pitchControlValues);
        pitchControlSlider->setObjectName(QStringLiteral("pitchControlSlider"));
        pitchControlSlider->setMinimumSize(QSize(200, 0));
        pitchControlSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(pitchControlSlider, 0, 4, 1, 1);

        pitchControlMin = new QLabel(pitchControlValues);
        pitchControlMin->setObjectName(QStringLiteral("pitchControlMin"));

        gridLayout_4->addWidget(pitchControlMin, 0, 3, 1, 1);

        pitchCheckBox = new QCheckBox(pitchControlValues);
        pitchCheckBox->setObjectName(QStringLiteral("pitchCheckBox"));
        sizePolicy1.setHeightForWidth(pitchCheckBox->sizePolicy().hasHeightForWidth());
        pitchCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pitchCheckBox, 0, 0, 1, 1);


        verticalLayout->addWidget(pitchControlValues);

        yawControlValues = new QFrame(inputValues);
        yawControlValues->setObjectName(QStringLiteral("yawControlValues"));
        yawControlValues->setMinimumSize(QSize(0, 0));
        yawControlValues->setFrameShape(QFrame::StyledPanel);
        yawControlValues->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(yawControlValues);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(6, 6, 6, 6);
        yawControlMax = new QLabel(yawControlValues);
        yawControlMax->setObjectName(QStringLiteral("yawControlMax"));

        gridLayout_5->addWidget(yawControlMax, 0, 5, 1, 1);

        yawControlSpinBox = new QDoubleSpinBox(yawControlValues);
        yawControlSpinBox->setObjectName(QStringLiteral("yawControlSpinBox"));

        gridLayout_5->addWidget(yawControlSpinBox, 0, 2, 1, 1);

        yawControlModeText = new QLineEdit(yawControlValues);
        yawControlModeText->setObjectName(QStringLiteral("yawControlModeText"));
        sizePolicy.setHeightForWidth(yawControlModeText->sizePolicy().hasHeightForWidth());
        yawControlModeText->setSizePolicy(sizePolicy);
        yawControlModeText->setMaximumSize(QSize(150, 16777215));

        gridLayout_5->addWidget(yawControlModeText, 0, 1, 1, 1);

        yawControlMin = new QLabel(yawControlValues);
        yawControlMin->setObjectName(QStringLiteral("yawControlMin"));

        gridLayout_5->addWidget(yawControlMin, 0, 3, 1, 1);

        yawControlSlider = new QSlider(yawControlValues);
        yawControlSlider->setObjectName(QStringLiteral("yawControlSlider"));
        yawControlSlider->setMinimumSize(QSize(200, 0));
        yawControlSlider->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(yawControlSlider, 0, 4, 1, 1);

        yawCheckBox = new QCheckBox(yawControlValues);
        yawCheckBox->setObjectName(QStringLiteral("yawCheckBox"));
        sizePolicy1.setHeightForWidth(yawCheckBox->sizePolicy().hasHeightForWidth());
        yawCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(yawCheckBox, 0, 0, 1, 1);


        verticalLayout->addWidget(yawControlValues);


        gridLayout->addWidget(inputValues, 1, 0, 1, 2);

        durationLayout = new QHBoxLayout();
        durationLayout->setObjectName(QStringLiteral("durationLayout"));
        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        durationLayout->addItem(horizontalSpacer_5);

        durationLabel = new QLabel(groupBox);
        durationLabel->setObjectName(QStringLiteral("durationLabel"));
        durationLabel->setMinimumSize(QSize(319, 0));

        durationLayout->addWidget(durationLabel);

        durationSpinBox = new QDoubleSpinBox(groupBox);
        durationSpinBox->setObjectName(QStringLiteral("durationSpinBox"));
        durationSpinBox->setSingleStep(0.1);
        durationSpinBox->setValue(0.1);

        durationLayout->addWidget(durationSpinBox);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        durationLayout->addWidget(label);

        sendGimbalCommand = new QPushButton(groupBox);
        sendGimbalCommand->setObjectName(QStringLiteral("sendGimbalCommand"));

        durationLayout->addWidget(sendGimbalCommand);


        gridLayout->addLayout(durationLayout, 2, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(CameraGimbalControl);

        QMetaObject::connectSlotsByName(CameraGimbalControl);
    } // setupUi

    void retranslateUi(QWidget *CameraGimbalControl)
    {
        CameraGimbalControl->setWindowTitle(QApplication::translate("CameraGimbalControl", "Form", nullptr));
        cameraControl->setTitle(QApplication::translate("CameraGimbalControl", "Camera Control", nullptr));
        photoButton->setText(QApplication::translate("CameraGimbalControl", "Take Photo", nullptr));
        videoButton->setText(QApplication::translate("CameraGimbalControl", "Start Video", nullptr));
        groupBox->setTitle(QApplication::translate("CameraGimbalControl", "Gimbal Control", nullptr));
        controlMode->setTitle(QApplication::translate("CameraGimbalControl", "Control Mode", nullptr));
        angleMode->setText(QApplication::translate("CameraGimbalControl", "Angle", nullptr));
        speedMode->setText(QApplication::translate("CameraGimbalControl", "Speed", nullptr));
        angleControlMode->setTitle(QApplication::translate("CameraGimbalControl", "Angle Control Mode", nullptr));
        absoluteMode->setText(QApplication::translate("CameraGimbalControl", "Absolute", nullptr));
        incrementatlMode->setText(QApplication::translate("CameraGimbalControl", "Incremental", nullptr));
        inputValues->setTitle(QApplication::translate("CameraGimbalControl", "Input Values", nullptr));
        rollControlMin->setText(QApplication::translate("CameraGimbalControl", "0", nullptr));
        rollControlModeText->setText(QApplication::translate("CameraGimbalControl", "Roll (deg):", nullptr));
        rollControlMax->setText(QApplication::translate("CameraGimbalControl", "100", nullptr));
        rollCheckBox->setText(QApplication::translate("CameraGimbalControl", "Enabled", nullptr));
        pitchControlModeText->setText(QApplication::translate("CameraGimbalControl", "Pitch (deg) :", nullptr));
        pitchControlMax->setText(QApplication::translate("CameraGimbalControl", "100", nullptr));
        pitchControlMin->setText(QApplication::translate("CameraGimbalControl", "0", nullptr));
        pitchCheckBox->setText(QApplication::translate("CameraGimbalControl", "Enabled", nullptr));
        yawControlMax->setText(QApplication::translate("CameraGimbalControl", "100", nullptr));
        yawControlModeText->setText(QApplication::translate("CameraGimbalControl", "Yaw (deg) :", nullptr));
        yawControlMin->setText(QApplication::translate("CameraGimbalControl", "0", nullptr));
        yawCheckBox->setText(QApplication::translate("CameraGimbalControl", "Enabled", nullptr));
        durationLabel->setText(QApplication::translate("CameraGimbalControl", "Time for gimbal to move to position: ", nullptr));
        label->setText(QApplication::translate("CameraGimbalControl", "sec", nullptr));
        sendGimbalCommand->setText(QApplication::translate("CameraGimbalControl", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraGimbalControl: public Ui_CameraGimbalControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_GIMBAL_CONTROL_PANEL_H
