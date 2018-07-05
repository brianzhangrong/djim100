/********************************************************************************
** Form generated from reading UI file 'subscribe_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSCRIBE_PANEL_H
#define UI_SUBSCRIBE_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubscribePanel
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_match;
    QGroupBox *packageManagement;
    QVBoxLayout *verticalLayout;
    QFrame *pkg0Frame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelPkg0;
    QComboBox *freqPkg0;
    QLabel *warnPkg0;
    QPushButton *startPkg0;
    QPushButton *stopPkg0;
    QFrame *pkg1Frame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelPkg1;
    QComboBox *freqPkg1;
    QLabel *warnPkg1;
    QPushButton *startPkg1;
    QPushButton *stopPkg1;
    QFrame *pkg2Frame;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPkg2;
    QComboBox *freqPkg2;
    QLabel *warnPkg2;
    QPushButton *startPkg2;
    QPushButton *stopPkg2;
    QFrame *pkg3Frame;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelPkg3;
    QComboBox *freqPkg3;
    QLabel *warnPkg3;
    QPushButton *startPkg3;
    QPushButton *stopPkg3;
    QFrame *pkg4Frame;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelPkg4;
    QComboBox *freqPkg4;
    QLabel *warnPkg4;
    QPushButton *startPkg4;
    QPushButton *stopPkg4;
    QTableWidget *tableWidget;

    void setupUi(QWidget *SubscribePanel)
    {
        if (SubscribePanel->objectName().isEmpty())
            SubscribePanel->setObjectName(QStringLiteral("SubscribePanel"));
        SubscribePanel->resize(1089, 561);
        SubscribePanel->setMinimumSize(QSize(970, 0));
        SubscribePanel->setMaximumSize(QSize(1100, 16777215));
        verticalLayout_2 = new QVBoxLayout(SubscribePanel);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(12, 12, 12, 12);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_match = new QPushButton(SubscribePanel);
        btn_match->setObjectName(QStringLiteral("btn_match"));

        horizontalLayout->addWidget(btn_match);


        verticalLayout_2->addLayout(horizontalLayout);

        packageManagement = new QGroupBox(SubscribePanel);
        packageManagement->setObjectName(QStringLiteral("packageManagement"));
        packageManagement->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(packageManagement);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        pkg0Frame = new QFrame(packageManagement);
        pkg0Frame->setObjectName(QStringLiteral("pkg0Frame"));
        pkg0Frame->setFrameShape(QFrame::StyledPanel);
        pkg0Frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(pkg0Frame);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(6, 6, 6, 6);
        labelPkg0 = new QLabel(pkg0Frame);
        labelPkg0->setObjectName(QStringLiteral("labelPkg0"));

        horizontalLayout_3->addWidget(labelPkg0);

        freqPkg0 = new QComboBox(pkg0Frame);
        freqPkg0->addItem(QString());
        freqPkg0->addItem(QString());
        freqPkg0->addItem(QString());
        freqPkg0->addItem(QString());
        freqPkg0->addItem(QString());
        freqPkg0->addItem(QString());
        freqPkg0->addItem(QString());
        freqPkg0->addItem(QString());
        freqPkg0->setObjectName(QStringLiteral("freqPkg0"));

        horizontalLayout_3->addWidget(freqPkg0);

        warnPkg0 = new QLabel(pkg0Frame);
        warnPkg0->setObjectName(QStringLiteral("warnPkg0"));

        horizontalLayout_3->addWidget(warnPkg0);

        startPkg0 = new QPushButton(pkg0Frame);
        startPkg0->setObjectName(QStringLiteral("startPkg0"));

        horizontalLayout_3->addWidget(startPkg0);

        stopPkg0 = new QPushButton(pkg0Frame);
        stopPkg0->setObjectName(QStringLiteral("stopPkg0"));

        horizontalLayout_3->addWidget(stopPkg0);


        verticalLayout->addWidget(pkg0Frame);

        pkg1Frame = new QFrame(packageManagement);
        pkg1Frame->setObjectName(QStringLiteral("pkg1Frame"));
        pkg1Frame->setFrameShape(QFrame::StyledPanel);
        pkg1Frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(pkg1Frame);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(6, 6, 6, 6);
        labelPkg1 = new QLabel(pkg1Frame);
        labelPkg1->setObjectName(QStringLiteral("labelPkg1"));

        horizontalLayout_4->addWidget(labelPkg1);

        freqPkg1 = new QComboBox(pkg1Frame);
        freqPkg1->addItem(QString());
        freqPkg1->addItem(QString());
        freqPkg1->addItem(QString());
        freqPkg1->addItem(QString());
        freqPkg1->addItem(QString());
        freqPkg1->addItem(QString());
        freqPkg1->addItem(QString());
        freqPkg1->addItem(QString());
        freqPkg1->setObjectName(QStringLiteral("freqPkg1"));

        horizontalLayout_4->addWidget(freqPkg1);

        warnPkg1 = new QLabel(pkg1Frame);
        warnPkg1->setObjectName(QStringLiteral("warnPkg1"));

        horizontalLayout_4->addWidget(warnPkg1);

        startPkg1 = new QPushButton(pkg1Frame);
        startPkg1->setObjectName(QStringLiteral("startPkg1"));

        horizontalLayout_4->addWidget(startPkg1);

        stopPkg1 = new QPushButton(pkg1Frame);
        stopPkg1->setObjectName(QStringLiteral("stopPkg1"));

        horizontalLayout_4->addWidget(stopPkg1);


        verticalLayout->addWidget(pkg1Frame);

        pkg2Frame = new QFrame(packageManagement);
        pkg2Frame->setObjectName(QStringLiteral("pkg2Frame"));
        pkg2Frame->setFrameShape(QFrame::StyledPanel);
        pkg2Frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(pkg2Frame);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 6, 6, 6);
        labelPkg2 = new QLabel(pkg2Frame);
        labelPkg2->setObjectName(QStringLiteral("labelPkg2"));

        horizontalLayout_5->addWidget(labelPkg2);

        freqPkg2 = new QComboBox(pkg2Frame);
        freqPkg2->addItem(QString());
        freqPkg2->addItem(QString());
        freqPkg2->addItem(QString());
        freqPkg2->addItem(QString());
        freqPkg2->addItem(QString());
        freqPkg2->addItem(QString());
        freqPkg2->addItem(QString());
        freqPkg2->addItem(QString());
        freqPkg2->setObjectName(QStringLiteral("freqPkg2"));

        horizontalLayout_5->addWidget(freqPkg2);

        warnPkg2 = new QLabel(pkg2Frame);
        warnPkg2->setObjectName(QStringLiteral("warnPkg2"));

        horizontalLayout_5->addWidget(warnPkg2);

        startPkg2 = new QPushButton(pkg2Frame);
        startPkg2->setObjectName(QStringLiteral("startPkg2"));

        horizontalLayout_5->addWidget(startPkg2);

        stopPkg2 = new QPushButton(pkg2Frame);
        stopPkg2->setObjectName(QStringLiteral("stopPkg2"));

        horizontalLayout_5->addWidget(stopPkg2);


        verticalLayout->addWidget(pkg2Frame);

        pkg3Frame = new QFrame(packageManagement);
        pkg3Frame->setObjectName(QStringLiteral("pkg3Frame"));
        pkg3Frame->setFrameShape(QFrame::StyledPanel);
        pkg3Frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(pkg3Frame);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(6, 6, 6, 6);
        labelPkg3 = new QLabel(pkg3Frame);
        labelPkg3->setObjectName(QStringLiteral("labelPkg3"));

        horizontalLayout_6->addWidget(labelPkg3);

        freqPkg3 = new QComboBox(pkg3Frame);
        freqPkg3->addItem(QString());
        freqPkg3->addItem(QString());
        freqPkg3->addItem(QString());
        freqPkg3->addItem(QString());
        freqPkg3->addItem(QString());
        freqPkg3->addItem(QString());
        freqPkg3->addItem(QString());
        freqPkg3->addItem(QString());
        freqPkg3->setObjectName(QStringLiteral("freqPkg3"));

        horizontalLayout_6->addWidget(freqPkg3);

        warnPkg3 = new QLabel(pkg3Frame);
        warnPkg3->setObjectName(QStringLiteral("warnPkg3"));

        horizontalLayout_6->addWidget(warnPkg3);

        startPkg3 = new QPushButton(pkg3Frame);
        startPkg3->setObjectName(QStringLiteral("startPkg3"));

        horizontalLayout_6->addWidget(startPkg3);

        stopPkg3 = new QPushButton(pkg3Frame);
        stopPkg3->setObjectName(QStringLiteral("stopPkg3"));

        horizontalLayout_6->addWidget(stopPkg3);


        verticalLayout->addWidget(pkg3Frame);

        pkg4Frame = new QFrame(packageManagement);
        pkg4Frame->setObjectName(QStringLiteral("pkg4Frame"));
        pkg4Frame->setFrameShape(QFrame::StyledPanel);
        pkg4Frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(pkg4Frame);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(6, 6, 6, 6);
        labelPkg4 = new QLabel(pkg4Frame);
        labelPkg4->setObjectName(QStringLiteral("labelPkg4"));

        horizontalLayout_7->addWidget(labelPkg4);

        freqPkg4 = new QComboBox(pkg4Frame);
        freqPkg4->addItem(QString());
        freqPkg4->addItem(QString());
        freqPkg4->addItem(QString());
        freqPkg4->addItem(QString());
        freqPkg4->addItem(QString());
        freqPkg4->addItem(QString());
        freqPkg4->addItem(QString());
        freqPkg4->addItem(QString());
        freqPkg4->setObjectName(QStringLiteral("freqPkg4"));

        horizontalLayout_7->addWidget(freqPkg4);

        warnPkg4 = new QLabel(pkg4Frame);
        warnPkg4->setObjectName(QStringLiteral("warnPkg4"));

        horizontalLayout_7->addWidget(warnPkg4);

        startPkg4 = new QPushButton(pkg4Frame);
        startPkg4->setObjectName(QStringLiteral("startPkg4"));

        horizontalLayout_7->addWidget(startPkg4);

        stopPkg4 = new QPushButton(pkg4Frame);
        stopPkg4->setObjectName(QStringLiteral("stopPkg4"));

        horizontalLayout_7->addWidget(stopPkg4);


        verticalLayout->addWidget(pkg4Frame);


        verticalLayout_2->addWidget(packageManagement);

        tableWidget = new QTableWidget(SubscribePanel);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);


        retranslateUi(SubscribePanel);

        QMetaObject::connectSlotsByName(SubscribePanel);
    } // setupUi

    void retranslateUi(QWidget *SubscribePanel)
    {
        SubscribePanel->setWindowTitle(QApplication::translate("SubscribePanel", "Form", nullptr));
        btn_match->setText(QApplication::translate("SubscribePanel", "Step 0: Verify Subscription Version", nullptr));
        packageManagement->setTitle(QApplication::translate("SubscribePanel", "Package Management", nullptr));
        labelPkg0->setText(QApplication::translate("SubscribePanel", "Pkg 0", nullptr));
        freqPkg0->setItemText(0, QApplication::translate("SubscribePanel", "Choose Freq", nullptr));
        freqPkg0->setItemText(1, QApplication::translate("SubscribePanel", "0 Hz (One Shot)", nullptr));
        freqPkg0->setItemText(2, QApplication::translate("SubscribePanel", "1 Hz", nullptr));
        freqPkg0->setItemText(3, QApplication::translate("SubscribePanel", "10 Hz", nullptr));
        freqPkg0->setItemText(4, QApplication::translate("SubscribePanel", "50 Hz", nullptr));
        freqPkg0->setItemText(5, QApplication::translate("SubscribePanel", "100 Hz", nullptr));
        freqPkg0->setItemText(6, QApplication::translate("SubscribePanel", "200 Hz", nullptr));
        freqPkg0->setItemText(7, QApplication::translate("SubscribePanel", "400 Hz", nullptr));

        freqPkg0->setCurrentText(QApplication::translate("SubscribePanel", "Choose Freq", nullptr));
        warnPkg0->setText(QApplication::translate("SubscribePanel", "Choose some data fields below", nullptr));
        startPkg0->setText(QApplication::translate("SubscribePanel", "Start", nullptr));
        stopPkg0->setText(QApplication::translate("SubscribePanel", "Stop", nullptr));
        labelPkg1->setText(QApplication::translate("SubscribePanel", "Pkg 1", nullptr));
        freqPkg1->setItemText(0, QApplication::translate("SubscribePanel", "Choose Freq", nullptr));
        freqPkg1->setItemText(1, QApplication::translate("SubscribePanel", "0 Hz (One Shot)", nullptr));
        freqPkg1->setItemText(2, QApplication::translate("SubscribePanel", "1 Hz", nullptr));
        freqPkg1->setItemText(3, QApplication::translate("SubscribePanel", "10 Hz", nullptr));
        freqPkg1->setItemText(4, QApplication::translate("SubscribePanel", "50 Hz", nullptr));
        freqPkg1->setItemText(5, QApplication::translate("SubscribePanel", "100 Hz", nullptr));
        freqPkg1->setItemText(6, QApplication::translate("SubscribePanel", "200 Hz", nullptr));
        freqPkg1->setItemText(7, QApplication::translate("SubscribePanel", "400 Hz", nullptr));

        freqPkg1->setCurrentText(QApplication::translate("SubscribePanel", "Choose Freq", nullptr));
        warnPkg1->setText(QApplication::translate("SubscribePanel", "Choose some data fields below", nullptr));
        startPkg1->setText(QApplication::translate("SubscribePanel", "Start", nullptr));
        stopPkg1->setText(QApplication::translate("SubscribePanel", "Stop", nullptr));
        labelPkg2->setText(QApplication::translate("SubscribePanel", "Pkg 2", nullptr));
        freqPkg2->setItemText(0, QApplication::translate("SubscribePanel", "Choose Freq", nullptr));
        freqPkg2->setItemText(1, QApplication::translate("SubscribePanel", "0 Hz (One Shot)", nullptr));
        freqPkg2->setItemText(2, QApplication::translate("SubscribePanel", "1 Hz", nullptr));
        freqPkg2->setItemText(3, QApplication::translate("SubscribePanel", "10 Hz", nullptr));
        freqPkg2->setItemText(4, QApplication::translate("SubscribePanel", "50 Hz", nullptr));
        freqPkg2->setItemText(5, QApplication::translate("SubscribePanel", "100 Hz", nullptr));
        freqPkg2->setItemText(6, QApplication::translate("SubscribePanel", "200 Hz", nullptr));
        freqPkg2->setItemText(7, QApplication::translate("SubscribePanel", "400 Hz", nullptr));

        freqPkg2->setCurrentText(QApplication::translate("SubscribePanel", "Choose Freq", nullptr));
        warnPkg2->setText(QApplication::translate("SubscribePanel", "Choose some data fields below", nullptr));
        startPkg2->setText(QApplication::translate("SubscribePanel", "Start", nullptr));
        stopPkg2->setText(QApplication::translate("SubscribePanel", "Stop", nullptr));
        labelPkg3->setText(QApplication::translate("SubscribePanel", "Pkg 3", nullptr));
        freqPkg3->setItemText(0, QApplication::translate("SubscribePanel", "Choose Freq", nullptr));
        freqPkg3->setItemText(1, QApplication::translate("SubscribePanel", "0 Hz (One Shot)", nullptr));
        freqPkg3->setItemText(2, QApplication::translate("SubscribePanel", "1 Hz", nullptr));
        freqPkg3->setItemText(3, QApplication::translate("SubscribePanel", "10 Hz", nullptr));
        freqPkg3->setItemText(4, QApplication::translate("SubscribePanel", "50 Hz", nullptr));
        freqPkg3->setItemText(5, QApplication::translate("SubscribePanel", "100 Hz", nullptr));
        freqPkg3->setItemText(6, QApplication::translate("SubscribePanel", "200 Hz", nullptr));
        freqPkg3->setItemText(7, QApplication::translate("SubscribePanel", "400 Hz", nullptr));

        freqPkg3->setCurrentText(QApplication::translate("SubscribePanel", "Choose Freq", nullptr));
        warnPkg3->setText(QApplication::translate("SubscribePanel", "Choose some data fields below", nullptr));
        startPkg3->setText(QApplication::translate("SubscribePanel", "Start", nullptr));
        stopPkg3->setText(QApplication::translate("SubscribePanel", "Stop", nullptr));
        labelPkg4->setText(QApplication::translate("SubscribePanel", "Pkg 4", nullptr));
        freqPkg4->setItemText(0, QApplication::translate("SubscribePanel", "Choose Freq", nullptr));
        freqPkg4->setItemText(1, QApplication::translate("SubscribePanel", "0 Hz (One Shot)", nullptr));
        freqPkg4->setItemText(2, QApplication::translate("SubscribePanel", "1 Hz", nullptr));
        freqPkg4->setItemText(3, QApplication::translate("SubscribePanel", "10 Hz", nullptr));
        freqPkg4->setItemText(4, QApplication::translate("SubscribePanel", "50 Hz", nullptr));
        freqPkg4->setItemText(5, QApplication::translate("SubscribePanel", "100 Hz", nullptr));
        freqPkg4->setItemText(6, QApplication::translate("SubscribePanel", "200 Hz", nullptr));
        freqPkg4->setItemText(7, QApplication::translate("SubscribePanel", "400 Hz", nullptr));

        freqPkg4->setCurrentText(QApplication::translate("SubscribePanel", "Choose Freq", nullptr));
        warnPkg4->setText(QApplication::translate("SubscribePanel", "Choose some data fields below", nullptr));
        startPkg4->setText(QApplication::translate("SubscribePanel", "Start", nullptr));
        stopPkg4->setText(QApplication::translate("SubscribePanel", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubscribePanel: public Ui_SubscribePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSCRIBE_PANEL_H
