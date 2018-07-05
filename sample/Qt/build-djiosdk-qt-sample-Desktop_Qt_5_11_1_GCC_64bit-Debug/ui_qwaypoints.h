/********************************************************************************
** Form generated from reading UI file 'qwaypoints.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWAYPOINTS_H
#define UI_QWAYPOINTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MissionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *Waypoints;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *gb_wp;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_7;
    QPushButton *btn_waypoint_add;
    QPushButton *btn_waypoint_remove;
    QPushButton *btn_waypoint_reset;
    QPushButton *btn_waypointDownload;
    QTabWidget *tabWidget_2;
    QWidget *WyapointData;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tv_waypoint_data;
    QWidget *PointActions;
    QHBoxLayout *horizontalLayout_47;
    QVBoxLayout *verticalLayout_60;
    QHBoxLayout *horizontalLayout_62;
    QLabel *label_27;
    QComboBox *cb_waypoint_point;
    QPushButton *btn_waypoint_action;
    QPushButton *btn_waypoint_removeAction;
    QPushButton *btn_wp_loadOne;
    QTableView *tv_waypoint_actions;
    QGroupBox *groupBox_256;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_59;
    QLabel *label_44;
    QLineEdit *le_wp_iv;
    QPushButton *btn_wp_ivset;
    QPushButton *btn_wp_ivRead;
    QHBoxLayout *horizontalLayout_122;
    QLabel *label_43;
    QLineEdit *le_wp_mv;
    QHBoxLayout *horizontalLayout_128;
    QLabel *label_46;
    QComboBox *cb_wp_rcl;
    QHBoxLayout *horizontalLayout_121;
    QLabel *label_28;
    QLineEdit *le_waypoint_number;
    QHBoxLayout *horizontalLayout_129;
    QLabel *label_52;
    QComboBox *cb_wp_gb;
    QHBoxLayout *horizontalLayout_135;
    QLabel *label_78;
    QLineEdit *le_wp_exec;
    QHBoxLayout *horizontalLayout_131;
    QLabel *label_76;
    QComboBox *cb_wp_mov;
    QFrame *frame50;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_134;
    QLabel *label_77;
    QComboBox *cb_wp_fa;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_75;
    QComboBox *cb_wp_yaw;
    QFrame *frame51;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_66;
    QLineEdit *le_wp_la;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_74;
    QLineEdit *le_wp_lo;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_63;
    QLineEdit *le_wp_al;
    QPushButton *btn_waypoint_viewPoint;
    QVBoxLayout *verticalLayout_9;
    QPushButton *btn_waypoint_init;
    QPushButton *btn_wp_loadAll;
    QPushButton *btn_wp_start_stop;
    QPushButton *btn_AbortWaypoint;
    QPushButton *btn_wp_pr;

    void setupUi(QWidget *MissionWidget)
    {
        if (MissionWidget->objectName().isEmpty())
            MissionWidget->setObjectName(QStringLiteral("MissionWidget"));
        MissionWidget->resize(1275, 779);
        verticalLayout = new QVBoxLayout(MissionWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(MissionWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        Waypoints = new QWidget();
        Waypoints->setObjectName(QStringLiteral("Waypoints"));
        gridLayout_3 = new QGridLayout(Waypoints);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        scrollArea = new QScrollArea(Waypoints);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1197, 654));
        horizontalLayout_8 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        gb_wp = new QGroupBox(scrollAreaWidgetContents);
        gb_wp->setObjectName(QStringLiteral("gb_wp"));
        gb_wp->setEnabled(true);
        gb_wp->setMinimumSize(QSize(1161, 618));
        gridLayout_2 = new QGridLayout(gb_wp);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(12, 12, 12, 12);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(4);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        btn_waypoint_add = new QPushButton(gb_wp);
        btn_waypoint_add->setObjectName(QStringLiteral("btn_waypoint_add"));

        verticalLayout_7->addWidget(btn_waypoint_add);

        btn_waypoint_remove = new QPushButton(gb_wp);
        btn_waypoint_remove->setObjectName(QStringLiteral("btn_waypoint_remove"));
        btn_waypoint_remove->setEnabled(true);

        verticalLayout_7->addWidget(btn_waypoint_remove);

        btn_waypoint_reset = new QPushButton(gb_wp);
        btn_waypoint_reset->setObjectName(QStringLiteral("btn_waypoint_reset"));
        btn_waypoint_reset->setEnabled(false);

        verticalLayout_7->addWidget(btn_waypoint_reset);

        btn_waypointDownload = new QPushButton(gb_wp);
        btn_waypointDownload->setObjectName(QStringLiteral("btn_waypointDownload"));
        btn_waypointDownload->setEnabled(false);
        btn_waypointDownload->setMinimumSize(QSize(150, 0));
        btn_waypointDownload->setMaximumSize(QSize(500, 16777215));

        verticalLayout_7->addWidget(btn_waypointDownload);


        gridLayout_2->addLayout(verticalLayout_7, 0, 0, 1, 1);

        tabWidget_2 = new QTabWidget(gb_wp);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        WyapointData = new QWidget();
        WyapointData->setObjectName(QStringLiteral("WyapointData"));
        horizontalLayout_3 = new QHBoxLayout(WyapointData);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tv_waypoint_data = new QTableView(WyapointData);
        tv_waypoint_data->setObjectName(QStringLiteral("tv_waypoint_data"));
        tv_waypoint_data->setSortingEnabled(false);

        horizontalLayout_3->addWidget(tv_waypoint_data);

        tabWidget_2->addTab(WyapointData, QString());
        PointActions = new QWidget();
        PointActions->setObjectName(QStringLiteral("PointActions"));
        horizontalLayout_47 = new QHBoxLayout(PointActions);
        horizontalLayout_47->setObjectName(QStringLiteral("horizontalLayout_47"));
        verticalLayout_60 = new QVBoxLayout();
        verticalLayout_60->setSpacing(2);
        verticalLayout_60->setObjectName(QStringLiteral("verticalLayout_60"));
        horizontalLayout_62 = new QHBoxLayout();
        horizontalLayout_62->setObjectName(QStringLiteral("horizontalLayout_62"));
        label_27 = new QLabel(PointActions);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_62->addWidget(label_27);

        cb_waypoint_point = new QComboBox(PointActions);
        cb_waypoint_point->setObjectName(QStringLiteral("cb_waypoint_point"));

        horizontalLayout_62->addWidget(cb_waypoint_point);


        verticalLayout_60->addLayout(horizontalLayout_62);

        btn_waypoint_action = new QPushButton(PointActions);
        btn_waypoint_action->setObjectName(QStringLiteral("btn_waypoint_action"));

        verticalLayout_60->addWidget(btn_waypoint_action);

        btn_waypoint_removeAction = new QPushButton(PointActions);
        btn_waypoint_removeAction->setObjectName(QStringLiteral("btn_waypoint_removeAction"));
        btn_waypoint_removeAction->setEnabled(false);

        verticalLayout_60->addWidget(btn_waypoint_removeAction);

        btn_wp_loadOne = new QPushButton(PointActions);
        btn_wp_loadOne->setObjectName(QStringLiteral("btn_wp_loadOne"));

        verticalLayout_60->addWidget(btn_wp_loadOne);


        horizontalLayout_47->addLayout(verticalLayout_60);

        tv_waypoint_actions = new QTableView(PointActions);
        tv_waypoint_actions->setObjectName(QStringLiteral("tv_waypoint_actions"));

        horizontalLayout_47->addWidget(tv_waypoint_actions);

        tabWidget_2->addTab(PointActions, QString());

        gridLayout_2->addWidget(tabWidget_2, 0, 1, 1, 1);

        groupBox_256 = new QGroupBox(gb_wp);
        groupBox_256->setObjectName(QStringLiteral("groupBox_256"));
        groupBox_256->setMinimumSize(QSize(180, 287));
        horizontalLayout_2 = new QHBoxLayout(groupBox_256);
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(12, 12, 12, 12);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_59 = new QHBoxLayout();
        horizontalLayout_59->setObjectName(QStringLiteral("horizontalLayout_59"));
        label_44 = new QLabel(groupBox_256);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setMinimumSize(QSize(0, 0));
        label_44->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_59->addWidget(label_44);

        le_wp_iv = new QLineEdit(groupBox_256);
        le_wp_iv->setObjectName(QStringLiteral("le_wp_iv"));
        le_wp_iv->setMinimumSize(QSize(50, 0));
        le_wp_iv->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_59->addWidget(le_wp_iv);


        horizontalLayout->addLayout(horizontalLayout_59);

        btn_wp_ivset = new QPushButton(groupBox_256);
        btn_wp_ivset->setObjectName(QStringLiteral("btn_wp_ivset"));
        btn_wp_ivset->setMinimumSize(QSize(80, 0));
        btn_wp_ivset->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(btn_wp_ivset);

        btn_wp_ivRead = new QPushButton(groupBox_256);
        btn_wp_ivRead->setObjectName(QStringLiteral("btn_wp_ivRead"));
        btn_wp_ivRead->setMinimumSize(QSize(80, 0));
        btn_wp_ivRead->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(btn_wp_ivRead);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_122 = new QHBoxLayout();
        horizontalLayout_122->setObjectName(QStringLiteral("horizontalLayout_122"));
        label_43 = new QLabel(groupBox_256);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setMinimumSize(QSize(147, 0));
        label_43->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_122->addWidget(label_43);

        le_wp_mv = new QLineEdit(groupBox_256);
        le_wp_mv->setObjectName(QStringLiteral("le_wp_mv"));
        le_wp_mv->setMinimumSize(QSize(50, 0));
        le_wp_mv->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_122->addWidget(le_wp_mv);


        gridLayout->addLayout(horizontalLayout_122, 1, 0, 1, 1);

        horizontalLayout_128 = new QHBoxLayout();
        horizontalLayout_128->setSpacing(6);
        horizontalLayout_128->setObjectName(QStringLiteral("horizontalLayout_128"));
        label_46 = new QLabel(groupBox_256);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setMinimumSize(QSize(79, 0));
        label_46->setMaximumSize(QSize(16777215, 25));
        label_46->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_128->addWidget(label_46);

        cb_wp_rcl = new QComboBox(groupBox_256);
        cb_wp_rcl->addItem(QString());
        cb_wp_rcl->addItem(QString());
        cb_wp_rcl->setObjectName(QStringLiteral("cb_wp_rcl"));
        cb_wp_rcl->setMinimumSize(QSize(168, 0));

        horizontalLayout_128->addWidget(cb_wp_rcl);


        gridLayout->addLayout(horizontalLayout_128, 1, 1, 1, 1);

        horizontalLayout_121 = new QHBoxLayout();
        horizontalLayout_121->setObjectName(QStringLiteral("horizontalLayout_121"));
        label_28 = new QLabel(groupBox_256);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_121->addWidget(label_28);

        le_waypoint_number = new QLineEdit(groupBox_256);
        le_waypoint_number->setObjectName(QStringLiteral("le_waypoint_number"));
        le_waypoint_number->setMinimumSize(QSize(50, 0));
        le_waypoint_number->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_121->addWidget(le_waypoint_number);


        gridLayout->addLayout(horizontalLayout_121, 2, 0, 1, 1);

        horizontalLayout_129 = new QHBoxLayout();
        horizontalLayout_129->setObjectName(QStringLiteral("horizontalLayout_129"));
        label_52 = new QLabel(groupBox_256);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setMaximumSize(QSize(16777215, 25));
        label_52->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_129->addWidget(label_52);

        cb_wp_gb = new QComboBox(groupBox_256);
        cb_wp_gb->addItem(QString());
        cb_wp_gb->addItem(QString());
        cb_wp_gb->setObjectName(QStringLiteral("cb_wp_gb"));
        cb_wp_gb->setMinimumSize(QSize(100, 0));
        cb_wp_gb->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_129->addWidget(cb_wp_gb);


        gridLayout->addLayout(horizontalLayout_129, 2, 1, 1, 1);

        horizontalLayout_135 = new QHBoxLayout();
        horizontalLayout_135->setObjectName(QStringLiteral("horizontalLayout_135"));
        label_78 = new QLabel(groupBox_256);
        label_78->setObjectName(QStringLiteral("label_78"));
        label_78->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_135->addWidget(label_78);

        le_wp_exec = new QLineEdit(groupBox_256);
        le_wp_exec->setObjectName(QStringLiteral("le_wp_exec"));
        le_wp_exec->setMinimumSize(QSize(50, 0));
        le_wp_exec->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_135->addWidget(le_wp_exec);


        gridLayout->addLayout(horizontalLayout_135, 3, 0, 1, 1);

        horizontalLayout_131 = new QHBoxLayout();
        horizontalLayout_131->setObjectName(QStringLiteral("horizontalLayout_131"));
        label_76 = new QLabel(groupBox_256);
        label_76->setObjectName(QStringLiteral("label_76"));
        label_76->setMaximumSize(QSize(16777215, 25));
        label_76->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_131->addWidget(label_76);

        cb_wp_mov = new QComboBox(groupBox_256);
        cb_wp_mov->addItem(QString());
        cb_wp_mov->addItem(QString());
        cb_wp_mov->setObjectName(QStringLiteral("cb_wp_mov"));
        cb_wp_mov->setEnabled(false);
        cb_wp_mov->setMinimumSize(QSize(100, 0));
        cb_wp_mov->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_131->addWidget(cb_wp_mov);


        gridLayout->addLayout(horizontalLayout_131, 3, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        frame50 = new QFrame(groupBox_256);
        frame50->setObjectName(QStringLiteral("frame50"));
        frame50->setMinimumSize(QSize(251, 0));
        verticalLayout_2 = new QVBoxLayout(frame50);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_134 = new QHBoxLayout();
        horizontalLayout_134->setSpacing(0);
        horizontalLayout_134->setObjectName(QStringLiteral("horizontalLayout_134"));
        label_77 = new QLabel(frame50);
        label_77->setObjectName(QStringLiteral("label_77"));
        label_77->setMaximumSize(QSize(16777215, 25));
        label_77->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_134->addWidget(label_77);

        cb_wp_fa = new QComboBox(frame50);
        cb_wp_fa->addItem(QString());
        cb_wp_fa->addItem(QString());
        cb_wp_fa->addItem(QString());
        cb_wp_fa->addItem(QString());
        cb_wp_fa->setObjectName(QStringLiteral("cb_wp_fa"));
        cb_wp_fa->setMinimumSize(QSize(80, 0));

        horizontalLayout_134->addWidget(cb_wp_fa);


        verticalLayout_2->addLayout(horizontalLayout_134);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_75 = new QLabel(frame50);
        label_75->setObjectName(QStringLiteral("label_75"));
        label_75->setMaximumSize(QSize(16777215, 25));
        label_75->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_75);

        cb_wp_yaw = new QComboBox(frame50);
        cb_wp_yaw->addItem(QString());
        cb_wp_yaw->addItem(QString());
        cb_wp_yaw->addItem(QString());
        cb_wp_yaw->addItem(QString());
        cb_wp_yaw->setObjectName(QStringLiteral("cb_wp_yaw"));
        cb_wp_yaw->setMinimumSize(QSize(80, 0));
        cb_wp_yaw->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(cb_wp_yaw);


        verticalLayout_2->addLayout(horizontalLayout_4);

        frame51 = new QFrame(frame50);
        frame51->setObjectName(QStringLiteral("frame51"));
        frame51->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(frame51);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(48);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_66 = new QLabel(frame51);
        label_66->setObjectName(QStringLiteral("label_66"));
        label_66->setMaximumSize(QSize(100, 16777215));
        label_66->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_66);

        le_wp_la = new QLineEdit(frame51);
        le_wp_la->setObjectName(QStringLiteral("le_wp_la"));
        le_wp_la->setEnabled(false);
        le_wp_la->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_5->addWidget(le_wp_la);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(48);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_74 = new QLabel(frame51);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setMaximumSize(QSize(100, 16777215));
        label_74->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_74);

        le_wp_lo = new QLineEdit(frame51);
        le_wp_lo->setObjectName(QStringLiteral("le_wp_lo"));
        le_wp_lo->setEnabled(false);
        le_wp_lo->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_6->addWidget(le_wp_lo);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(48);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_63 = new QLabel(frame51);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setMaximumSize(QSize(100, 16777215));
        label_63->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_63);

        le_wp_al = new QLineEdit(frame51);
        le_wp_al->setObjectName(QStringLiteral("le_wp_al"));
        le_wp_al->setEnabled(false);
        le_wp_al->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_7->addWidget(le_wp_al);


        verticalLayout_3->addLayout(horizontalLayout_7);

        btn_waypoint_viewPoint = new QPushButton(frame51);
        btn_waypoint_viewPoint->setObjectName(QStringLiteral("btn_waypoint_viewPoint"));
        btn_waypoint_viewPoint->setMinimumSize(QSize(150, 0));

        verticalLayout_3->addWidget(btn_waypoint_viewPoint);


        verticalLayout_2->addWidget(frame51);


        horizontalLayout_2->addWidget(frame50);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(2);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        btn_waypoint_init = new QPushButton(groupBox_256);
        btn_waypoint_init->setObjectName(QStringLiteral("btn_waypoint_init"));
        btn_waypoint_init->setMinimumSize(QSize(150, 0));

        verticalLayout_9->addWidget(btn_waypoint_init);

        btn_wp_loadAll = new QPushButton(groupBox_256);
        btn_wp_loadAll->setObjectName(QStringLiteral("btn_wp_loadAll"));

        verticalLayout_9->addWidget(btn_wp_loadAll);

        btn_wp_start_stop = new QPushButton(groupBox_256);
        btn_wp_start_stop->setObjectName(QStringLiteral("btn_wp_start_stop"));
        btn_wp_start_stop->setCheckable(true);

        verticalLayout_9->addWidget(btn_wp_start_stop);

        btn_AbortWaypoint = new QPushButton(groupBox_256);
        btn_AbortWaypoint->setObjectName(QStringLiteral("btn_AbortWaypoint"));

        verticalLayout_9->addWidget(btn_AbortWaypoint);

        btn_wp_pr = new QPushButton(groupBox_256);
        btn_wp_pr->setObjectName(QStringLiteral("btn_wp_pr"));
        btn_wp_pr->setCheckable(true);

        verticalLayout_9->addWidget(btn_wp_pr);


        horizontalLayout_2->addLayout(verticalLayout_9);


        gridLayout_2->addWidget(groupBox_256, 1, 0, 1, 2);


        horizontalLayout_8->addWidget(gb_wp);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);

        tabWidget->addTab(Waypoints, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(MissionWidget);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MissionWidget);
    } // setupUi

    void retranslateUi(QWidget *MissionWidget)
    {
        MissionWidget->setWindowTitle(QApplication::translate("MissionWidget", "Form", nullptr));
        gb_wp->setTitle(QApplication::translate("MissionWidget", "Waypoint Setting", nullptr));
        btn_waypoint_add->setText(QApplication::translate("MissionWidget", "#1: \n"
"Add Waypoint", nullptr));
        btn_waypoint_remove->setText(QApplication::translate("MissionWidget", "#1 Remove \n"
"Last Waypoint", nullptr));
        btn_waypoint_reset->setText(QApplication::translate("MissionWidget", "Reset", nullptr));
        btn_waypointDownload->setText(QApplication::translate("MissionWidget", "Download", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(WyapointData), QApplication::translate("MissionWidget", "Waypoint Data", nullptr));
        label_27->setText(QApplication::translate("MissionWidget", "Point", nullptr));
        btn_waypoint_action->setText(QApplication::translate("MissionWidget", "Add action", nullptr));
        btn_waypoint_removeAction->setText(QApplication::translate("MissionWidget", "Remove action", nullptr));
        btn_wp_loadOne->setText(QApplication::translate("MissionWidget", "Load This", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(PointActions), QApplication::translate("MissionWidget", "Point Actions", nullptr));
        groupBox_256->setTitle(QApplication::translate("MissionWidget", "Mission Parameters", nullptr));
        label_44->setText(QApplication::translate("MissionWidget", "Idle velocity", nullptr));
        le_wp_iv->setText(QApplication::translate("MissionWidget", "3", nullptr));
        btn_wp_ivset->setText(QApplication::translate("MissionWidget", "Set", nullptr));
        btn_wp_ivRead->setText(QApplication::translate("MissionWidget", "Read", nullptr));
        label_43->setText(QApplication::translate("MissionWidget", "Max velocity", nullptr));
        le_wp_mv->setText(QApplication::translate("MissionWidget", "15", nullptr));
        label_46->setText(QApplication::translate("MissionWidget", "RC lost", nullptr));
        cb_wp_rcl->setItemText(0, QApplication::translate("MissionWidget", "Quit mission", nullptr));
        cb_wp_rcl->setItemText(1, QApplication::translate("MissionWidget", "Keep going", nullptr));

        label_28->setText(QApplication::translate("MissionWidget", "Index number", nullptr));
        le_waypoint_number->setText(QApplication::translate("MissionWidget", "0", nullptr));
        label_52->setText(QApplication::translate("MissionWidget", "Gimbal", nullptr));
        cb_wp_gb->setItemText(0, QApplication::translate("MissionWidget", "Free", nullptr));
        cb_wp_gb->setItemText(1, QApplication::translate("MissionWidget", "Auto", nullptr));

        label_78->setText(QApplication::translate("MissionWidget", "Execution", nullptr));
        le_wp_exec->setText(QApplication::translate("MissionWidget", "1", nullptr));
        label_76->setText(QApplication::translate("MissionWidget", "Movement", nullptr));
        cb_wp_mov->setItemText(0, QApplication::translate("MissionWidget", "P2P", nullptr));
        cb_wp_mov->setItemText(1, QApplication::translate("MissionWidget", "Reserved", nullptr));

        label_77->setText(QApplication::translate("MissionWidget", "Finish", nullptr));
        cb_wp_fa->setItemText(0, QApplication::translate("MissionWidget", "No action", nullptr));
        cb_wp_fa->setItemText(1, QApplication::translate("MissionWidget", "Go home", nullptr));
        cb_wp_fa->setItemText(2, QApplication::translate("MissionWidget", "Landing", nullptr));
        cb_wp_fa->setItemText(3, QApplication::translate("MissionWidget", "To first point", nullptr));

        label_75->setText(QApplication::translate("MissionWidget", "Yaw logic", nullptr));
        cb_wp_yaw->setItemText(0, QApplication::translate("MissionWidget", "Auto yaw", nullptr));
        cb_wp_yaw->setItemText(1, QApplication::translate("MissionWidget", "No yaw", nullptr));
        cb_wp_yaw->setItemText(2, QApplication::translate("MissionWidget", "RC yaw", nullptr));
        cb_wp_yaw->setItemText(3, QApplication::translate("MissionWidget", "Waypoint", nullptr));

        label_66->setText(QApplication::translate("MissionWidget", "Latitude ", nullptr));
        le_wp_la->setText(QApplication::translate("MissionWidget", "0", nullptr));
        label_74->setText(QApplication::translate("MissionWidget", "Longitude", nullptr));
        le_wp_lo->setText(QApplication::translate("MissionWidget", "0", nullptr));
        label_63->setText(QApplication::translate("MissionWidget", "Altitude ", nullptr));
        le_wp_al->setText(QApplication::translate("MissionWidget", "0", nullptr));
        btn_waypoint_viewPoint->setText(QApplication::translate("MissionWidget", "Read position as view point", nullptr));
        btn_waypoint_init->setText(QApplication::translate("MissionWidget", "#2: Init Waypoint Mission", nullptr));
        btn_wp_loadAll->setText(QApplication::translate("MissionWidget", "#3: Load All Waypoints", nullptr));
        btn_wp_start_stop->setText(QApplication::translate("MissionWidget", "#4: Start Waypoint Mission", nullptr));
        btn_AbortWaypoint->setText(QApplication::translate("MissionWidget", "#5: Abort Waypoint Mission", nullptr));
        btn_wp_pr->setText(QApplication::translate("MissionWidget", "Pause Flight", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Waypoints), QApplication::translate("MissionWidget", "Waypoint Missions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MissionWidget: public Ui_MissionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWAYPOINTS_H
