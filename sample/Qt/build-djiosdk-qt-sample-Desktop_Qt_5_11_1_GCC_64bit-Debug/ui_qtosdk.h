/********************************************************************************
** Form generated from reading UI file 'qtosdk.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTOSDK_H
#define UI_QTOSDK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtOsdk
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *componentTabs;
    QWidget *initTab;
    QGridLayout *gridLayout_2;
    QGroupBox *initBox;
    QGridLayout *gridLayout_5;
    QComboBox *portSelection;
    QLineEdit *baudRateInput;
    QPushButton *initVehicle;
    QGroupBox *versionBox;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QTextBrowser *fwVersionDisplay;
    QTextBrowser *hwVersionDisplay;
    QLabel *label_3;
    QGroupBox *activationBox;
    QGridLayout *gridLayout_4;
    QLineEdit *appIDInput;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *keyInput;
    QPushButton *activateButton;
    QGroupBox *authorityBox;
    QGridLayout *gridLayout_7;
    QPushButton *obtainCtrlButton;
    QTextBrowser *ctrlStatus;
    QLabel *label_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *qtOsdk)
    {
        if (qtOsdk->objectName().isEmpty())
            qtOsdk->setObjectName(QStringLiteral("qtOsdk"));
        qtOsdk->resize(840, 623);
        centralwidget = new QWidget(qtOsdk);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        componentTabs = new QTabWidget(centralwidget);
        componentTabs->setObjectName(QStringLiteral("componentTabs"));
        componentTabs->setTabPosition(QTabWidget::North);
        componentTabs->setTabShape(QTabWidget::Rounded);
        initTab = new QWidget();
        initTab->setObjectName(QStringLiteral("initTab"));
        initTab->setMinimumSize(QSize(800, 0));
        initTab->setMaximumSize(QSize(800, 500));
        gridLayout_2 = new QGridLayout(initTab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(12, 12, 12, 12);
        initBox = new QGroupBox(initTab);
        initBox->setObjectName(QStringLiteral("initBox"));
        initBox->setMinimumSize(QSize(0, 0));
        gridLayout_5 = new QGridLayout(initBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(6, 6, 6, 6);
        portSelection = new QComboBox(initBox);
        portSelection->addItem(QString());
        portSelection->setObjectName(QStringLiteral("portSelection"));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        portSelection->setFont(font);

        gridLayout_5->addWidget(portSelection, 0, 0, 1, 1);

        baudRateInput = new QLineEdit(initBox);
        baudRateInput->setObjectName(QStringLiteral("baudRateInput"));
        baudRateInput->setFont(font);

        gridLayout_5->addWidget(baudRateInput, 0, 1, 1, 1);

        initVehicle = new QPushButton(initBox);
        initVehicle->setObjectName(QStringLiteral("initVehicle"));
        initVehicle->setFont(font);
        initVehicle->setFlat(false);

        gridLayout_5->addWidget(initVehicle, 1, 0, 1, 2);


        gridLayout_2->addWidget(initBox, 0, 0, 1, 1);

        versionBox = new QGroupBox(initTab);
        versionBox->setObjectName(QStringLiteral("versionBox"));
        gridLayout_6 = new QGridLayout(versionBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(6, 6, 6, 6);
        label_4 = new QLabel(versionBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);

        gridLayout_6->addWidget(label_4, 1, 0, 1, 1);

        fwVersionDisplay = new QTextBrowser(versionBox);
        fwVersionDisplay->setObjectName(QStringLiteral("fwVersionDisplay"));
        sizePolicy.setHeightForWidth(fwVersionDisplay->sizePolicy().hasHeightForWidth());
        fwVersionDisplay->setSizePolicy(sizePolicy);
        fwVersionDisplay->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_6->addWidget(fwVersionDisplay, 1, 1, 1, 1);

        hwVersionDisplay = new QTextBrowser(versionBox);
        hwVersionDisplay->setObjectName(QStringLiteral("hwVersionDisplay"));
        sizePolicy.setHeightForWidth(hwVersionDisplay->sizePolicy().hasHeightForWidth());
        hwVersionDisplay->setSizePolicy(sizePolicy);
        hwVersionDisplay->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hwVersionDisplay->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hwVersionDisplay->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);

        gridLayout_6->addWidget(hwVersionDisplay, 0, 1, 1, 1);

        label_3 = new QLabel(versionBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_2->addWidget(versionBox, 0, 1, 1, 1);

        activationBox = new QGroupBox(initTab);
        activationBox->setObjectName(QStringLiteral("activationBox"));
        gridLayout_4 = new QGridLayout(activationBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(6, 6, 6, 6);
        appIDInput = new QLineEdit(activationBox);
        appIDInput->setObjectName(QStringLiteral("appIDInput"));

        gridLayout_4->addWidget(appIDInput, 0, 1, 1, 1);

        label_2 = new QLabel(activationBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(activationBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        keyInput = new QLineEdit(activationBox);
        keyInput->setObjectName(QStringLiteral("keyInput"));

        gridLayout_4->addWidget(keyInput, 1, 1, 1, 1);

        activateButton = new QPushButton(activationBox);
        activateButton->setObjectName(QStringLiteral("activateButton"));
        activateButton->setFont(font);

        gridLayout_4->addWidget(activateButton, 2, 1, 1, 1);


        gridLayout_2->addWidget(activationBox, 1, 0, 1, 1);

        authorityBox = new QGroupBox(initTab);
        authorityBox->setObjectName(QStringLiteral("authorityBox"));
        gridLayout_7 = new QGridLayout(authorityBox);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(6, 6, 6, 6);
        obtainCtrlButton = new QPushButton(authorityBox);
        obtainCtrlButton->setObjectName(QStringLiteral("obtainCtrlButton"));
        obtainCtrlButton->setFont(font);

        gridLayout_7->addWidget(obtainCtrlButton, 0, 0, 1, 1);

        ctrlStatus = new QTextBrowser(authorityBox);
        ctrlStatus->setObjectName(QStringLiteral("ctrlStatus"));
        ctrlStatus->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_7->addWidget(ctrlStatus, 2, 0, 1, 1);

        label_5 = new QLabel(authorityBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout_7->addWidget(label_5, 1, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_2->addWidget(authorityBox, 1, 1, 1, 1);

        componentTabs->addTab(initTab, QString());

        gridLayout->addWidget(componentTabs, 0, 0, 1, 1);

        qtOsdk->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(qtOsdk);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        qtOsdk->setStatusBar(statusbar);

        retranslateUi(qtOsdk);

        componentTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qtOsdk);
    } // setupUi

    void retranslateUi(QMainWindow *qtOsdk)
    {
        qtOsdk->setWindowTitle(QApplication::translate("qtOsdk", "MainWindow", nullptr));
        initBox->setTitle(QApplication::translate("qtOsdk", "Initialization", nullptr));
        portSelection->setItemText(0, QApplication::translate("qtOsdk", "Choose Port...", nullptr));

        baudRateInput->setText(QApplication::translate("qtOsdk", "230400", nullptr));
        initVehicle->setText(QApplication::translate("qtOsdk", "Initialize Vehicle", nullptr));
        versionBox->setTitle(QApplication::translate("qtOsdk", "Version Details", nullptr));
        label_4->setText(QApplication::translate("qtOsdk", "Firmware:", nullptr));
        label_3->setText(QApplication::translate("qtOsdk", "Hardware: ", nullptr));
        activationBox->setTitle(QApplication::translate("qtOsdk", "Activation", nullptr));
        label_2->setText(QApplication::translate("qtOsdk", "Key: ", nullptr));
        label->setText(QApplication::translate("qtOsdk", "ID:", nullptr));
        activateButton->setText(QApplication::translate("qtOsdk", "Activate \n"
"Vehicle", nullptr));
        authorityBox->setTitle(QApplication::translate("qtOsdk", "Control Authority", nullptr));
        obtainCtrlButton->setText(QApplication::translate("qtOsdk", "Obtain Control", nullptr));
        label_5->setText(QApplication::translate("qtOsdk", "Current Status:", nullptr));
        componentTabs->setTabText(componentTabs->indexOf(initTab), QApplication::translate("qtOsdk", "Initialization", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtOsdk: public Ui_qtOsdk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOSDK_H
