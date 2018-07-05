/********************************************************************************
** Form generated from reading UI file 'broadcast.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROADCAST_H
#define UI_BROADCAST_H

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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Broadcast
{
public:
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *gb_CoreData;
    QVBoxLayout *verticalLayout_33;
    QPushButton *pushButtonBroadcastFreqSet;
    QHBoxLayout *horizontalLayoutTs;
    QLabel *labelTs;
    QComboBox *comboBoxTs;
    QHBoxLayout *horizontalLayoutQ;
    QLabel *labelQ;
    QComboBox *comboBoxQ;
    QHBoxLayout *horizontalLayoutAcc;
    QLabel *labelAcc;
    QComboBox *comboBoxAcc;
    QHBoxLayout *horizontalLayoutVel;
    QLabel *labelVel;
    QComboBox *comboBoxVel;
    QHBoxLayout *horizontalLayoutW;
    QLabel *labelW;
    QComboBox *comboBoxW;
    QHBoxLayout *horizontalLayoutPos;
    QLabel *labelPos;
    QComboBox *comboBoxPos;
    QHBoxLayout *horizontalLayoutMag;
    QLabel *labelMag;
    QComboBox *comboBoxMag;
    QHBoxLayout *horizontalLayoutRC;
    QLabel *labelRC;
    QComboBox *comboBoxRC;
    QHBoxLayout *horizontalLayoutGimbal;
    QLabel *labelGimbal;
    QComboBox *comboBoxGimbal;
    QHBoxLayout *horizontalLayoutStatus;
    QLabel *labelStatus;
    QComboBox *comboBoxStatus;
    QHBoxLayout *horizontalLayoutBat;
    QLabel *labelBat;
    QComboBox *comboBoxBat;
    QHBoxLayout *horizontalLayoutCtrlInfo;
    QLabel *labelCtrlInfo;
    QComboBox *comboBoxCtrlInfo;
    QHBoxLayout *horizontalLayoutRTK;
    QLabel *labelRTK;
    QComboBox *comboBoxRTK;
    QHBoxLayout *horizontalLayoutGPS;
    QLabel *labelGPS;
    QComboBox *comboBoxGPS;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *broadcastDisplay;
    QGridLayout *gridLayout_2;
    QGroupBox *gpsDisplay;
    QVBoxLayout *verticalLayout_75;
    QHBoxLayout *horizontalLayout_149;
    QLabel *label_gps_date;
    QLineEdit *le_gps_date;
    QHBoxLayout *horizontalLayout_150;
    QLabel *label_84;
    QLineEdit *le_gps_time;
    QHBoxLayout *horizontalLayout_151;
    QLabel *label_85;
    QLineEdit *le_gps_longitude;
    QHBoxLayout *horizontalLayout_152;
    QLabel *label_86;
    QLineEdit *le_gps_latitude;
    QHBoxLayout *horizontalLayout_153;
    QLabel *label_87;
    QLineEdit *le_gps_hmsl;
    QHBoxLayout *horizontalLayout_154;
    QLabel *label_88;
    QLineEdit *le_gps_VN;
    QHBoxLayout *horizontalLayout_155;
    QLabel *label_89;
    QLineEdit *le_gps_VE;
    QHBoxLayout *horizontalLayout_156;
    QLabel *label_90;
    QLineEdit *le_gps_VD;
    QHBoxLayout *horizontalLayout_166;
    QLabel *label_98;
    QLineEdit *le_gps_hdop;
    QHBoxLayout *horizontalLayout_167;
    QLabel *label_99;
    QLineEdit *le_gps_pdop;
    QHBoxLayout *horizontalLayout_168;
    QLabel *label_100;
    QLineEdit *le_gps_GNSSFlag;
    QHBoxLayout *horizontalLayout_169;
    QLabel *label_101;
    QLineEdit *le_gps_gnssFix;
    QHBoxLayout *horizontalLayout_170;
    QLabel *label_102;
    QLineEdit *le_gps_hacc;
    QHBoxLayout *horizontalLayout_171;
    QLabel *label_103;
    QLineEdit *le_gps_sacc;
    QHBoxLayout *horizontalLayout_172;
    QLabel *label_104;
    QLineEdit *le_gps_guse;
    QHBoxLayout *horizontalLayout_339;
    QLabel *label_204;
    QLineEdit *le_gps_gnuse;
    QHBoxLayout *horizontalLayout_340;
    QLabel *label_205;
    QLineEdit *le_gps_svn;
    QHBoxLayout *horizontalLayout_341;
    QLabel *label_206;
    QLineEdit *le_gps_gps;
    QGroupBox *accDisplay;
    QVBoxLayout *verticalLayout_42;
    QHBoxLayout *horizontalLayout_69;
    QLabel *accXlabel;
    QLineEdit *le_Flight_accx;
    QHBoxLayout *horizontalLayout_70;
    QLabel *accYLabel;
    QLineEdit *le_Flight_accy;
    QHBoxLayout *horizontalLayout_71;
    QLabel *accZLabel;
    QLineEdit *le_Flight_accz;
    QGroupBox *wDisplay;
    QVBoxLayout *verticalLayout_43;
    QHBoxLayout *horizontalLayout_73;
    QLabel *wXLabel;
    QLineEdit *le_Flight_palx;
    QHBoxLayout *horizontalLayout_74;
    QLabel *wYlabel;
    QLineEdit *le_Flight_paly;
    QHBoxLayout *horizontalLayout_75;
    QLabel *wZlabel;
    QLineEdit *le_Flight_palz;
    QGroupBox *magDisplay;
    QVBoxLayout *verticalLayout_46;
    QHBoxLayout *horizontalLayout_91;
    QLabel *magXLabel;
    QLineEdit *le_Flight_magx;
    QHBoxLayout *horizontalLayout_92;
    QLabel *magYLabel;
    QLineEdit *le_Flight_magy;
    QHBoxLayout *horizontalLayout_93;
    QLabel *magZLabel;
    QLineEdit *le_Flight_magz;
    QGroupBox *rtkDisplay;
    QVBoxLayout *verticalLayout_150;
    QHBoxLayout *horizontalLayout_343;
    QLabel *label_6;
    QLineEdit *le_rtk_date;
    QHBoxLayout *horizontalLayout_344;
    QLabel *label_207;
    QLineEdit *le_rtk_time;
    QHBoxLayout *horizontalLayout_345;
    QLabel *label_208;
    QLineEdit *le_rtk_longitude;
    QHBoxLayout *horizontalLayout_346;
    QLabel *label_209;
    QLineEdit *le_rtk_latitude;
    QHBoxLayout *horizontalLayout_347;
    QLabel *label_210;
    QLineEdit *le_rtk_hmsl;
    QHBoxLayout *horizontalLayout_348;
    QLabel *label_211;
    QLineEdit *le_rtk_VN;
    QHBoxLayout *horizontalLayout_349;
    QLabel *label_212;
    QLineEdit *le_rtk_VE;
    QHBoxLayout *horizontalLayout_350;
    QLabel *label_213;
    QLineEdit *le_rtk_VD;
    QHBoxLayout *horizontalLayout_351;
    QLabel *label_214;
    QLineEdit *le_rtk_yaw;
    QHBoxLayout *horizontalLayout_356;
    QLabel *label_219;
    QLineEdit *le_rtk_flag_1;
    QHBoxLayout *horizontalLayout_357;
    QLabel *label_220;
    QLineEdit *le_rtk_flag_2;
    QGroupBox *qDisplay;
    QVBoxLayout *verticalLayout_41;
    QHBoxLayout *horizontalLayout_64;
    QLabel *q0Label;
    QLineEdit *le_Flight_Q0;
    QHBoxLayout *horizontalLayout_65;
    QLabel *q1Label;
    QLineEdit *le_Flight_Q1;
    QHBoxLayout *horizontalLayout_66;
    QLabel *q2Label;
    QLineEdit *le_Flight_Q2;
    QHBoxLayout *horizontalLayout_67;
    QLabel *q3Label;
    QLineEdit *le_Flight_Q3;
    QGroupBox *velDisplay;
    QVBoxLayout *verticalLayout_44;
    QHBoxLayout *horizontalLayout_77;
    QLabel *velXLabel;
    QLineEdit *le_Flight_Vx;
    QHBoxLayout *horizontalLayout_78;
    QLabel *velYLabel;
    QLineEdit *le_Flight_Vy;
    QHBoxLayout *horizontalLayout_79;
    QLabel *velZlabel;
    QLineEdit *le_Flight_Vz;
    QHBoxLayout *horizontalLayout_80;
    QLabel *velHealthLabel;
    QLineEdit *le_Flight_VH;
    QHBoxLayout *horizontalLayout_81;
    QLabel *velSensorLabel;
    QLineEdit *le_Flight_VS;
    QGroupBox *gimbalDisplay;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter;
    QLabel *gimbalYawLabel;
    QLineEdit *le_cameraYaw;
    QCheckBox *cb_cameraYawLimit;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_2;
    QLabel *gimbalRollLabel;
    QLineEdit *le_cameraRoll;
    QCheckBox *cb_cameraRollLimit;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter_3;
    QLabel *pitchGimbalLabel;
    QLineEdit *le_cameraPitch;
    QCheckBox *cb_cameraPitchLimit;
    QGroupBox *posDisplay;
    QVBoxLayout *verticalLayout_54;
    QHBoxLayout *horizontalLayout_102;
    QLabel *posHeightlabel;
    QLineEdit *le_Flight_PosH;
    QHBoxLayout *horizontalLayout_112;
    QLabel *posLatLabel;
    QLineEdit *le_Flight_PosLa;
    QHBoxLayout *horizontalLayout_117;
    QLabel *posLonLabel;
    QLineEdit *le_Flight_PosLo;
    QHBoxLayout *horizontalLayout_119;
    QLabel *posAltLabel;
    QLineEdit *le_Flight_PosAl;
    QHBoxLayout *horizontalLayout_120;
    QLabel *posHealthLabel;
    QLineEdit *le_Flight_PosHealth;
    QGroupBox *groupBox_23;
    QVBoxLayout *verticalLayout;
    QFrame *tsDisplay;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTsNs_2;
    QLineEdit *le_coreTimeStamp;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTsNs;
    QLineEdit *le_coreNanoStamp;
    QHBoxLayout *horizontalLayout_95;
    QLabel *label_3;
    QLineEdit *le_coreCapacity;
    QHBoxLayout *horizontalLayout_111;
    QLabel *label_4;
    QLineEdit *le_coreFlightStatus;
    QHBoxLayout *horizontalLayout_113;
    QLabel *label_5;
    QLineEdit *le_coreControlDevice;
    QGroupBox *rcDisplay;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_103;
    QLabel *label_71;
    QLineEdit *le_vrcRoll;
    QHBoxLayout *horizontalLayout_105;
    QLabel *label_72;
    QLineEdit *le_vrcPitch;
    QHBoxLayout *horizontalLayout_97;
    QLabel *label;
    QLineEdit *le_vrcYaw;
    QHBoxLayout *horizontalLayout_100;
    QLabel *label_69;
    QLineEdit *le_vrcThrottle;
    QHBoxLayout *horizontalLayout_98;
    QLabel *label_67;
    QLineEdit *le_vrcMode;
    QHBoxLayout *horizontalLayout_99;
    QLabel *label_68;
    QLineEdit *le_vrcGear;

    void setupUi(QWidget *Broadcast)
    {
        if (Broadcast->objectName().isEmpty())
            Broadcast->setObjectName(QStringLiteral("Broadcast"));
        Broadcast->resize(1902, 768);
        horizontalLayout_4 = new QHBoxLayout(Broadcast);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gb_CoreData = new QGroupBox(Broadcast);
        gb_CoreData->setObjectName(QStringLiteral("gb_CoreData"));
        gb_CoreData->setAlignment(Qt::AlignCenter);
        verticalLayout_33 = new QVBoxLayout(gb_CoreData);
        verticalLayout_33->setSpacing(4);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        verticalLayout_33->setContentsMargins(12, 12, 12, 12);
        pushButtonBroadcastFreqSet = new QPushButton(gb_CoreData);
        pushButtonBroadcastFreqSet->setObjectName(QStringLiteral("pushButtonBroadcastFreqSet"));

        verticalLayout_33->addWidget(pushButtonBroadcastFreqSet);

        horizontalLayoutTs = new QHBoxLayout();
        horizontalLayoutTs->setObjectName(QStringLiteral("horizontalLayoutTs"));
        labelTs = new QLabel(gb_CoreData);
        labelTs->setObjectName(QStringLiteral("labelTs"));

        horizontalLayoutTs->addWidget(labelTs);

        comboBoxTs = new QComboBox(gb_CoreData);
        comboBoxTs->addItem(QString());
        comboBoxTs->addItem(QString());
        comboBoxTs->addItem(QString());
        comboBoxTs->addItem(QString());
        comboBoxTs->addItem(QString());
        comboBoxTs->addItem(QString());
        comboBoxTs->addItem(QString());
        comboBoxTs->addItem(QString());
        comboBoxTs->setObjectName(QStringLiteral("comboBoxTs"));

        horizontalLayoutTs->addWidget(comboBoxTs);


        verticalLayout_33->addLayout(horizontalLayoutTs);

        horizontalLayoutQ = new QHBoxLayout();
        horizontalLayoutQ->setObjectName(QStringLiteral("horizontalLayoutQ"));
        labelQ = new QLabel(gb_CoreData);
        labelQ->setObjectName(QStringLiteral("labelQ"));

        horizontalLayoutQ->addWidget(labelQ);

        comboBoxQ = new QComboBox(gb_CoreData);
        comboBoxQ->addItem(QString());
        comboBoxQ->addItem(QString());
        comboBoxQ->addItem(QString());
        comboBoxQ->addItem(QString());
        comboBoxQ->addItem(QString());
        comboBoxQ->addItem(QString());
        comboBoxQ->addItem(QString());
        comboBoxQ->addItem(QString());
        comboBoxQ->setObjectName(QStringLiteral("comboBoxQ"));

        horizontalLayoutQ->addWidget(comboBoxQ);


        verticalLayout_33->addLayout(horizontalLayoutQ);

        horizontalLayoutAcc = new QHBoxLayout();
        horizontalLayoutAcc->setObjectName(QStringLiteral("horizontalLayoutAcc"));
        labelAcc = new QLabel(gb_CoreData);
        labelAcc->setObjectName(QStringLiteral("labelAcc"));

        horizontalLayoutAcc->addWidget(labelAcc);

        comboBoxAcc = new QComboBox(gb_CoreData);
        comboBoxAcc->addItem(QString());
        comboBoxAcc->addItem(QString());
        comboBoxAcc->addItem(QString());
        comboBoxAcc->addItem(QString());
        comboBoxAcc->addItem(QString());
        comboBoxAcc->addItem(QString());
        comboBoxAcc->addItem(QString());
        comboBoxAcc->addItem(QString());
        comboBoxAcc->setObjectName(QStringLiteral("comboBoxAcc"));

        horizontalLayoutAcc->addWidget(comboBoxAcc);


        verticalLayout_33->addLayout(horizontalLayoutAcc);

        horizontalLayoutVel = new QHBoxLayout();
        horizontalLayoutVel->setObjectName(QStringLiteral("horizontalLayoutVel"));
        labelVel = new QLabel(gb_CoreData);
        labelVel->setObjectName(QStringLiteral("labelVel"));

        horizontalLayoutVel->addWidget(labelVel);

        comboBoxVel = new QComboBox(gb_CoreData);
        comboBoxVel->addItem(QString());
        comboBoxVel->addItem(QString());
        comboBoxVel->addItem(QString());
        comboBoxVel->addItem(QString());
        comboBoxVel->addItem(QString());
        comboBoxVel->addItem(QString());
        comboBoxVel->addItem(QString());
        comboBoxVel->addItem(QString());
        comboBoxVel->setObjectName(QStringLiteral("comboBoxVel"));

        horizontalLayoutVel->addWidget(comboBoxVel);


        verticalLayout_33->addLayout(horizontalLayoutVel);

        horizontalLayoutW = new QHBoxLayout();
        horizontalLayoutW->setObjectName(QStringLiteral("horizontalLayoutW"));
        labelW = new QLabel(gb_CoreData);
        labelW->setObjectName(QStringLiteral("labelW"));

        horizontalLayoutW->addWidget(labelW);

        comboBoxW = new QComboBox(gb_CoreData);
        comboBoxW->addItem(QString());
        comboBoxW->addItem(QString());
        comboBoxW->addItem(QString());
        comboBoxW->addItem(QString());
        comboBoxW->addItem(QString());
        comboBoxW->addItem(QString());
        comboBoxW->addItem(QString());
        comboBoxW->addItem(QString());
        comboBoxW->setObjectName(QStringLiteral("comboBoxW"));

        horizontalLayoutW->addWidget(comboBoxW);


        verticalLayout_33->addLayout(horizontalLayoutW);

        horizontalLayoutPos = new QHBoxLayout();
        horizontalLayoutPos->setObjectName(QStringLiteral("horizontalLayoutPos"));
        labelPos = new QLabel(gb_CoreData);
        labelPos->setObjectName(QStringLiteral("labelPos"));

        horizontalLayoutPos->addWidget(labelPos);

        comboBoxPos = new QComboBox(gb_CoreData);
        comboBoxPos->addItem(QString());
        comboBoxPos->addItem(QString());
        comboBoxPos->addItem(QString());
        comboBoxPos->addItem(QString());
        comboBoxPos->addItem(QString());
        comboBoxPos->addItem(QString());
        comboBoxPos->addItem(QString());
        comboBoxPos->addItem(QString());
        comboBoxPos->setObjectName(QStringLiteral("comboBoxPos"));

        horizontalLayoutPos->addWidget(comboBoxPos);


        verticalLayout_33->addLayout(horizontalLayoutPos);

        horizontalLayoutMag = new QHBoxLayout();
        horizontalLayoutMag->setObjectName(QStringLiteral("horizontalLayoutMag"));
        labelMag = new QLabel(gb_CoreData);
        labelMag->setObjectName(QStringLiteral("labelMag"));

        horizontalLayoutMag->addWidget(labelMag);

        comboBoxMag = new QComboBox(gb_CoreData);
        comboBoxMag->addItem(QString());
        comboBoxMag->addItem(QString());
        comboBoxMag->addItem(QString());
        comboBoxMag->addItem(QString());
        comboBoxMag->addItem(QString());
        comboBoxMag->addItem(QString());
        comboBoxMag->addItem(QString());
        comboBoxMag->addItem(QString());
        comboBoxMag->setObjectName(QStringLiteral("comboBoxMag"));

        horizontalLayoutMag->addWidget(comboBoxMag);


        verticalLayout_33->addLayout(horizontalLayoutMag);

        horizontalLayoutRC = new QHBoxLayout();
        horizontalLayoutRC->setObjectName(QStringLiteral("horizontalLayoutRC"));
        labelRC = new QLabel(gb_CoreData);
        labelRC->setObjectName(QStringLiteral("labelRC"));

        horizontalLayoutRC->addWidget(labelRC);

        comboBoxRC = new QComboBox(gb_CoreData);
        comboBoxRC->addItem(QString());
        comboBoxRC->addItem(QString());
        comboBoxRC->addItem(QString());
        comboBoxRC->addItem(QString());
        comboBoxRC->addItem(QString());
        comboBoxRC->addItem(QString());
        comboBoxRC->addItem(QString());
        comboBoxRC->addItem(QString());
        comboBoxRC->setObjectName(QStringLiteral("comboBoxRC"));

        horizontalLayoutRC->addWidget(comboBoxRC);


        verticalLayout_33->addLayout(horizontalLayoutRC);

        horizontalLayoutGimbal = new QHBoxLayout();
        horizontalLayoutGimbal->setObjectName(QStringLiteral("horizontalLayoutGimbal"));
        labelGimbal = new QLabel(gb_CoreData);
        labelGimbal->setObjectName(QStringLiteral("labelGimbal"));

        horizontalLayoutGimbal->addWidget(labelGimbal);

        comboBoxGimbal = new QComboBox(gb_CoreData);
        comboBoxGimbal->addItem(QString());
        comboBoxGimbal->addItem(QString());
        comboBoxGimbal->addItem(QString());
        comboBoxGimbal->addItem(QString());
        comboBoxGimbal->addItem(QString());
        comboBoxGimbal->addItem(QString());
        comboBoxGimbal->addItem(QString());
        comboBoxGimbal->addItem(QString());
        comboBoxGimbal->setObjectName(QStringLiteral("comboBoxGimbal"));

        horizontalLayoutGimbal->addWidget(comboBoxGimbal);


        verticalLayout_33->addLayout(horizontalLayoutGimbal);

        horizontalLayoutStatus = new QHBoxLayout();
        horizontalLayoutStatus->setObjectName(QStringLiteral("horizontalLayoutStatus"));
        labelStatus = new QLabel(gb_CoreData);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        horizontalLayoutStatus->addWidget(labelStatus);

        comboBoxStatus = new QComboBox(gb_CoreData);
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->setObjectName(QStringLiteral("comboBoxStatus"));

        horizontalLayoutStatus->addWidget(comboBoxStatus);


        verticalLayout_33->addLayout(horizontalLayoutStatus);

        horizontalLayoutBat = new QHBoxLayout();
        horizontalLayoutBat->setObjectName(QStringLiteral("horizontalLayoutBat"));
        labelBat = new QLabel(gb_CoreData);
        labelBat->setObjectName(QStringLiteral("labelBat"));

        horizontalLayoutBat->addWidget(labelBat);

        comboBoxBat = new QComboBox(gb_CoreData);
        comboBoxBat->addItem(QString());
        comboBoxBat->addItem(QString());
        comboBoxBat->addItem(QString());
        comboBoxBat->addItem(QString());
        comboBoxBat->addItem(QString());
        comboBoxBat->addItem(QString());
        comboBoxBat->addItem(QString());
        comboBoxBat->addItem(QString());
        comboBoxBat->setObjectName(QStringLiteral("comboBoxBat"));

        horizontalLayoutBat->addWidget(comboBoxBat);


        verticalLayout_33->addLayout(horizontalLayoutBat);

        horizontalLayoutCtrlInfo = new QHBoxLayout();
        horizontalLayoutCtrlInfo->setObjectName(QStringLiteral("horizontalLayoutCtrlInfo"));
        labelCtrlInfo = new QLabel(gb_CoreData);
        labelCtrlInfo->setObjectName(QStringLiteral("labelCtrlInfo"));

        horizontalLayoutCtrlInfo->addWidget(labelCtrlInfo);

        comboBoxCtrlInfo = new QComboBox(gb_CoreData);
        comboBoxCtrlInfo->addItem(QString());
        comboBoxCtrlInfo->addItem(QString());
        comboBoxCtrlInfo->addItem(QString());
        comboBoxCtrlInfo->addItem(QString());
        comboBoxCtrlInfo->addItem(QString());
        comboBoxCtrlInfo->addItem(QString());
        comboBoxCtrlInfo->addItem(QString());
        comboBoxCtrlInfo->addItem(QString());
        comboBoxCtrlInfo->setObjectName(QStringLiteral("comboBoxCtrlInfo"));

        horizontalLayoutCtrlInfo->addWidget(comboBoxCtrlInfo);


        verticalLayout_33->addLayout(horizontalLayoutCtrlInfo);

        horizontalLayoutRTK = new QHBoxLayout();
        horizontalLayoutRTK->setObjectName(QStringLiteral("horizontalLayoutRTK"));
        labelRTK = new QLabel(gb_CoreData);
        labelRTK->setObjectName(QStringLiteral("labelRTK"));

        horizontalLayoutRTK->addWidget(labelRTK);

        comboBoxRTK = new QComboBox(gb_CoreData);
        comboBoxRTK->addItem(QString());
        comboBoxRTK->addItem(QString());
        comboBoxRTK->addItem(QString());
        comboBoxRTK->addItem(QString());
        comboBoxRTK->addItem(QString());
        comboBoxRTK->addItem(QString());
        comboBoxRTK->addItem(QString());
        comboBoxRTK->addItem(QString());
        comboBoxRTK->setObjectName(QStringLiteral("comboBoxRTK"));

        horizontalLayoutRTK->addWidget(comboBoxRTK);


        verticalLayout_33->addLayout(horizontalLayoutRTK);

        horizontalLayoutGPS = new QHBoxLayout();
        horizontalLayoutGPS->setObjectName(QStringLiteral("horizontalLayoutGPS"));
        labelGPS = new QLabel(gb_CoreData);
        labelGPS->setObjectName(QStringLiteral("labelGPS"));

        horizontalLayoutGPS->addWidget(labelGPS);

        comboBoxGPS = new QComboBox(gb_CoreData);
        comboBoxGPS->addItem(QString());
        comboBoxGPS->addItem(QString());
        comboBoxGPS->addItem(QString());
        comboBoxGPS->addItem(QString());
        comboBoxGPS->addItem(QString());
        comboBoxGPS->addItem(QString());
        comboBoxGPS->addItem(QString());
        comboBoxGPS->addItem(QString());
        comboBoxGPS->setObjectName(QStringLiteral("comboBoxGPS"));

        horizontalLayoutGPS->addWidget(comboBoxGPS);


        verticalLayout_33->addLayout(horizontalLayoutGPS);


        horizontalLayout_4->addWidget(gb_CoreData);

        scrollArea = new QScrollArea(Broadcast);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1542, 730));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        broadcastDisplay = new QGroupBox(scrollAreaWidgetContents);
        broadcastDisplay->setObjectName(QStringLiteral("broadcastDisplay"));
        broadcastDisplay->setMinimumSize(QSize(1503, 655));
        broadcastDisplay->setMaximumSize(QSize(16777215, 820));
        gridLayout_2 = new QGridLayout(broadcastDisplay);
        gridLayout_2->setSpacing(12);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(12, 12, 12, 12);
        gpsDisplay = new QGroupBox(broadcastDisplay);
        gpsDisplay->setObjectName(QStringLiteral("gpsDisplay"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gpsDisplay->sizePolicy().hasHeightForWidth());
        gpsDisplay->setSizePolicy(sizePolicy);
        gpsDisplay->setMinimumSize(QSize(200, 450));
        verticalLayout_75 = new QVBoxLayout(gpsDisplay);
        verticalLayout_75->setSpacing(2);
        verticalLayout_75->setObjectName(QStringLiteral("verticalLayout_75"));
        verticalLayout_75->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_149 = new QHBoxLayout();
        horizontalLayout_149->setObjectName(QStringLiteral("horizontalLayout_149"));
        label_gps_date = new QLabel(gpsDisplay);
        label_gps_date->setObjectName(QStringLiteral("label_gps_date"));

        horizontalLayout_149->addWidget(label_gps_date);

        le_gps_date = new QLineEdit(gpsDisplay);
        le_gps_date->setObjectName(QStringLiteral("le_gps_date"));
        le_gps_date->setReadOnly(true);

        horizontalLayout_149->addWidget(le_gps_date);


        verticalLayout_75->addLayout(horizontalLayout_149);

        horizontalLayout_150 = new QHBoxLayout();
        horizontalLayout_150->setObjectName(QStringLiteral("horizontalLayout_150"));
        label_84 = new QLabel(gpsDisplay);
        label_84->setObjectName(QStringLiteral("label_84"));

        horizontalLayout_150->addWidget(label_84);

        le_gps_time = new QLineEdit(gpsDisplay);
        le_gps_time->setObjectName(QStringLiteral("le_gps_time"));
        le_gps_time->setReadOnly(true);

        horizontalLayout_150->addWidget(le_gps_time);


        verticalLayout_75->addLayout(horizontalLayout_150);

        horizontalLayout_151 = new QHBoxLayout();
        horizontalLayout_151->setObjectName(QStringLiteral("horizontalLayout_151"));
        label_85 = new QLabel(gpsDisplay);
        label_85->setObjectName(QStringLiteral("label_85"));

        horizontalLayout_151->addWidget(label_85);

        le_gps_longitude = new QLineEdit(gpsDisplay);
        le_gps_longitude->setObjectName(QStringLiteral("le_gps_longitude"));
        le_gps_longitude->setReadOnly(true);

        horizontalLayout_151->addWidget(le_gps_longitude);


        verticalLayout_75->addLayout(horizontalLayout_151);

        horizontalLayout_152 = new QHBoxLayout();
        horizontalLayout_152->setObjectName(QStringLiteral("horizontalLayout_152"));
        label_86 = new QLabel(gpsDisplay);
        label_86->setObjectName(QStringLiteral("label_86"));

        horizontalLayout_152->addWidget(label_86);

        le_gps_latitude = new QLineEdit(gpsDisplay);
        le_gps_latitude->setObjectName(QStringLiteral("le_gps_latitude"));
        le_gps_latitude->setReadOnly(true);

        horizontalLayout_152->addWidget(le_gps_latitude);


        verticalLayout_75->addLayout(horizontalLayout_152);

        horizontalLayout_153 = new QHBoxLayout();
        horizontalLayout_153->setObjectName(QStringLiteral("horizontalLayout_153"));
        label_87 = new QLabel(gpsDisplay);
        label_87->setObjectName(QStringLiteral("label_87"));

        horizontalLayout_153->addWidget(label_87);

        le_gps_hmsl = new QLineEdit(gpsDisplay);
        le_gps_hmsl->setObjectName(QStringLiteral("le_gps_hmsl"));
        le_gps_hmsl->setReadOnly(true);

        horizontalLayout_153->addWidget(le_gps_hmsl);


        verticalLayout_75->addLayout(horizontalLayout_153);

        horizontalLayout_154 = new QHBoxLayout();
        horizontalLayout_154->setObjectName(QStringLiteral("horizontalLayout_154"));
        label_88 = new QLabel(gpsDisplay);
        label_88->setObjectName(QStringLiteral("label_88"));

        horizontalLayout_154->addWidget(label_88);

        le_gps_VN = new QLineEdit(gpsDisplay);
        le_gps_VN->setObjectName(QStringLiteral("le_gps_VN"));
        le_gps_VN->setReadOnly(true);

        horizontalLayout_154->addWidget(le_gps_VN);


        verticalLayout_75->addLayout(horizontalLayout_154);

        horizontalLayout_155 = new QHBoxLayout();
        horizontalLayout_155->setObjectName(QStringLiteral("horizontalLayout_155"));
        label_89 = new QLabel(gpsDisplay);
        label_89->setObjectName(QStringLiteral("label_89"));

        horizontalLayout_155->addWidget(label_89);

        le_gps_VE = new QLineEdit(gpsDisplay);
        le_gps_VE->setObjectName(QStringLiteral("le_gps_VE"));
        le_gps_VE->setReadOnly(true);

        horizontalLayout_155->addWidget(le_gps_VE);


        verticalLayout_75->addLayout(horizontalLayout_155);

        horizontalLayout_156 = new QHBoxLayout();
        horizontalLayout_156->setObjectName(QStringLiteral("horizontalLayout_156"));
        label_90 = new QLabel(gpsDisplay);
        label_90->setObjectName(QStringLiteral("label_90"));

        horizontalLayout_156->addWidget(label_90);

        le_gps_VD = new QLineEdit(gpsDisplay);
        le_gps_VD->setObjectName(QStringLiteral("le_gps_VD"));
        le_gps_VD->setReadOnly(true);

        horizontalLayout_156->addWidget(le_gps_VD);


        verticalLayout_75->addLayout(horizontalLayout_156);

        horizontalLayout_166 = new QHBoxLayout();
        horizontalLayout_166->setObjectName(QStringLiteral("horizontalLayout_166"));
        label_98 = new QLabel(gpsDisplay);
        label_98->setObjectName(QStringLiteral("label_98"));

        horizontalLayout_166->addWidget(label_98);

        le_gps_hdop = new QLineEdit(gpsDisplay);
        le_gps_hdop->setObjectName(QStringLiteral("le_gps_hdop"));
        le_gps_hdop->setReadOnly(true);

        horizontalLayout_166->addWidget(le_gps_hdop);


        verticalLayout_75->addLayout(horizontalLayout_166);

        horizontalLayout_167 = new QHBoxLayout();
        horizontalLayout_167->setObjectName(QStringLiteral("horizontalLayout_167"));
        label_99 = new QLabel(gpsDisplay);
        label_99->setObjectName(QStringLiteral("label_99"));

        horizontalLayout_167->addWidget(label_99);

        le_gps_pdop = new QLineEdit(gpsDisplay);
        le_gps_pdop->setObjectName(QStringLiteral("le_gps_pdop"));
        le_gps_pdop->setReadOnly(true);

        horizontalLayout_167->addWidget(le_gps_pdop);


        verticalLayout_75->addLayout(horizontalLayout_167);

        horizontalLayout_168 = new QHBoxLayout();
        horizontalLayout_168->setObjectName(QStringLiteral("horizontalLayout_168"));
        label_100 = new QLabel(gpsDisplay);
        label_100->setObjectName(QStringLiteral("label_100"));

        horizontalLayout_168->addWidget(label_100);

        le_gps_GNSSFlag = new QLineEdit(gpsDisplay);
        le_gps_GNSSFlag->setObjectName(QStringLiteral("le_gps_GNSSFlag"));
        le_gps_GNSSFlag->setReadOnly(true);

        horizontalLayout_168->addWidget(le_gps_GNSSFlag);


        verticalLayout_75->addLayout(horizontalLayout_168);

        horizontalLayout_169 = new QHBoxLayout();
        horizontalLayout_169->setObjectName(QStringLiteral("horizontalLayout_169"));
        label_101 = new QLabel(gpsDisplay);
        label_101->setObjectName(QStringLiteral("label_101"));

        horizontalLayout_169->addWidget(label_101);

        le_gps_gnssFix = new QLineEdit(gpsDisplay);
        le_gps_gnssFix->setObjectName(QStringLiteral("le_gps_gnssFix"));
        le_gps_gnssFix->setReadOnly(true);

        horizontalLayout_169->addWidget(le_gps_gnssFix);


        verticalLayout_75->addLayout(horizontalLayout_169);

        horizontalLayout_170 = new QHBoxLayout();
        horizontalLayout_170->setObjectName(QStringLiteral("horizontalLayout_170"));
        label_102 = new QLabel(gpsDisplay);
        label_102->setObjectName(QStringLiteral("label_102"));

        horizontalLayout_170->addWidget(label_102);

        le_gps_hacc = new QLineEdit(gpsDisplay);
        le_gps_hacc->setObjectName(QStringLiteral("le_gps_hacc"));
        le_gps_hacc->setReadOnly(true);

        horizontalLayout_170->addWidget(le_gps_hacc);


        verticalLayout_75->addLayout(horizontalLayout_170);

        horizontalLayout_171 = new QHBoxLayout();
        horizontalLayout_171->setObjectName(QStringLiteral("horizontalLayout_171"));
        label_103 = new QLabel(gpsDisplay);
        label_103->setObjectName(QStringLiteral("label_103"));

        horizontalLayout_171->addWidget(label_103);

        le_gps_sacc = new QLineEdit(gpsDisplay);
        le_gps_sacc->setObjectName(QStringLiteral("le_gps_sacc"));
        le_gps_sacc->setReadOnly(true);

        horizontalLayout_171->addWidget(le_gps_sacc);


        verticalLayout_75->addLayout(horizontalLayout_171);

        horizontalLayout_172 = new QHBoxLayout();
        horizontalLayout_172->setObjectName(QStringLiteral("horizontalLayout_172"));
        label_104 = new QLabel(gpsDisplay);
        label_104->setObjectName(QStringLiteral("label_104"));

        horizontalLayout_172->addWidget(label_104);

        le_gps_guse = new QLineEdit(gpsDisplay);
        le_gps_guse->setObjectName(QStringLiteral("le_gps_guse"));
        le_gps_guse->setReadOnly(true);

        horizontalLayout_172->addWidget(le_gps_guse);


        verticalLayout_75->addLayout(horizontalLayout_172);

        horizontalLayout_339 = new QHBoxLayout();
        horizontalLayout_339->setObjectName(QStringLiteral("horizontalLayout_339"));
        label_204 = new QLabel(gpsDisplay);
        label_204->setObjectName(QStringLiteral("label_204"));

        horizontalLayout_339->addWidget(label_204);

        le_gps_gnuse = new QLineEdit(gpsDisplay);
        le_gps_gnuse->setObjectName(QStringLiteral("le_gps_gnuse"));
        le_gps_gnuse->setReadOnly(true);

        horizontalLayout_339->addWidget(le_gps_gnuse);


        verticalLayout_75->addLayout(horizontalLayout_339);

        horizontalLayout_340 = new QHBoxLayout();
        horizontalLayout_340->setObjectName(QStringLiteral("horizontalLayout_340"));
        label_205 = new QLabel(gpsDisplay);
        label_205->setObjectName(QStringLiteral("label_205"));

        horizontalLayout_340->addWidget(label_205);

        le_gps_svn = new QLineEdit(gpsDisplay);
        le_gps_svn->setObjectName(QStringLiteral("le_gps_svn"));
        le_gps_svn->setReadOnly(true);

        horizontalLayout_340->addWidget(le_gps_svn);


        verticalLayout_75->addLayout(horizontalLayout_340);

        horizontalLayout_341 = new QHBoxLayout();
        horizontalLayout_341->setObjectName(QStringLiteral("horizontalLayout_341"));
        label_206 = new QLabel(gpsDisplay);
        label_206->setObjectName(QStringLiteral("label_206"));

        horizontalLayout_341->addWidget(label_206);

        le_gps_gps = new QLineEdit(gpsDisplay);
        le_gps_gps->setObjectName(QStringLiteral("le_gps_gps"));
        le_gps_gps->setReadOnly(true);

        horizontalLayout_341->addWidget(le_gps_gps);


        verticalLayout_75->addLayout(horizontalLayout_341);


        gridLayout_2->addWidget(gpsDisplay, 0, 3, 5, 1);

        accDisplay = new QGroupBox(broadcastDisplay);
        accDisplay->setObjectName(QStringLiteral("accDisplay"));
        verticalLayout_42 = new QVBoxLayout(accDisplay);
        verticalLayout_42->setSpacing(2);
        verticalLayout_42->setObjectName(QStringLiteral("verticalLayout_42"));
        verticalLayout_42->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_69 = new QHBoxLayout();
        horizontalLayout_69->setSpacing(6);
        horizontalLayout_69->setObjectName(QStringLiteral("horizontalLayout_69"));
        accXlabel = new QLabel(accDisplay);
        accXlabel->setObjectName(QStringLiteral("accXlabel"));

        horizontalLayout_69->addWidget(accXlabel);

        le_Flight_accx = new QLineEdit(accDisplay);
        le_Flight_accx->setObjectName(QStringLiteral("le_Flight_accx"));
        le_Flight_accx->setReadOnly(true);

        horizontalLayout_69->addWidget(le_Flight_accx);


        verticalLayout_42->addLayout(horizontalLayout_69);

        horizontalLayout_70 = new QHBoxLayout();
        horizontalLayout_70->setSpacing(6);
        horizontalLayout_70->setObjectName(QStringLiteral("horizontalLayout_70"));
        accYLabel = new QLabel(accDisplay);
        accYLabel->setObjectName(QStringLiteral("accYLabel"));

        horizontalLayout_70->addWidget(accYLabel);

        le_Flight_accy = new QLineEdit(accDisplay);
        le_Flight_accy->setObjectName(QStringLiteral("le_Flight_accy"));
        le_Flight_accy->setReadOnly(true);

        horizontalLayout_70->addWidget(le_Flight_accy);


        verticalLayout_42->addLayout(horizontalLayout_70);

        horizontalLayout_71 = new QHBoxLayout();
        horizontalLayout_71->setSpacing(6);
        horizontalLayout_71->setObjectName(QStringLiteral("horizontalLayout_71"));
        accZLabel = new QLabel(accDisplay);
        accZLabel->setObjectName(QStringLiteral("accZLabel"));

        horizontalLayout_71->addWidget(accZLabel);

        le_Flight_accz = new QLineEdit(accDisplay);
        le_Flight_accz->setObjectName(QStringLiteral("le_Flight_accz"));
        le_Flight_accz->setReadOnly(true);

        horizontalLayout_71->addWidget(le_Flight_accz);


        verticalLayout_42->addLayout(horizontalLayout_71);


        gridLayout_2->addWidget(accDisplay, 0, 0, 1, 1);

        wDisplay = new QGroupBox(broadcastDisplay);
        wDisplay->setObjectName(QStringLiteral("wDisplay"));
        verticalLayout_43 = new QVBoxLayout(wDisplay);
        verticalLayout_43->setSpacing(2);
        verticalLayout_43->setObjectName(QStringLiteral("verticalLayout_43"));
        verticalLayout_43->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_73 = new QHBoxLayout();
        horizontalLayout_73->setSpacing(6);
        horizontalLayout_73->setObjectName(QStringLiteral("horizontalLayout_73"));
        wXLabel = new QLabel(wDisplay);
        wXLabel->setObjectName(QStringLiteral("wXLabel"));

        horizontalLayout_73->addWidget(wXLabel);

        le_Flight_palx = new QLineEdit(wDisplay);
        le_Flight_palx->setObjectName(QStringLiteral("le_Flight_palx"));
        le_Flight_palx->setReadOnly(true);

        horizontalLayout_73->addWidget(le_Flight_palx);


        verticalLayout_43->addLayout(horizontalLayout_73);

        horizontalLayout_74 = new QHBoxLayout();
        horizontalLayout_74->setSpacing(6);
        horizontalLayout_74->setObjectName(QStringLiteral("horizontalLayout_74"));
        wYlabel = new QLabel(wDisplay);
        wYlabel->setObjectName(QStringLiteral("wYlabel"));

        horizontalLayout_74->addWidget(wYlabel);

        le_Flight_paly = new QLineEdit(wDisplay);
        le_Flight_paly->setObjectName(QStringLiteral("le_Flight_paly"));
        le_Flight_paly->setReadOnly(true);

        horizontalLayout_74->addWidget(le_Flight_paly);


        verticalLayout_43->addLayout(horizontalLayout_74);

        horizontalLayout_75 = new QHBoxLayout();
        horizontalLayout_75->setSpacing(6);
        horizontalLayout_75->setObjectName(QStringLiteral("horizontalLayout_75"));
        wZlabel = new QLabel(wDisplay);
        wZlabel->setObjectName(QStringLiteral("wZlabel"));

        horizontalLayout_75->addWidget(wZlabel);

        le_Flight_palz = new QLineEdit(wDisplay);
        le_Flight_palz->setObjectName(QStringLiteral("le_Flight_palz"));
        le_Flight_palz->setReadOnly(true);

        horizontalLayout_75->addWidget(le_Flight_palz);


        verticalLayout_43->addLayout(horizontalLayout_75);


        gridLayout_2->addWidget(wDisplay, 0, 1, 1, 1);

        magDisplay = new QGroupBox(broadcastDisplay);
        magDisplay->setObjectName(QStringLiteral("magDisplay"));
        verticalLayout_46 = new QVBoxLayout(magDisplay);
        verticalLayout_46->setSpacing(2);
        verticalLayout_46->setObjectName(QStringLiteral("verticalLayout_46"));
        verticalLayout_46->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_91 = new QHBoxLayout();
        horizontalLayout_91->setSpacing(6);
        horizontalLayout_91->setObjectName(QStringLiteral("horizontalLayout_91"));
        magXLabel = new QLabel(magDisplay);
        magXLabel->setObjectName(QStringLiteral("magXLabel"));

        horizontalLayout_91->addWidget(magXLabel);

        le_Flight_magx = new QLineEdit(magDisplay);
        le_Flight_magx->setObjectName(QStringLiteral("le_Flight_magx"));
        le_Flight_magx->setReadOnly(true);

        horizontalLayout_91->addWidget(le_Flight_magx);


        verticalLayout_46->addLayout(horizontalLayout_91);

        horizontalLayout_92 = new QHBoxLayout();
        horizontalLayout_92->setSpacing(6);
        horizontalLayout_92->setObjectName(QStringLiteral("horizontalLayout_92"));
        magYLabel = new QLabel(magDisplay);
        magYLabel->setObjectName(QStringLiteral("magYLabel"));

        horizontalLayout_92->addWidget(magYLabel);

        le_Flight_magy = new QLineEdit(magDisplay);
        le_Flight_magy->setObjectName(QStringLiteral("le_Flight_magy"));
        le_Flight_magy->setReadOnly(true);

        horizontalLayout_92->addWidget(le_Flight_magy);


        verticalLayout_46->addLayout(horizontalLayout_92);

        horizontalLayout_93 = new QHBoxLayout();
        horizontalLayout_93->setSpacing(6);
        horizontalLayout_93->setObjectName(QStringLiteral("horizontalLayout_93"));
        magZLabel = new QLabel(magDisplay);
        magZLabel->setObjectName(QStringLiteral("magZLabel"));

        horizontalLayout_93->addWidget(magZLabel);

        le_Flight_magz = new QLineEdit(magDisplay);
        le_Flight_magz->setObjectName(QStringLiteral("le_Flight_magz"));
        le_Flight_magz->setReadOnly(true);

        horizontalLayout_93->addWidget(le_Flight_magz);


        verticalLayout_46->addLayout(horizontalLayout_93);


        gridLayout_2->addWidget(magDisplay, 0, 2, 1, 1);

        rtkDisplay = new QGroupBox(broadcastDisplay);
        rtkDisplay->setObjectName(QStringLiteral("rtkDisplay"));
        verticalLayout_150 = new QVBoxLayout(rtkDisplay);
        verticalLayout_150->setSpacing(2);
        verticalLayout_150->setObjectName(QStringLiteral("verticalLayout_150"));
        verticalLayout_150->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_343 = new QHBoxLayout();
        horizontalLayout_343->setObjectName(QStringLiteral("horizontalLayout_343"));
        label_6 = new QLabel(rtkDisplay);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_343->addWidget(label_6);

        le_rtk_date = new QLineEdit(rtkDisplay);
        le_rtk_date->setObjectName(QStringLiteral("le_rtk_date"));
        le_rtk_date->setReadOnly(true);

        horizontalLayout_343->addWidget(le_rtk_date);


        verticalLayout_150->addLayout(horizontalLayout_343);

        horizontalLayout_344 = new QHBoxLayout();
        horizontalLayout_344->setObjectName(QStringLiteral("horizontalLayout_344"));
        label_207 = new QLabel(rtkDisplay);
        label_207->setObjectName(QStringLiteral("label_207"));

        horizontalLayout_344->addWidget(label_207);

        le_rtk_time = new QLineEdit(rtkDisplay);
        le_rtk_time->setObjectName(QStringLiteral("le_rtk_time"));
        le_rtk_time->setReadOnly(true);

        horizontalLayout_344->addWidget(le_rtk_time);


        verticalLayout_150->addLayout(horizontalLayout_344);

        horizontalLayout_345 = new QHBoxLayout();
        horizontalLayout_345->setObjectName(QStringLiteral("horizontalLayout_345"));
        label_208 = new QLabel(rtkDisplay);
        label_208->setObjectName(QStringLiteral("label_208"));

        horizontalLayout_345->addWidget(label_208);

        le_rtk_longitude = new QLineEdit(rtkDisplay);
        le_rtk_longitude->setObjectName(QStringLiteral("le_rtk_longitude"));
        le_rtk_longitude->setReadOnly(true);

        horizontalLayout_345->addWidget(le_rtk_longitude);


        verticalLayout_150->addLayout(horizontalLayout_345);

        horizontalLayout_346 = new QHBoxLayout();
        horizontalLayout_346->setObjectName(QStringLiteral("horizontalLayout_346"));
        label_209 = new QLabel(rtkDisplay);
        label_209->setObjectName(QStringLiteral("label_209"));

        horizontalLayout_346->addWidget(label_209);

        le_rtk_latitude = new QLineEdit(rtkDisplay);
        le_rtk_latitude->setObjectName(QStringLiteral("le_rtk_latitude"));
        le_rtk_latitude->setReadOnly(true);

        horizontalLayout_346->addWidget(le_rtk_latitude);


        verticalLayout_150->addLayout(horizontalLayout_346);

        horizontalLayout_347 = new QHBoxLayout();
        horizontalLayout_347->setObjectName(QStringLiteral("horizontalLayout_347"));
        label_210 = new QLabel(rtkDisplay);
        label_210->setObjectName(QStringLiteral("label_210"));

        horizontalLayout_347->addWidget(label_210);

        le_rtk_hmsl = new QLineEdit(rtkDisplay);
        le_rtk_hmsl->setObjectName(QStringLiteral("le_rtk_hmsl"));
        le_rtk_hmsl->setReadOnly(true);

        horizontalLayout_347->addWidget(le_rtk_hmsl);


        verticalLayout_150->addLayout(horizontalLayout_347);

        horizontalLayout_348 = new QHBoxLayout();
        horizontalLayout_348->setObjectName(QStringLiteral("horizontalLayout_348"));
        label_211 = new QLabel(rtkDisplay);
        label_211->setObjectName(QStringLiteral("label_211"));

        horizontalLayout_348->addWidget(label_211);

        le_rtk_VN = new QLineEdit(rtkDisplay);
        le_rtk_VN->setObjectName(QStringLiteral("le_rtk_VN"));
        le_rtk_VN->setReadOnly(true);

        horizontalLayout_348->addWidget(le_rtk_VN);


        verticalLayout_150->addLayout(horizontalLayout_348);

        horizontalLayout_349 = new QHBoxLayout();
        horizontalLayout_349->setObjectName(QStringLiteral("horizontalLayout_349"));
        label_212 = new QLabel(rtkDisplay);
        label_212->setObjectName(QStringLiteral("label_212"));

        horizontalLayout_349->addWidget(label_212);

        le_rtk_VE = new QLineEdit(rtkDisplay);
        le_rtk_VE->setObjectName(QStringLiteral("le_rtk_VE"));
        le_rtk_VE->setReadOnly(true);

        horizontalLayout_349->addWidget(le_rtk_VE);


        verticalLayout_150->addLayout(horizontalLayout_349);

        horizontalLayout_350 = new QHBoxLayout();
        horizontalLayout_350->setObjectName(QStringLiteral("horizontalLayout_350"));
        label_213 = new QLabel(rtkDisplay);
        label_213->setObjectName(QStringLiteral("label_213"));

        horizontalLayout_350->addWidget(label_213);

        le_rtk_VD = new QLineEdit(rtkDisplay);
        le_rtk_VD->setObjectName(QStringLiteral("le_rtk_VD"));
        le_rtk_VD->setReadOnly(true);

        horizontalLayout_350->addWidget(le_rtk_VD);


        verticalLayout_150->addLayout(horizontalLayout_350);

        horizontalLayout_351 = new QHBoxLayout();
        horizontalLayout_351->setObjectName(QStringLiteral("horizontalLayout_351"));
        label_214 = new QLabel(rtkDisplay);
        label_214->setObjectName(QStringLiteral("label_214"));

        horizontalLayout_351->addWidget(label_214);

        le_rtk_yaw = new QLineEdit(rtkDisplay);
        le_rtk_yaw->setObjectName(QStringLiteral("le_rtk_yaw"));
        le_rtk_yaw->setReadOnly(true);

        horizontalLayout_351->addWidget(le_rtk_yaw);


        verticalLayout_150->addLayout(horizontalLayout_351);

        horizontalLayout_356 = new QHBoxLayout();
        horizontalLayout_356->setObjectName(QStringLiteral("horizontalLayout_356"));
        label_219 = new QLabel(rtkDisplay);
        label_219->setObjectName(QStringLiteral("label_219"));

        horizontalLayout_356->addWidget(label_219);

        le_rtk_flag_1 = new QLineEdit(rtkDisplay);
        le_rtk_flag_1->setObjectName(QStringLiteral("le_rtk_flag_1"));
        le_rtk_flag_1->setReadOnly(true);

        horizontalLayout_356->addWidget(le_rtk_flag_1);


        verticalLayout_150->addLayout(horizontalLayout_356);

        horizontalLayout_357 = new QHBoxLayout();
        horizontalLayout_357->setObjectName(QStringLiteral("horizontalLayout_357"));
        label_220 = new QLabel(rtkDisplay);
        label_220->setObjectName(QStringLiteral("label_220"));

        horizontalLayout_357->addWidget(label_220);

        le_rtk_flag_2 = new QLineEdit(rtkDisplay);
        le_rtk_flag_2->setObjectName(QStringLiteral("le_rtk_flag_2"));
        le_rtk_flag_2->setReadOnly(true);

        horizontalLayout_357->addWidget(le_rtk_flag_2);


        verticalLayout_150->addLayout(horizontalLayout_357);


        gridLayout_2->addWidget(rtkDisplay, 0, 4, 4, 1);

        qDisplay = new QGroupBox(broadcastDisplay);
        qDisplay->setObjectName(QStringLiteral("qDisplay"));
        qDisplay->setMinimumSize(QSize(172, 180));
        verticalLayout_41 = new QVBoxLayout(qDisplay);
        verticalLayout_41->setSpacing(2);
        verticalLayout_41->setObjectName(QStringLiteral("verticalLayout_41"));
        verticalLayout_41->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_64 = new QHBoxLayout();
        horizontalLayout_64->setSpacing(6);
        horizontalLayout_64->setObjectName(QStringLiteral("horizontalLayout_64"));
        q0Label = new QLabel(qDisplay);
        q0Label->setObjectName(QStringLiteral("q0Label"));

        horizontalLayout_64->addWidget(q0Label);

        le_Flight_Q0 = new QLineEdit(qDisplay);
        le_Flight_Q0->setObjectName(QStringLiteral("le_Flight_Q0"));
        le_Flight_Q0->setReadOnly(true);

        horizontalLayout_64->addWidget(le_Flight_Q0);


        verticalLayout_41->addLayout(horizontalLayout_64);

        horizontalLayout_65 = new QHBoxLayout();
        horizontalLayout_65->setSpacing(6);
        horizontalLayout_65->setObjectName(QStringLiteral("horizontalLayout_65"));
        q1Label = new QLabel(qDisplay);
        q1Label->setObjectName(QStringLiteral("q1Label"));

        horizontalLayout_65->addWidget(q1Label);

        le_Flight_Q1 = new QLineEdit(qDisplay);
        le_Flight_Q1->setObjectName(QStringLiteral("le_Flight_Q1"));
        le_Flight_Q1->setReadOnly(true);

        horizontalLayout_65->addWidget(le_Flight_Q1);


        verticalLayout_41->addLayout(horizontalLayout_65);

        horizontalLayout_66 = new QHBoxLayout();
        horizontalLayout_66->setSpacing(6);
        horizontalLayout_66->setObjectName(QStringLiteral("horizontalLayout_66"));
        q2Label = new QLabel(qDisplay);
        q2Label->setObjectName(QStringLiteral("q2Label"));

        horizontalLayout_66->addWidget(q2Label);

        le_Flight_Q2 = new QLineEdit(qDisplay);
        le_Flight_Q2->setObjectName(QStringLiteral("le_Flight_Q2"));
        le_Flight_Q2->setReadOnly(true);

        horizontalLayout_66->addWidget(le_Flight_Q2);


        verticalLayout_41->addLayout(horizontalLayout_66);

        horizontalLayout_67 = new QHBoxLayout();
        horizontalLayout_67->setSpacing(6);
        horizontalLayout_67->setObjectName(QStringLiteral("horizontalLayout_67"));
        q3Label = new QLabel(qDisplay);
        q3Label->setObjectName(QStringLiteral("q3Label"));

        horizontalLayout_67->addWidget(q3Label);

        le_Flight_Q3 = new QLineEdit(qDisplay);
        le_Flight_Q3->setObjectName(QStringLiteral("le_Flight_Q3"));
        le_Flight_Q3->setReadOnly(true);

        horizontalLayout_67->addWidget(le_Flight_Q3);


        verticalLayout_41->addLayout(horizontalLayout_67);


        gridLayout_2->addWidget(qDisplay, 1, 0, 1, 1);

        velDisplay = new QGroupBox(broadcastDisplay);
        velDisplay->setObjectName(QStringLiteral("velDisplay"));
        velDisplay->setMinimumSize(QSize(0, 180));
        verticalLayout_44 = new QVBoxLayout(velDisplay);
        verticalLayout_44->setSpacing(2);
        verticalLayout_44->setObjectName(QStringLiteral("verticalLayout_44"));
        verticalLayout_44->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_77 = new QHBoxLayout();
        horizontalLayout_77->setSpacing(6);
        horizontalLayout_77->setObjectName(QStringLiteral("horizontalLayout_77"));
        velXLabel = new QLabel(velDisplay);
        velXLabel->setObjectName(QStringLiteral("velXLabel"));

        horizontalLayout_77->addWidget(velXLabel);

        le_Flight_Vx = new QLineEdit(velDisplay);
        le_Flight_Vx->setObjectName(QStringLiteral("le_Flight_Vx"));
        le_Flight_Vx->setReadOnly(true);

        horizontalLayout_77->addWidget(le_Flight_Vx);


        verticalLayout_44->addLayout(horizontalLayout_77);

        horizontalLayout_78 = new QHBoxLayout();
        horizontalLayout_78->setSpacing(6);
        horizontalLayout_78->setObjectName(QStringLiteral("horizontalLayout_78"));
        velYLabel = new QLabel(velDisplay);
        velYLabel->setObjectName(QStringLiteral("velYLabel"));

        horizontalLayout_78->addWidget(velYLabel);

        le_Flight_Vy = new QLineEdit(velDisplay);
        le_Flight_Vy->setObjectName(QStringLiteral("le_Flight_Vy"));
        le_Flight_Vy->setReadOnly(true);

        horizontalLayout_78->addWidget(le_Flight_Vy);


        verticalLayout_44->addLayout(horizontalLayout_78);

        horizontalLayout_79 = new QHBoxLayout();
        horizontalLayout_79->setSpacing(6);
        horizontalLayout_79->setObjectName(QStringLiteral("horizontalLayout_79"));
        velZlabel = new QLabel(velDisplay);
        velZlabel->setObjectName(QStringLiteral("velZlabel"));

        horizontalLayout_79->addWidget(velZlabel);

        le_Flight_Vz = new QLineEdit(velDisplay);
        le_Flight_Vz->setObjectName(QStringLiteral("le_Flight_Vz"));
        le_Flight_Vz->setReadOnly(true);

        horizontalLayout_79->addWidget(le_Flight_Vz);


        verticalLayout_44->addLayout(horizontalLayout_79);

        horizontalLayout_80 = new QHBoxLayout();
        horizontalLayout_80->setSpacing(6);
        horizontalLayout_80->setObjectName(QStringLiteral("horizontalLayout_80"));
        velHealthLabel = new QLabel(velDisplay);
        velHealthLabel->setObjectName(QStringLiteral("velHealthLabel"));

        horizontalLayout_80->addWidget(velHealthLabel);

        le_Flight_VH = new QLineEdit(velDisplay);
        le_Flight_VH->setObjectName(QStringLiteral("le_Flight_VH"));
        le_Flight_VH->setReadOnly(true);

        horizontalLayout_80->addWidget(le_Flight_VH);


        verticalLayout_44->addLayout(horizontalLayout_80);

        horizontalLayout_81 = new QHBoxLayout();
        horizontalLayout_81->setSpacing(6);
        horizontalLayout_81->setObjectName(QStringLiteral("horizontalLayout_81"));
        velSensorLabel = new QLabel(velDisplay);
        velSensorLabel->setObjectName(QStringLiteral("velSensorLabel"));

        horizontalLayout_81->addWidget(velSensorLabel);

        le_Flight_VS = new QLineEdit(velDisplay);
        le_Flight_VS->setObjectName(QStringLiteral("le_Flight_VS"));
        le_Flight_VS->setReadOnly(true);

        horizontalLayout_81->addWidget(le_Flight_VS);


        verticalLayout_44->addLayout(horizontalLayout_81);


        gridLayout_2->addWidget(velDisplay, 1, 1, 1, 1);

        gimbalDisplay = new QGroupBox(broadcastDisplay);
        gimbalDisplay->setObjectName(QStringLiteral("gimbalDisplay"));
        verticalLayout_5 = new QVBoxLayout(gimbalDisplay);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 2, -1, -1);
        splitter = new QSplitter(gimbalDisplay);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        gimbalYawLabel = new QLabel(splitter);
        gimbalYawLabel->setObjectName(QStringLiteral("gimbalYawLabel"));
        splitter->addWidget(gimbalYawLabel);
        le_cameraYaw = new QLineEdit(splitter);
        le_cameraYaw->setObjectName(QStringLiteral("le_cameraYaw"));
        le_cameraYaw->setReadOnly(true);
        splitter->addWidget(le_cameraYaw);

        horizontalLayout_3->addWidget(splitter);

        cb_cameraYawLimit = new QCheckBox(gimbalDisplay);
        cb_cameraYawLimit->setObjectName(QStringLiteral("cb_cameraYawLimit"));
        cb_cameraYawLimit->setCheckable(true);

        horizontalLayout_3->addWidget(cb_cameraYawLimit);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 2, -1, 2);
        splitter_2 = new QSplitter(gimbalDisplay);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        gimbalRollLabel = new QLabel(splitter_2);
        gimbalRollLabel->setObjectName(QStringLiteral("gimbalRollLabel"));
        splitter_2->addWidget(gimbalRollLabel);
        le_cameraRoll = new QLineEdit(splitter_2);
        le_cameraRoll->setObjectName(QStringLiteral("le_cameraRoll"));
        le_cameraRoll->setReadOnly(true);
        splitter_2->addWidget(le_cameraRoll);
        cb_cameraRollLimit = new QCheckBox(splitter_2);
        cb_cameraRollLimit->setObjectName(QStringLiteral("cb_cameraRollLimit"));
        cb_cameraRollLimit->setCheckable(true);
        splitter_2->addWidget(cb_cameraRollLimit);

        verticalLayout_3->addWidget(splitter_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 2, -1, 2);
        splitter_3 = new QSplitter(gimbalDisplay);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        pitchGimbalLabel = new QLabel(splitter_3);
        pitchGimbalLabel->setObjectName(QStringLiteral("pitchGimbalLabel"));
        splitter_3->addWidget(pitchGimbalLabel);
        le_cameraPitch = new QLineEdit(splitter_3);
        le_cameraPitch->setObjectName(QStringLiteral("le_cameraPitch"));
        le_cameraPitch->setReadOnly(true);
        splitter_3->addWidget(le_cameraPitch);
        cb_cameraPitchLimit = new QCheckBox(splitter_3);
        cb_cameraPitchLimit->setObjectName(QStringLiteral("cb_cameraPitchLimit"));
        cb_cameraPitchLimit->setCheckable(true);
        cb_cameraPitchLimit->setChecked(false);
        splitter_3->addWidget(cb_cameraPitchLimit);

        verticalLayout_4->addWidget(splitter_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        gridLayout_2->addWidget(gimbalDisplay, 4, 4, 1, 1);

        posDisplay = new QGroupBox(broadcastDisplay);
        posDisplay->setObjectName(QStringLiteral("posDisplay"));
        posDisplay->setMinimumSize(QSize(172, 180));
        verticalLayout_54 = new QVBoxLayout(posDisplay);
        verticalLayout_54->setSpacing(2);
        verticalLayout_54->setObjectName(QStringLiteral("verticalLayout_54"));
        verticalLayout_54->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_102 = new QHBoxLayout();
        horizontalLayout_102->setSpacing(6);
        horizontalLayout_102->setObjectName(QStringLiteral("horizontalLayout_102"));
        posHeightlabel = new QLabel(posDisplay);
        posHeightlabel->setObjectName(QStringLiteral("posHeightlabel"));

        horizontalLayout_102->addWidget(posHeightlabel);

        le_Flight_PosH = new QLineEdit(posDisplay);
        le_Flight_PosH->setObjectName(QStringLiteral("le_Flight_PosH"));
        le_Flight_PosH->setReadOnly(true);

        horizontalLayout_102->addWidget(le_Flight_PosH);


        verticalLayout_54->addLayout(horizontalLayout_102);

        horizontalLayout_112 = new QHBoxLayout();
        horizontalLayout_112->setSpacing(6);
        horizontalLayout_112->setObjectName(QStringLiteral("horizontalLayout_112"));
        posLatLabel = new QLabel(posDisplay);
        posLatLabel->setObjectName(QStringLiteral("posLatLabel"));

        horizontalLayout_112->addWidget(posLatLabel);

        le_Flight_PosLa = new QLineEdit(posDisplay);
        le_Flight_PosLa->setObjectName(QStringLiteral("le_Flight_PosLa"));
        le_Flight_PosLa->setReadOnly(true);

        horizontalLayout_112->addWidget(le_Flight_PosLa);


        verticalLayout_54->addLayout(horizontalLayout_112);

        horizontalLayout_117 = new QHBoxLayout();
        horizontalLayout_117->setSpacing(6);
        horizontalLayout_117->setObjectName(QStringLiteral("horizontalLayout_117"));
        posLonLabel = new QLabel(posDisplay);
        posLonLabel->setObjectName(QStringLiteral("posLonLabel"));

        horizontalLayout_117->addWidget(posLonLabel);

        le_Flight_PosLo = new QLineEdit(posDisplay);
        le_Flight_PosLo->setObjectName(QStringLiteral("le_Flight_PosLo"));
        le_Flight_PosLo->setReadOnly(true);

        horizontalLayout_117->addWidget(le_Flight_PosLo);


        verticalLayout_54->addLayout(horizontalLayout_117);

        horizontalLayout_119 = new QHBoxLayout();
        horizontalLayout_119->setSpacing(6);
        horizontalLayout_119->setObjectName(QStringLiteral("horizontalLayout_119"));
        posAltLabel = new QLabel(posDisplay);
        posAltLabel->setObjectName(QStringLiteral("posAltLabel"));

        horizontalLayout_119->addWidget(posAltLabel);

        le_Flight_PosAl = new QLineEdit(posDisplay);
        le_Flight_PosAl->setObjectName(QStringLiteral("le_Flight_PosAl"));
        le_Flight_PosAl->setReadOnly(true);

        horizontalLayout_119->addWidget(le_Flight_PosAl);


        verticalLayout_54->addLayout(horizontalLayout_119);

        horizontalLayout_120 = new QHBoxLayout();
        horizontalLayout_120->setSpacing(6);
        horizontalLayout_120->setObjectName(QStringLiteral("horizontalLayout_120"));
        posHealthLabel = new QLabel(posDisplay);
        posHealthLabel->setObjectName(QStringLiteral("posHealthLabel"));

        horizontalLayout_120->addWidget(posHealthLabel);

        le_Flight_PosHealth = new QLineEdit(posDisplay);
        le_Flight_PosHealth->setObjectName(QStringLiteral("le_Flight_PosHealth"));
        le_Flight_PosHealth->setReadOnly(true);

        horizontalLayout_120->addWidget(le_Flight_PosHealth);


        verticalLayout_54->addLayout(horizontalLayout_120);


        gridLayout_2->addWidget(posDisplay, 1, 2, 2, 1);

        groupBox_23 = new QGroupBox(broadcastDisplay);
        groupBox_23->setObjectName(QStringLiteral("groupBox_23"));
        groupBox_23->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(groupBox_23);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(12, 12, 12, 12);
        tsDisplay = new QFrame(groupBox_23);
        tsDisplay->setObjectName(QStringLiteral("tsDisplay"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tsDisplay->sizePolicy().hasHeightForWidth());
        tsDisplay->setSizePolicy(sizePolicy1);
        tsDisplay->setMinimumSize(QSize(0, 71));
        tsDisplay->setFrameShape(QFrame::StyledPanel);
        tsDisplay->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(tsDisplay);
        gridLayout_3->setSpacing(1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, 6);
        label_2 = new QLabel(tsDisplay);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelTsNs_2 = new QLabel(tsDisplay);
        labelTsNs_2->setObjectName(QStringLiteral("labelTsNs_2"));

        horizontalLayout->addWidget(labelTsNs_2);

        le_coreTimeStamp = new QLineEdit(tsDisplay);
        le_coreTimeStamp->setObjectName(QStringLiteral("le_coreTimeStamp"));
        le_coreTimeStamp->setMinimumSize(QSize(0, 23));
        le_coreTimeStamp->setReadOnly(true);

        horizontalLayout->addWidget(le_coreTimeStamp);


        gridLayout_3->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelTsNs = new QLabel(tsDisplay);
        labelTsNs->setObjectName(QStringLiteral("labelTsNs"));

        horizontalLayout_2->addWidget(labelTsNs);

        le_coreNanoStamp = new QLineEdit(tsDisplay);
        le_coreNanoStamp->setObjectName(QStringLiteral("le_coreNanoStamp"));
        le_coreNanoStamp->setMinimumSize(QSize(0, 22));
        le_coreNanoStamp->setReadOnly(true);

        horizontalLayout_2->addWidget(le_coreNanoStamp);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 1, 1, 1);


        verticalLayout->addWidget(tsDisplay);

        horizontalLayout_95 = new QHBoxLayout();
        horizontalLayout_95->setObjectName(QStringLiteral("horizontalLayout_95"));
        label_3 = new QLabel(groupBox_23);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_95->addWidget(label_3);

        le_coreCapacity = new QLineEdit(groupBox_23);
        le_coreCapacity->setObjectName(QStringLiteral("le_coreCapacity"));
        le_coreCapacity->setReadOnly(true);

        horizontalLayout_95->addWidget(le_coreCapacity);


        verticalLayout->addLayout(horizontalLayout_95);

        horizontalLayout_111 = new QHBoxLayout();
        horizontalLayout_111->setObjectName(QStringLiteral("horizontalLayout_111"));
        label_4 = new QLabel(groupBox_23);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_111->addWidget(label_4);

        le_coreFlightStatus = new QLineEdit(groupBox_23);
        le_coreFlightStatus->setObjectName(QStringLiteral("le_coreFlightStatus"));
        le_coreFlightStatus->setReadOnly(true);

        horizontalLayout_111->addWidget(le_coreFlightStatus);


        verticalLayout->addLayout(horizontalLayout_111);

        horizontalLayout_113 = new QHBoxLayout();
        horizontalLayout_113->setObjectName(QStringLiteral("horizontalLayout_113"));
        label_5 = new QLabel(groupBox_23);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_113->addWidget(label_5);

        le_coreControlDevice = new QLineEdit(groupBox_23);
        le_coreControlDevice->setObjectName(QStringLiteral("le_coreControlDevice"));
        le_coreControlDevice->setReadOnly(true);

        horizontalLayout_113->addWidget(le_coreControlDevice);


        verticalLayout->addLayout(horizontalLayout_113);


        gridLayout_2->addWidget(groupBox_23, 3, 0, 2, 2);

        rcDisplay = new QGroupBox(broadcastDisplay);
        rcDisplay->setObjectName(QStringLiteral("rcDisplay"));
        verticalLayout_6 = new QVBoxLayout(rcDisplay);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_103 = new QHBoxLayout();
        horizontalLayout_103->setSpacing(6);
        horizontalLayout_103->setObjectName(QStringLiteral("horizontalLayout_103"));
        label_71 = new QLabel(rcDisplay);
        label_71->setObjectName(QStringLiteral("label_71"));

        horizontalLayout_103->addWidget(label_71);

        le_vrcRoll = new QLineEdit(rcDisplay);
        le_vrcRoll->setObjectName(QStringLiteral("le_vrcRoll"));
        le_vrcRoll->setReadOnly(true);

        horizontalLayout_103->addWidget(le_vrcRoll);


        verticalLayout_6->addLayout(horizontalLayout_103);

        horizontalLayout_105 = new QHBoxLayout();
        horizontalLayout_105->setSpacing(6);
        horizontalLayout_105->setObjectName(QStringLiteral("horizontalLayout_105"));
        label_72 = new QLabel(rcDisplay);
        label_72->setObjectName(QStringLiteral("label_72"));

        horizontalLayout_105->addWidget(label_72);

        le_vrcPitch = new QLineEdit(rcDisplay);
        le_vrcPitch->setObjectName(QStringLiteral("le_vrcPitch"));
        le_vrcPitch->setReadOnly(true);

        horizontalLayout_105->addWidget(le_vrcPitch);


        verticalLayout_6->addLayout(horizontalLayout_105);

        horizontalLayout_97 = new QHBoxLayout();
        horizontalLayout_97->setSpacing(6);
        horizontalLayout_97->setObjectName(QStringLiteral("horizontalLayout_97"));
        label = new QLabel(rcDisplay);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_97->addWidget(label);

        le_vrcYaw = new QLineEdit(rcDisplay);
        le_vrcYaw->setObjectName(QStringLiteral("le_vrcYaw"));
        le_vrcYaw->setReadOnly(true);

        horizontalLayout_97->addWidget(le_vrcYaw);


        verticalLayout_6->addLayout(horizontalLayout_97);

        horizontalLayout_100 = new QHBoxLayout();
        horizontalLayout_100->setSpacing(6);
        horizontalLayout_100->setObjectName(QStringLiteral("horizontalLayout_100"));
        label_69 = new QLabel(rcDisplay);
        label_69->setObjectName(QStringLiteral("label_69"));

        horizontalLayout_100->addWidget(label_69);

        le_vrcThrottle = new QLineEdit(rcDisplay);
        le_vrcThrottle->setObjectName(QStringLiteral("le_vrcThrottle"));
        le_vrcThrottle->setReadOnly(true);

        horizontalLayout_100->addWidget(le_vrcThrottle);


        verticalLayout_6->addLayout(horizontalLayout_100);

        horizontalLayout_98 = new QHBoxLayout();
        horizontalLayout_98->setSpacing(6);
        horizontalLayout_98->setObjectName(QStringLiteral("horizontalLayout_98"));
        label_67 = new QLabel(rcDisplay);
        label_67->setObjectName(QStringLiteral("label_67"));

        horizontalLayout_98->addWidget(label_67);

        le_vrcMode = new QLineEdit(rcDisplay);
        le_vrcMode->setObjectName(QStringLiteral("le_vrcMode"));
        le_vrcMode->setReadOnly(true);

        horizontalLayout_98->addWidget(le_vrcMode);


        verticalLayout_6->addLayout(horizontalLayout_98);

        horizontalLayout_99 = new QHBoxLayout();
        horizontalLayout_99->setSpacing(6);
        horizontalLayout_99->setObjectName(QStringLiteral("horizontalLayout_99"));
        label_68 = new QLabel(rcDisplay);
        label_68->setObjectName(QStringLiteral("label_68"));

        horizontalLayout_99->addWidget(label_68);

        le_vrcGear = new QLineEdit(rcDisplay);
        le_vrcGear->setObjectName(QStringLiteral("le_vrcGear"));
        le_vrcGear->setReadOnly(true);

        horizontalLayout_99->addWidget(le_vrcGear);


        verticalLayout_6->addLayout(horizontalLayout_99);


        gridLayout_2->addWidget(rcDisplay, 3, 2, 2, 1);


        gridLayout->addWidget(broadcastDisplay, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_4->addWidget(scrollArea);


        retranslateUi(Broadcast);

        comboBoxTs->setCurrentIndex(0);
        comboBoxQ->setCurrentIndex(0);
        comboBoxAcc->setCurrentIndex(0);
        comboBoxVel->setCurrentIndex(0);
        comboBoxW->setCurrentIndex(0);
        comboBoxPos->setCurrentIndex(0);
        comboBoxMag->setCurrentIndex(0);
        comboBoxRC->setCurrentIndex(0);
        comboBoxGimbal->setCurrentIndex(0);
        comboBoxStatus->setCurrentIndex(0);
        comboBoxBat->setCurrentIndex(0);
        comboBoxCtrlInfo->setCurrentIndex(0);
        comboBoxRTK->setCurrentIndex(0);
        comboBoxGPS->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Broadcast);
    } // setupUi

    void retranslateUi(QWidget *Broadcast)
    {
        Broadcast->setWindowTitle(QApplication::translate("Broadcast", "Form", nullptr));
        gb_CoreData->setTitle(QApplication::translate("Broadcast", "Broadcast Data Freq", nullptr));
        pushButtonBroadcastFreqSet->setText(QApplication::translate("Broadcast", "Set", nullptr));
        labelTs->setText(QApplication::translate("Broadcast", "Time stamp", nullptr));
        comboBoxTs->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxTs->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxTs->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxTs->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxTs->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxTs->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxTs->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxTs->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxTs->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelQ->setText(QApplication::translate("Broadcast", "Quaternion", nullptr));
        comboBoxQ->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxQ->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxQ->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxQ->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxQ->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxQ->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxQ->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxQ->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxQ->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelAcc->setText(QApplication::translate("Broadcast", "Acceleration", nullptr));
        comboBoxAcc->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxAcc->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxAcc->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxAcc->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxAcc->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxAcc->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxAcc->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxAcc->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxAcc->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelVel->setText(QApplication::translate("Broadcast", "Velocity", nullptr));
        comboBoxVel->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxVel->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxVel->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxVel->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxVel->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxVel->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxVel->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxVel->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxVel->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelW->setText(QApplication::translate("Broadcast", "Angular Rate", nullptr));
        comboBoxW->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxW->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxW->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxW->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxW->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxW->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxW->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxW->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxW->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelPos->setText(QApplication::translate("Broadcast", "Position", nullptr));
        comboBoxPos->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxPos->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxPos->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxPos->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxPos->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxPos->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxPos->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxPos->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxPos->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelMag->setText(QApplication::translate("Broadcast", "Magnetometer", nullptr));
        comboBoxMag->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxMag->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxMag->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxMag->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxMag->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxMag->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxMag->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxMag->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxMag->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelRC->setText(QApplication::translate("Broadcast", "Radio Control", nullptr));
        comboBoxRC->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxRC->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxRC->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxRC->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxRC->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxRC->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxRC->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxRC->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxRC->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelGimbal->setText(QApplication::translate("Broadcast", "Gimbal", nullptr));
        comboBoxGimbal->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxGimbal->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxGimbal->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxGimbal->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxGimbal->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxGimbal->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxGimbal->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxGimbal->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxGimbal->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelStatus->setText(QApplication::translate("Broadcast", "Status", nullptr));
        comboBoxStatus->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxStatus->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxStatus->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxStatus->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxStatus->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxStatus->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxStatus->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxStatus->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxStatus->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelBat->setText(QApplication::translate("Broadcast", "Battery", nullptr));
        comboBoxBat->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxBat->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxBat->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxBat->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxBat->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxBat->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxBat->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxBat->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxBat->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelCtrlInfo->setText(QApplication::translate("Broadcast", "Control Info", nullptr));
        comboBoxCtrlInfo->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxCtrlInfo->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxCtrlInfo->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxCtrlInfo->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxCtrlInfo->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxCtrlInfo->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxCtrlInfo->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxCtrlInfo->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxCtrlInfo->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelRTK->setText(QApplication::translate("Broadcast", "RTK", nullptr));
        comboBoxRTK->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxRTK->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxRTK->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxRTK->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxRTK->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxRTK->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxRTK->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxRTK->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxRTK->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        labelGPS->setText(QApplication::translate("Broadcast", "GPS Detail", nullptr));
        comboBoxGPS->setItemText(0, QApplication::translate("Broadcast", "0Hz", nullptr));
        comboBoxGPS->setItemText(1, QApplication::translate("Broadcast", "1Hz", nullptr));
        comboBoxGPS->setItemText(2, QApplication::translate("Broadcast", "10Hz", nullptr));
        comboBoxGPS->setItemText(3, QApplication::translate("Broadcast", "50Hz", nullptr));
        comboBoxGPS->setItemText(4, QApplication::translate("Broadcast", "100Hz", nullptr));
        comboBoxGPS->setItemText(5, QApplication::translate("Broadcast", "Hold", nullptr));
        comboBoxGPS->setItemText(6, QApplication::translate("Broadcast", "200Hz", nullptr));
        comboBoxGPS->setItemText(7, QApplication::translate("Broadcast", "400Hz", nullptr));

        comboBoxGPS->setCurrentText(QApplication::translate("Broadcast", "0Hz", nullptr));
        broadcastDisplay->setTitle(QApplication::translate("Broadcast", "Flight Broadcast Data", nullptr));
        gpsDisplay->setTitle(QApplication::translate("Broadcast", "GPS Detail", nullptr));
        label_gps_date->setText(QApplication::translate("Broadcast", "date", nullptr));
        le_gps_date->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_84->setText(QApplication::translate("Broadcast", "time", nullptr));
        le_gps_time->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_85->setText(QApplication::translate("Broadcast", "Lon", nullptr));
        le_gps_longitude->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_86->setText(QApplication::translate("Broadcast", "Lat", nullptr));
        le_gps_latitude->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_87->setText(QApplication::translate("Broadcast", "HMSL", nullptr));
        le_gps_hmsl->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_88->setText(QApplication::translate("Broadcast", "VN", nullptr));
        le_gps_VN->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_89->setText(QApplication::translate("Broadcast", "VE", nullptr));
        le_gps_VE->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_90->setText(QApplication::translate("Broadcast", "VD", nullptr));
        le_gps_VD->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_98->setText(QApplication::translate("Broadcast", "Hdop", nullptr));
        le_gps_hdop->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_99->setText(QApplication::translate("Broadcast", "Pdop", nullptr));
        le_gps_pdop->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_100->setText(QApplication::translate("Broadcast", "<html><head/><body><p>GNSSFlag</p></body></html>", nullptr));
        le_gps_GNSSFlag->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_101->setText(QApplication::translate("Broadcast", "GLNNFix ", nullptr));
        le_gps_gnssFix->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_102->setText(QApplication::translate("Broadcast", "Hacc", nullptr));
        le_gps_hacc->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_103->setText(QApplication::translate("Broadcast", "Sacc", nullptr));
        le_gps_sacc->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_104->setText(QApplication::translate("Broadcast", "GPSUsed", nullptr));
        le_gps_guse->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_204->setText(QApplication::translate("Broadcast", "GNSSUsed", nullptr));
        le_gps_gnuse->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_205->setText(QApplication::translate("Broadcast", "SVN", nullptr));
        le_gps_svn->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_206->setText(QApplication::translate("Broadcast", "GPSStatus", nullptr));
        le_gps_gps->setText(QApplication::translate("Broadcast", "0", nullptr));
        accDisplay->setTitle(QApplication::translate("Broadcast", "Acceleration", nullptr));
        accXlabel->setText(QApplication::translate("Broadcast", "X", nullptr));
        le_Flight_accx->setText(QApplication::translate("Broadcast", "0", nullptr));
        accYLabel->setText(QApplication::translate("Broadcast", "Y", nullptr));
        le_Flight_accy->setText(QApplication::translate("Broadcast", "0", nullptr));
        accZLabel->setText(QApplication::translate("Broadcast", "Z", nullptr));
        le_Flight_accz->setText(QApplication::translate("Broadcast", "0", nullptr));
        wDisplay->setTitle(QApplication::translate("Broadcast", "Angular Rate", nullptr));
        wXLabel->setText(QApplication::translate("Broadcast", "X", nullptr));
        le_Flight_palx->setText(QApplication::translate("Broadcast", "0", nullptr));
        wYlabel->setText(QApplication::translate("Broadcast", "Y", nullptr));
        le_Flight_paly->setText(QApplication::translate("Broadcast", "0", nullptr));
        wZlabel->setText(QApplication::translate("Broadcast", "Z", nullptr));
        le_Flight_palz->setText(QApplication::translate("Broadcast", "0", nullptr));
        magDisplay->setTitle(QApplication::translate("Broadcast", "Magnetometer", nullptr));
        magXLabel->setText(QApplication::translate("Broadcast", "X", nullptr));
        le_Flight_magx->setText(QApplication::translate("Broadcast", "0", nullptr));
        magYLabel->setText(QApplication::translate("Broadcast", "Y", nullptr));
        le_Flight_magy->setText(QApplication::translate("Broadcast", "0", nullptr));
        magZLabel->setText(QApplication::translate("Broadcast", "Z", nullptr));
        le_Flight_magz->setText(QApplication::translate("Broadcast", "0", nullptr));
        rtkDisplay->setTitle(QApplication::translate("Broadcast", "RTK", nullptr));
        label_6->setText(QApplication::translate("Broadcast", "date", nullptr));
        le_rtk_date->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_207->setText(QApplication::translate("Broadcast", "time", nullptr));
        le_rtk_time->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_208->setText(QApplication::translate("Broadcast", "Lon", nullptr));
        le_rtk_longitude->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_209->setText(QApplication::translate("Broadcast", "Lat", nullptr));
        le_rtk_latitude->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_210->setText(QApplication::translate("Broadcast", "HMSL", nullptr));
        le_rtk_hmsl->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_211->setText(QApplication::translate("Broadcast", "VN", nullptr));
        le_rtk_VN->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_212->setText(QApplication::translate("Broadcast", "VE", nullptr));
        le_rtk_VE->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_213->setText(QApplication::translate("Broadcast", "VD", nullptr));
        le_rtk_VD->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_214->setText(QApplication::translate("Broadcast", "yaw", nullptr));
        le_rtk_yaw->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_219->setText(QApplication::translate("Broadcast", "posFlag", nullptr));
        le_rtk_flag_1->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_220->setText(QApplication::translate("Broadcast", "yawFlag", nullptr));
        le_rtk_flag_2->setText(QApplication::translate("Broadcast", "0", nullptr));
        qDisplay->setTitle(QApplication::translate("Broadcast", "Quaternion", nullptr));
        q0Label->setText(QApplication::translate("Broadcast", "Q0", nullptr));
        le_Flight_Q0->setText(QApplication::translate("Broadcast", "0", nullptr));
        q1Label->setText(QApplication::translate("Broadcast", "Q1", nullptr));
        le_Flight_Q1->setText(QApplication::translate("Broadcast", "0", nullptr));
        q2Label->setText(QApplication::translate("Broadcast", "Q2", nullptr));
        le_Flight_Q2->setText(QApplication::translate("Broadcast", "0", nullptr));
        q3Label->setText(QApplication::translate("Broadcast", "Q3", nullptr));
        le_Flight_Q3->setText(QApplication::translate("Broadcast", "0", nullptr));
        velDisplay->setTitle(QApplication::translate("Broadcast", "Velocity", nullptr));
        velXLabel->setText(QApplication::translate("Broadcast", "X", nullptr));
        le_Flight_Vx->setText(QApplication::translate("Broadcast", "0", nullptr));
        velYLabel->setText(QApplication::translate("Broadcast", "Y", nullptr));
        le_Flight_Vy->setText(QApplication::translate("Broadcast", "0", nullptr));
        velZlabel->setText(QApplication::translate("Broadcast", "Z", nullptr));
        le_Flight_Vz->setText(QApplication::translate("Broadcast", "0", nullptr));
        velHealthLabel->setText(QApplication::translate("Broadcast", "Health", nullptr));
        le_Flight_VH->setText(QApplication::translate("Broadcast", "0", nullptr));
        velSensorLabel->setText(QApplication::translate("Broadcast", "Sensor", nullptr));
        le_Flight_VS->setText(QApplication::translate("Broadcast", "0", nullptr));
        gimbalDisplay->setTitle(QApplication::translate("Broadcast", "Gimbal Position", nullptr));
        gimbalYawLabel->setText(QApplication::translate("Broadcast", "Yaw", nullptr));
        le_cameraYaw->setText(QApplication::translate("Broadcast", "0", nullptr));
        cb_cameraYawLimit->setText(QApplication::translate("Broadcast", "At Limit", nullptr));
        gimbalRollLabel->setText(QApplication::translate("Broadcast", "Roll", nullptr));
        le_cameraRoll->setText(QApplication::translate("Broadcast", "0", nullptr));
        cb_cameraRollLimit->setText(QApplication::translate("Broadcast", "At Limit", nullptr));
        pitchGimbalLabel->setText(QApplication::translate("Broadcast", "Pitch", nullptr));
        le_cameraPitch->setText(QApplication::translate("Broadcast", "0", nullptr));
        cb_cameraPitchLimit->setText(QApplication::translate("Broadcast", "At Limit", nullptr));
        posDisplay->setTitle(QApplication::translate("Broadcast", "Position", nullptr));
        posHeightlabel->setText(QApplication::translate("Broadcast", "Height", nullptr));
        le_Flight_PosH->setText(QApplication::translate("Broadcast", "0", nullptr));
        posLatLabel->setText(QApplication::translate("Broadcast", "Lat", nullptr));
        le_Flight_PosLa->setText(QApplication::translate("Broadcast", "0", nullptr));
        posLonLabel->setText(QApplication::translate("Broadcast", "Lon", nullptr));
        le_Flight_PosLo->setText(QApplication::translate("Broadcast", "0", nullptr));
        posAltLabel->setText(QApplication::translate("Broadcast", "Alt", nullptr));
        le_Flight_PosAl->setText(QApplication::translate("Broadcast", "0", nullptr));
        posHealthLabel->setText(QApplication::translate("Broadcast", "Health", nullptr));
        le_Flight_PosHealth->setText(QApplication::translate("Broadcast", "0", nullptr));
        groupBox_23->setTitle(QApplication::translate("Broadcast", "CoreStatus", nullptr));
        label_2->setText(QApplication::translate("Broadcast", "Ts", nullptr));
        labelTsNs_2->setText(QApplication::translate("Broadcast", "sec", nullptr));
        le_coreTimeStamp->setText(QApplication::translate("Broadcast", "0", nullptr));
        labelTsNs->setText(QApplication::translate("Broadcast", "nsec", nullptr));
        le_coreNanoStamp->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_3->setText(QApplication::translate("Broadcast", "Battery", nullptr));
        le_coreCapacity->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_4->setText(QApplication::translate("Broadcast", "Flight Status", nullptr));
        le_coreFlightStatus->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_5->setText(QApplication::translate("Broadcast", "Control Device", nullptr));
        le_coreControlDevice->setText(QApplication::translate("Broadcast", "0", nullptr));
        rcDisplay->setTitle(QApplication::translate("Broadcast", "RC Data", nullptr));
        label_71->setText(QApplication::translate("Broadcast", "Roll", nullptr));
        le_vrcRoll->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_72->setText(QApplication::translate("Broadcast", "Pitch", nullptr));
        le_vrcPitch->setText(QApplication::translate("Broadcast", "0", nullptr));
        label->setText(QApplication::translate("Broadcast", "Yaw", nullptr));
        le_vrcYaw->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_69->setText(QApplication::translate("Broadcast", "Thr", nullptr));
        le_vrcThrottle->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_67->setText(QApplication::translate("Broadcast", "Mode", nullptr));
        le_vrcMode->setText(QApplication::translate("Broadcast", "0", nullptr));
        label_68->setText(QApplication::translate("Broadcast", "Gear", nullptr));
        le_vrcGear->setText(QApplication::translate("Broadcast", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Broadcast: public Ui_Broadcast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROADCAST_H
