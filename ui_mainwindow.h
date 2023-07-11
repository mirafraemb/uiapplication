/****************************************************************************

** Copyrights : Mirafra Technologies Ltd (2023)
** This code is the sole proprietary of Mirafra Technologies Limited
** Unauthorised distribution, sale, copy will invite strict penal actions
****************************************************************************/


#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QMainWindow>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QFileDialog>
#include "player.h"
#include <libudev.h>
#include <QCloseEvent>
#include <QDesktopWidget>
#include <iostream>
//#include "ui_mainwindow.h"
using namespace std;

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_11;
    QWidget *page_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QWidget *gridLayoutWidget;
    QGridLayout *mainLayout;
    QTableWidget *tableWidget;

    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSlider *hSliderVideo_2;
    QLabel *endTime_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *LblNowPlaying_2;
    QGridLayout *gridLayout_2;

    QPushButton *BtnPause_2;
    QComboBox *comboBox_2;
    QPushButton *directory_2;
    QPushButton *BtnPlay_2;
    QGroupBox *groupBox_2;
    QSlider *vSliderSound_2;
    QPushButton *BtnMute_2;

    QLabel *filesFoundLabel;
    QPushButton *findButton;
    QPushButton *findVideoButton;
    QTableWidget *filesTable;



    QDir currentDir;





    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));


        auto  rec = QApplication::desktop()->screenGeometry();
        auto  height = rec.height();
        auto  width = rec.width();

        //Code to dynamically set the size of Widgets such as MainWindow application, Push Buttons, Gridlayouts etc

        int size_x_pb,size_y_pb;
        int size_x_sw,size_y_sw;
        int size_x_gl,size_y_gl;
        int size_x_pb_icon,size_y_pb_icon;
        int size_x_pb_power;
        int app_width,app_height;

        float conv_x_pb,conv_y_pb;
        float conv_x_sw,conv_y_sw;
        conv_x_pb = (float)(151.0/1082);
        size_x_pb = conv_x_pb * width;
        conv_y_pb = (float)(141.0/420);
        size_y_pb = conv_y_pb * height;

        size_x_pb_icon = 0.34 * size_x_pb;
        size_y_pb_icon = 0.36 * size_y_pb;

        size_x_pb_power = 1.6 * size_x_pb_icon;


        conv_x_sw = 1091.0/1082;
        size_x_sw = (int)(conv_x_sw * width);

        conv_y_sw = 601.0/420;
        size_y_sw = (int)(conv_y_sw * height);


        int offset_power_pb_x = ( 480.0 / 1082) * width ;
        int offset_power_pb_y = ( 130.0 / 420) * height ;

        int offset_array2_pb_x = (930.0 / 1082) * width;
        int offset_gl_x = (149.0 / 1082) * width;
        int offset_array2_pb_y = (140.0 / 420) * height;
        int offset_array3_pb_y = (280.0 / 420) * height;

        size_x_gl = (781.0 / 1082) * width;
        size_y_gl = (421.0 / 420) * height;



        app_width = width;
        app_height = height;



        MainWindow->resize(app_width, app_height);
        //Change rgb colour to desired colour
        //MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 224, 80);"));
        //MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 137, 80);"));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));

        MainWindow->setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, size_x_sw, size_y_sw));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_11 = new QPushButton(page);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));


        pushButton_11->setGeometry(QRect(offset_power_pb_x, offset_power_pb_y, size_x_pb, size_y_pb));

        // Change the pixmap's image to different image for power button/ or any other button according to requirements
        QPixmap pixmap("power-button-icon-8344.png");
        QIcon ButtonIcon(pixmap);
        pushButton_11->setIcon(ButtonIcon);
        pushButton_11->setIconSize(QSize(size_x_pb_power, size_x_pb_power));
        stackedWidget->addWidget(page);

        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(offset_array2_pb_x, offset_array2_pb_y, size_x_pb, size_y_pb));
        QPixmap pixmap1("music-note-icon-34253.png");
        QIcon ButtonIcon1(pixmap1);
        pushButton_5->setIcon(ButtonIcon1);
        pushButton_5->setIconSize(QSize(size_x_pb_icon, size_x_pb_icon));

        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, offset_array2_pb_y, size_x_pb, size_y_pb));
        QPixmap pixmap2("settings-icon-14949.png");
        QIcon ButtonIcon2(pixmap2);
        pushButton_2->setIcon(ButtonIcon2);
        pushButton_2->setIconSize(QSize(size_x_pb_icon, size_x_pb_icon));

        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, size_x_pb, size_y_pb));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8(""));
        QPixmap pixmap3("house-top-icon-17749.png");
        QIcon ButtonIcon3(pixmap3);
        pushButton->setIcon(ButtonIcon3);
        pushButton->setIconSize(QSize(size_x_pb_icon, size_x_pb_icon));



        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(offset_array2_pb_x, 0, size_x_pb, size_y_pb));
        QPixmap pixmap4("video-icon-8027.png");
        QIcon ButtonIcon4(pixmap4);
        pushButton_6->setIcon(ButtonIcon4);
        pushButton_6->setIconSize(QSize(size_x_pb_icon, size_x_pb_icon));


        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, offset_array3_pb_y, size_x_pb, size_y_pb));
        QPixmap pixmap5("PngItem_1452866.png");
        QIcon ButtonIcon5(pixmap5);
        pushButton_8->setIcon(ButtonIcon5);
        pushButton_8->setIconSize(QSize(size_x_pb_icon, size_x_pb_icon));

        findButton = new QPushButton(page_2);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setGeometry(QRect(offset_array2_pb_x, offset_array3_pb_y, size_x_pb, size_y_pb));
        QPixmap pixmap6("folder11.png");
        QIcon ButtonIcon6(pixmap6);
        findButton->setIcon(ButtonIcon6);
        findButton->setIconSize(QSize(size_x_pb_icon, size_x_pb_icon));

        ///*
        gridLayoutWidget = new QWidget(page_2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(offset_gl_x, 0, size_x_gl, size_y_gl));
        gridLayoutWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        mainLayout = new QGridLayout(gridLayoutWidget);
        mainLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);



        filesFoundLabel = new QLabel(page_2);
        filesFoundLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));



        mainLayout->addWidget(filesFoundLabel, 1, 0, 1, 2);

        mainLayout->addWidget(filesTable, 0, 0, 1, 3);



        stackedWidget->addWidget(page_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Mirafra Music Player", nullptr));
        //pushButton_11->setText(QString());
        pushButton_5->setText(QString());
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        pushButton_6->setText(QString());
        pushButton_8->setText(QString());
        findButton->setText(QString());

    } // retranslateUi

};

#endif // UI_MAINWINDOW_H
