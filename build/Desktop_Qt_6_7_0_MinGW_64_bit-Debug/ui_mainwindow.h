/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "mainwindow.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad_Image;
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *invertFilter;
    QPushButton *sunLightFilter;
    QPushButton *purpleFilter;
    QPushButton *oilFilter;
    QPushButton *blurFilter;
    QPushButton *grayFilter;
    QGroupBox *sliderGroup;
    QSlider *filterSlider;
    QLabel *sliderText;
    QLabel *sliderValue;
    QPushButton *filterApply;
    QLabel *progressLabel;
    QPushButton *B_W_Filter;
    QPushButton *DetectFilter;
    QPushButton *BrightFilter;
    QPushButton *cropFilter;
    QGroupBox *cropGroup;
    QPushButton *cropApply;
    QLabel *cropHeightLabel;
    QLabel *cropWidthLabel;
    QLineEdit *cropWidth;
    QLineEdit *cropHeight;
    QPushButton *SkewFilter;
    QPushButton *FrameFilter;
    QPushButton *NeonFilter;
    QPushButton *HorizontalFlip;
    QPushButton *VerticalFlip;
    QPushButton *oldtvFilter;
    QPushButton *infraredFilter;
    QPushButton *MergeFilter;
    QPushButton *empossFilter;
    QPushButton *MergeCrop;
    QWidget *widget_2;
    FancyButton *loadImgBtn;
    FancyButton *clearImg;
    FancyButton *saveImgBtn;
    QPushButton *undoBtn;
    QPushButton *redoBtn;
    QPushButton *titleIcon;
    QWidget *widget_3;
    QPushButton *rotateLeft;
    QPushButton *resizeFilterBtn;
    QLineEdit *widthEditVal;
    QLabel *widthLabel;
    QLineEdit *heightEditVal;
    QLabel *heightLabel;
    QCheckBox *resizeRatio;
    QLabel *inImg;
    QWidget *outFrame;
    QHBoxLayout *horizontalLayout;
    CustomLabel *outImg;
    QLabel *justFrame;
    QPushButton *rotateRight;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1622, 848);
        MainWindow->setCursor(QCursor(Qt::CrossCursor));
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"#MainWindow QPushButton {\n"
"	padding: 1px 5px;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"\n"
""));
        MainWindow->setAnimated(false);
        actionLoad_Image = new QAction(MainWindow);
        actionLoad_Image->setObjectName("actionLoad_Image");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        centralwidget->setPalette(palette);
        centralwidget->setAutoFillBackground(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-3, 634, 1621, 201));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: #252525;\n"
"	color: #000;\n"
"	border: 1px solid #000;\n"
"	font: 9pt \"JetBrains Mono\";\n"
"}\n"
"QPushButton{\n"
"	\n"
"	color: rgba(161, 161, 161,0.1);\n"
"	border-bottom:  2px solid rgba(161, 161, 161,0.1);\n"
"	border-top: none;\n"
"	border-right: none;\n"
"	border-left: none;\n"
"	font-weight: 800;\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:Enabled:hover {\n"
"	\n"
"	background-color: #59FFA0;\n"
"	border-top-right-radius: 10px;\n"
"	border-top-left-radius: 10px;\n"
"	color:  #222222;\n"
"	\n"
"\n"
"}\n"
"QPushButton:checked{\n"
"	border-top-right-radius: 10px;\n"
"	border-top-left-radius: 10px;\n"
"	color: #fff;\n"
"	border-bottom:  2px solid #fff;\n"
"	border-top: none;\n"
"	border-right: none;\n"
"	border-left: none;\n"
"}\n"
"QPushButton:Enabled{\n"
"	color: rgba(255, 255, 255,1);\n"
"	border-bottom:  2px solid rgba(161, 161, 161,1);\n"
"}"));
        invertFilter = new QPushButton(widget);
        invertFilter->setObjectName("invertFilter");
        invertFilter->setEnabled(true);
        invertFilter->setGeometry(QRect(30, 5, 101, 51));
        invertFilter->setStyleSheet(QString::fromUtf8(""));
        sunLightFilter = new QPushButton(widget);
        sunLightFilter->setObjectName("sunLightFilter");
        sunLightFilter->setGeometry(QRect(149, 6, 101, 50));
        sunLightFilter->setStyleSheet(QString::fromUtf8(""));
        sunLightFilter->setCheckable(true);
        purpleFilter = new QPushButton(widget);
        purpleFilter->setObjectName("purpleFilter");
        purpleFilter->setGeometry(QRect(270, 5, 101, 50));
        purpleFilter->setStyleSheet(QString::fromUtf8(""));
        oilFilter = new QPushButton(widget);
        oilFilter->setObjectName("oilFilter");
        oilFilter->setGeometry(QRect(390, 4, 100, 50));
        oilFilter->setStyleSheet(QString::fromUtf8(""));
        oilFilter->setCheckable(true);
        blurFilter = new QPushButton(widget);
        blurFilter->setObjectName("blurFilter");
        blurFilter->setGeometry(QRect(510, 4, 101, 50));
        blurFilter->setStyleSheet(QString::fromUtf8(""));
        blurFilter->setCheckable(true);
        grayFilter = new QPushButton(widget);
        grayFilter->setObjectName("grayFilter");
        grayFilter->setGeometry(QRect(630, 4, 100, 50));
        grayFilter->setStyleSheet(QString::fromUtf8(""));
        grayFilter->setCheckable(false);
        sliderGroup = new QGroupBox(widget);
        sliderGroup->setObjectName("sliderGroup");
        sliderGroup->setGeometry(QRect(940, 20, 580, 131));
        sliderGroup->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	color: #59FFA0;\n"
"	border-radius: 10px;\n"
"	border-color: #fff;\n"
"}"));
        filterSlider = new QSlider(sliderGroup);
        filterSlider->setObjectName("filterSlider");
        filterSlider->setGeometry(QRect(10, 30, 391, 41));
        filterSlider->setMouseTracking(true);
        filterSlider->setStyleSheet(QString::fromUtf8("QSlider{\n"
"	border: none;\n"
"}\n"
"\n"
"QSlider::groove:horizontal{\n"
"	border: 1px solid #000;\n"
"	height: 5px;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	background: #fff;\n"
"	width: 12px;\n"
"	height: 12px;\n"
"	margin: -5px -1px;\n"
"	border-radius: 6px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover{\n"
"	background: #fff;\n"
"	border-color: #fff;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal{\n"
"	background: qlineargradient(x1: 0, y1:0, x2: 1, y2:0, stop: 0 #fff, stop: 1 #000);\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal{\n"
"	background: #59FFA0;\n"
"}\n"
"\n"
""));
        filterSlider->setMaximum(100);
        filterSlider->setSingleStep(5);
        filterSlider->setPageStep(30);
        filterSlider->setValue(20);
        filterSlider->setSliderPosition(20);
        filterSlider->setTracking(true);
        filterSlider->setOrientation(Qt::Horizontal);
        filterSlider->setTickPosition(QSlider::TicksBelow);
        filterSlider->setTickInterval(5);
        sliderText = new QLabel(sliderGroup);
        sliderText->setObjectName("sliderText");
        sliderText->setGeometry(QRect(10, 70, 61, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font.setWeight(QFont::Medium);
        font.setItalic(false);
        sliderText->setFont(font);
        sliderText->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: none;\n"
"	color: rgb(255, 255, 255);\n"
"	font-weight: 500;\n"
"	font-size: 24px;\n"
"}"));
        sliderValue = new QLabel(sliderGroup);
        sliderValue->setObjectName("sliderValue");
        sliderValue->setGeometry(QRect(79, 77, 40, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font1.setBold(false);
        font1.setItalic(false);
        sliderValue->setFont(font1);
        sliderValue->setLayoutDirection(Qt::LeftToRight);
        sliderValue->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:  rgb(204,204,204);\n"
"	border: none;\n"
"	font-size: 20px;\n"
"}"));
        sliderValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        filterApply = new QPushButton(sliderGroup);
        filterApply->setObjectName("filterApply");
        filterApply->setGeometry(QRect(440, 29, 120, 47));
        filterApply->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	color: #fff;\n"
"	border: 1px solid #000;\n"
"	border-radius: 15px;\n"
"	border-color: #fff;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: #59FFA0;\n"
"	border-color: rgb(0, 0, 0) ;\n"
"	color: #353535;\n"
"}"));
        progressLabel = new QLabel(sliderGroup);
        progressLabel->setObjectName("progressLabel");
        progressLabel->setGeometry(QRect(453, 76, 111, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        progressLabel->setFont(font2);
        progressLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: none;\n"
"	font-wight: 800;\n"
"	color: #fff;\n"
"}"));
        B_W_Filter = new QPushButton(widget);
        B_W_Filter->setObjectName("B_W_Filter");
        B_W_Filter->setGeometry(QRect(33, 124, 100, 50));
        B_W_Filter->setStyleSheet(QString::fromUtf8(""));
        B_W_Filter->setCheckable(true);
        DetectFilter = new QPushButton(widget);
        DetectFilter->setObjectName("DetectFilter");
        DetectFilter->setGeometry(QRect(150, 68, 100, 50));
        DetectFilter->setMouseTracking(true);
        DetectFilter->setStyleSheet(QString::fromUtf8(""));
        DetectFilter->setCheckable(false);
        BrightFilter = new QPushButton(widget);
        BrightFilter->setObjectName("BrightFilter");
        BrightFilter->setGeometry(QRect(31, 68, 100, 50));
        BrightFilter->setStyleSheet(QString::fromUtf8(""));
        BrightFilter->setCheckable(true);
        cropFilter = new QPushButton(widget);
        cropFilter->setObjectName("cropFilter");
        cropFilter->setGeometry(QRect(271, 68, 100, 50));
        cropFilter->setStyleSheet(QString::fromUtf8(""));
        cropFilter->setCheckable(true);
        cropGroup = new QGroupBox(widget);
        cropGroup->setObjectName("cropGroup");
        cropGroup->setGeometry(QRect(940, 20, 541, 131));
        cropGroup->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	color: 	#59FFA0;\n"
"	border-radius: 10px;\n"
"	border-color: #fff;\n"
"}"));
        cropApply = new QPushButton(cropGroup);
        cropApply->setObjectName("cropApply");
        cropApply->setGeometry(QRect(407, 29, 120, 47));
        cropApply->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	color: #fff;\n"
"	border: 1px solid #000;\n"
"	border-radius: 15px;\n"
"	border-color: #fff;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: #59FFA0;\n"
"	border-color: rgb(0, 0, 0) ;\n"
"	color: #353535;\n"
"}"));
        cropHeightLabel = new QLabel(cropGroup);
        cropHeightLabel->setObjectName("cropHeightLabel");
        cropHeightLabel->setGeometry(QRect(10, 80, 100, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Yu Gothic UI Semilight")});
        font3.setPointSize(9);
        font3.setWeight(QFont::DemiBold);
        font3.setItalic(false);
        cropHeightLabel->setFont(font3);
        cropHeightLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 350 9pt \"Yu Gothic UI Semilight\";\n"
"	color: #fff;\n"
"	border: none;\n"
"	font-weight: 600;\n"
"}"));
        cropWidthLabel = new QLabel(cropGroup);
        cropWidthLabel->setObjectName("cropWidthLabel");
        cropWidthLabel->setGeometry(QRect(10, 30, 100, 41));
        cropWidthLabel->setFont(font3);
        cropWidthLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 350 9pt \"Yu Gothic UI Semilight\";\n"
"	color: rgb(255, 255, 255);\n"
"	border: none;\n"
"	font-weight: 600;\n"
"}"));
        cropWidth = new QLineEdit(cropGroup);
        cropWidth->setObjectName("cropWidth");
        cropWidth->setGeometry(QRect(115, 37, 90, 30));
        cropWidth->setFocusPolicy(Qt::ClickFocus);
        cropWidth->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-radius: 7px;\n"
"	color: #fff;\n"
"	border-color: #fff;\n"
"}"));
        cropWidth->setFrame(false);
        cropWidth->setDragEnabled(false);
        cropWidth->setClearButtonEnabled(false);
        cropHeight = new QLineEdit(cropGroup);
        cropHeight->setObjectName("cropHeight");
        cropHeight->setGeometry(QRect(117, 87, 91, 30));
        cropHeight->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-radius: 7px;\n"
"	color: #fff;\n"
"	border-color: #fff;\n"
"}"));
        cropHeight->setFrame(false);
        SkewFilter = new QPushButton(widget);
        SkewFilter->setObjectName("SkewFilter");
        SkewFilter->setGeometry(QRect(391, 67, 101, 50));
        SkewFilter->setStyleSheet(QString::fromUtf8(""));
        SkewFilter->setCheckable(true);
        FrameFilter = new QPushButton(widget);
        FrameFilter->setObjectName("FrameFilter");
        FrameFilter->setGeometry(QRect(634, 67, 101, 50));
        FrameFilter->setStyleSheet(QString::fromUtf8(""));
        FrameFilter->setCheckable(true);
        NeonFilter = new QPushButton(widget);
        NeonFilter->setObjectName("NeonFilter");
        NeonFilter->setGeometry(QRect(151, 124, 100, 50));
        NeonFilter->setStyleSheet(QString::fromUtf8(""));
        NeonFilter->setCheckable(true);
        HorizontalFlip = new QPushButton(widget);
        HorizontalFlip->setObjectName("HorizontalFlip");
        HorizontalFlip->setGeometry(QRect(269, 124, 100, 50));
        HorizontalFlip->setStyleSheet(QString::fromUtf8(""));
        HorizontalFlip->setCheckable(true);
        VerticalFlip = new QPushButton(widget);
        VerticalFlip->setObjectName("VerticalFlip");
        VerticalFlip->setGeometry(QRect(389, 124, 100, 50));
        VerticalFlip->setStyleSheet(QString::fromUtf8(""));
        VerticalFlip->setCheckable(true);
        oldtvFilter = new QPushButton(widget);
        oldtvFilter->setObjectName("oldtvFilter");
        oldtvFilter->setGeometry(QRect(511, 67, 101, 50));
        oldtvFilter->setStyleSheet(QString::fromUtf8(""));
        oldtvFilter->setCheckable(true);
        infraredFilter = new QPushButton(widget);
        infraredFilter->setObjectName("infraredFilter");
        infraredFilter->setEnabled(true);
        infraredFilter->setGeometry(QRect(509, 123, 101, 51));
        infraredFilter->setStyleSheet(QString::fromUtf8(""));
        MergeFilter = new QPushButton(widget);
        MergeFilter->setObjectName("MergeFilter");
        MergeFilter->setGeometry(QRect(635, 124, 111, 50));
        MergeFilter->setStyleSheet(QString::fromUtf8(""));
        MergeFilter->setCheckable(true);
        empossFilter = new QPushButton(widget);
        empossFilter->setObjectName("empossFilter");
        empossFilter->setGeometry(QRect(750, 5, 101, 50));
        empossFilter->setStyleSheet(QString::fromUtf8(""));
        empossFilter->setCheckable(true);
        MergeCrop = new QPushButton(widget);
        MergeCrop->setObjectName("MergeCrop");
        MergeCrop->setGeometry(QRect(750, 70, 111, 50));
        MergeCrop->setStyleSheet(QString::fromUtf8(""));
        MergeCrop->setCheckable(true);
        sliderGroup->raise();
        invertFilter->raise();
        sunLightFilter->raise();
        purpleFilter->raise();
        oilFilter->raise();
        blurFilter->raise();
        grayFilter->raise();
        B_W_Filter->raise();
        DetectFilter->raise();
        BrightFilter->raise();
        cropFilter->raise();
        cropGroup->raise();
        SkewFilter->raise();
        FrameFilter->raise();
        NeonFilter->raise();
        HorizontalFlip->raise();
        VerticalFlip->raise();
        oldtvFilter->raise();
        infraredFilter->raise();
        MergeFilter->raise();
        empossFilter->raise();
        MergeCrop->raise();
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(-3, 0, 1621, 90));
        widget_2->setStyleSheet(QString::fromUtf8("#widget_2{\n"
"	background-color: #252525;\n"
"}\n"
"QPushButton{\n"
"	border: 2px solid rgb(161,161,161);\n"
"	border-radius: 5px;\n"
"}"));
        loadImgBtn = new FancyButton(widget_2);
        loadImgBtn->setObjectName("loadImgBtn");
        loadImgBtn->setGeometry(QRect(930, 20, 110, 50));
        loadImgBtn->setStyleSheet(QString::fromUtf8(""));
        clearImg = new FancyButton(widget_2);
        clearImg->setObjectName("clearImg");
        clearImg->setGeometry(QRect(1080, 20, 110, 50));
        clearImg->setStyleSheet(QString::fromUtf8(""));
        saveImgBtn = new FancyButton(widget_2);
        saveImgBtn->setObjectName("saveImgBtn");
        saveImgBtn->setGeometry(QRect(1350, 20, 110, 50));
        saveImgBtn->setStyleSheet(QString::fromUtf8(""));
        undoBtn = new QPushButton(widget_2);
        undoBtn->setObjectName("undoBtn");
        undoBtn->setGeometry(QRect(1510, 50, 92, 32));
        undoBtn->setStyleSheet(QString::fromUtf8("#undoBtn{\n"
"	font: 12pt \"JetBrains Mono\";\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/icons/undo_alt.png"), QSize(), QIcon::Normal, QIcon::On);
        undoBtn->setIcon(icon);
        undoBtn->setIconSize(QSize(16, 16));
        redoBtn = new QPushButton(widget_2);
        redoBtn->setObjectName("redoBtn");
        redoBtn->setGeometry(QRect(1510, 9, 92, 32));
        redoBtn->setStyleSheet(QString::fromUtf8("#redoBtn{\n"
"	font: 12pt \"JetBrains Mono\";\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/icons/redo_alt.png"), QSize(), QIcon::Normal, QIcon::On);
        redoBtn->setIcon(icon1);
        titleIcon = new QPushButton(widget_2);
        titleIcon->setObjectName("titleIcon");
        titleIcon->setEnabled(true);
        titleIcon->setGeometry(QRect(20, 10, 400, 80));
        titleIcon->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/icons/RGB.png"), QSize(), QIcon::Normal, QIcon::Off);
        titleIcon->setIcon(icon2);
        titleIcon->setIconSize(QSize(350, 350));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(0, 90, 1621, 621));
        widget_3->setStyleSheet(QString::fromUtf8("#widget_3{\n"
"	background-color: #151515;\n"
"}"));
        rotateLeft = new QPushButton(widget_3);
        rotateLeft->setObjectName("rotateLeft");
        rotateLeft->setGeometry(QRect(1130, 480, 32, 32));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("JetBrains Mono")});
        rotateLeft->setFont(font4);
        rotateLeft->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 50px;\n"
"	border: none;\n"
"	color:#fff;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background: none;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/icons/rotate_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        rotateLeft->setIcon(icon3);
        rotateLeft->setIconSize(QSize(32, 32));
        resizeFilterBtn = new QPushButton(widget_3);
        resizeFilterBtn->setObjectName("resizeFilterBtn");
        resizeFilterBtn->setGeometry(QRect(1360, 13, 121, 41));
        resizeFilterBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #fff;\n"
"	border: 1px solid #fff;\n"
"	font-weight: 800;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"	background-color: rgb(0, 0, 127);\n"
"	border : 1px solid rgb(0, 0, 127);\n"
"\n"
"}\n"
""));
        resizeFilterBtn->setCheckable(true);
        widthEditVal = new QLineEdit(widget_3);
        widthEditVal->setObjectName("widthEditVal");
        widthEditVal->setGeometry(QRect(890, 10, 60, 21));
        widthEditVal->setFocusPolicy(Qt::ClickFocus);
        widthEditVal->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-radius: 4px;\n"
"	color: #fff;\n"
"	border-color: #fff;\n"
"}"));
        widthEditVal->setDragEnabled(false);
        widthEditVal->setClearButtonEnabled(false);
        widthLabel = new QLabel(widget_3);
        widthLabel->setObjectName("widthLabel");
        widthLabel->setGeometry(QRect(830, 0, 50, 41));
        widthLabel->setFont(font3);
        widthLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 350 9pt \"Yu Gothic UI Semilight\";\n"
"	color: rgb(255, 255, 255);\n"
"	border: none;\n"
"	font-weight: 600;\n"
"}"));
        heightEditVal = new QLineEdit(widget_3);
        heightEditVal->setObjectName("heightEditVal");
        heightEditVal->setGeometry(QRect(890, 40, 61, 21));
        heightEditVal->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-radius: 5px;\n"
"	color: #fff;\n"
"	border-color: #fff;\n"
"}"));
        heightLabel = new QLabel(widget_3);
        heightLabel->setObjectName("heightLabel");
        heightLabel->setGeometry(QRect(829, 30, 51, 41));
        heightLabel->setFont(font3);
        heightLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 350 9pt \"Yu Gothic UI Semilight\";\n"
"	color: rgb(255, 255, 255);\n"
"	border: none;\n"
"	font-weight: 600;\n"
"}"));
        resizeRatio = new QCheckBox(widget_3);
        resizeRatio->setObjectName("resizeRatio");
        resizeRatio->setGeometry(QRect(970, 26, 151, 22));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font5.setPointSize(9);
        resizeRatio->setFont(font5);
        resizeRatio->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"	color: #fff;\n"
"\n"
"}"));
        resizeRatio->setChecked(true);
        inImg = new QLabel(widget_3);
        inImg->setObjectName("inImg");
        inImg->setGeometry(QRect(61, 70, 700, 400));
        inImg->setStyleSheet(QString::fromUtf8("#inImg{\n"
"	border: none;\n"
"}"));
        inImg->setFrameShape(QFrame::Box);
        inImg->setFrameShadow(QFrame::Raised);
        inImg->setAlignment(Qt::AlignCenter);
        outFrame = new QWidget(widget_3);
        outFrame->setObjectName("outFrame");
        outFrame->setGeometry(QRect(820, 70, 700, 400));
        outFrame->setMinimumSize(QSize(700, 400));
        outFrame->setMaximumSize(QSize(718, 400));
        outFrame->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(outFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        outImg = new CustomLabel(outFrame);
        outImg->setObjectName("outImg");
        outImg->setMinimumSize(QSize(0, 0));
        outImg->setMaximumSize(QSize(16777215, 400));
        outImg->setStyleSheet(QString::fromUtf8(""));
        outImg->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(outImg);

        justFrame = new QLabel(widget_3);
        justFrame->setObjectName("justFrame");
        justFrame->setGeometry(QRect(820, 70, 361, 161));
        justFrame->setStyleSheet(QString::fromUtf8("#justFrame{\n"
"border: 2px dashed #fff\n"
"}"));
        justFrame->setFrameShape(QFrame::NoFrame);
        justFrame->setAlignment(Qt::AlignCenter);
        rotateRight = new QPushButton(widget_3);
        rotateRight->setObjectName("rotateRight");
        rotateRight->setGeometry(QRect(1190, 480, 32, 32));
        rotateRight->setFont(font4);
        rotateRight->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 50px;\n"
"	border: none;\n"
"	color:#fff;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background: none;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/icons/rotate_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        rotateRight->setIcon(icon4);
        rotateRight->setIconSize(QSize(32, 32));
        MainWindow->setCentralWidget(centralwidget);
        widget_3->raise();
        widget->raise();
        widget_2->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(loadImgBtn, saveImgBtn);
        QWidget::setTabOrder(saveImgBtn, invertFilter);
        QWidget::setTabOrder(invertFilter, rotateLeft);
        QWidget::setTabOrder(rotateLeft, sunLightFilter);
        QWidget::setTabOrder(sunLightFilter, purpleFilter);
        QWidget::setTabOrder(purpleFilter, clearImg);
        QWidget::setTabOrder(clearImg, undoBtn);
        QWidget::setTabOrder(undoBtn, redoBtn);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad_Image->setText(QCoreApplication::translate("MainWindow", "Load Image", nullptr));
        invertFilter->setText(QCoreApplication::translate("MainWindow", "Invert Colors", nullptr));
        sunLightFilter->setText(QCoreApplication::translate("MainWindow", "Sunlight", nullptr));
        purpleFilter->setText(QCoreApplication::translate("MainWindow", "Purple Color", nullptr));
        oilFilter->setText(QCoreApplication::translate("MainWindow", "Oil Painting", nullptr));
        blurFilter->setText(QCoreApplication::translate("MainWindow", "Blur", nullptr));
        grayFilter->setText(QCoreApplication::translate("MainWindow", "Gray Scale", nullptr));
        sliderGroup->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        sliderText->setText(QCoreApplication::translate("MainWindow", "Value:", nullptr));
        sliderValue->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        filterApply->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        progressLabel->setText(QCoreApplication::translate("MainWindow", "Progress Label", nullptr));
        B_W_Filter->setText(QCoreApplication::translate("MainWindow", "BlackNWhite", nullptr));
        DetectFilter->setText(QCoreApplication::translate("MainWindow", "Detect Edges", nullptr));
        BrightFilter->setText(QCoreApplication::translate("MainWindow", "Brightness", nullptr));
        cropFilter->setText(QCoreApplication::translate("MainWindow", "Crop", nullptr));
        cropGroup->setTitle(QCoreApplication::translate("MainWindow", "Crop Filter", nullptr));
        cropApply->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        cropHeightLabel->setText(QCoreApplication::translate("MainWindow", "Frame Height:", nullptr));
        cropWidthLabel->setText(QCoreApplication::translate("MainWindow", "Frame Width:", nullptr));
        SkewFilter->setText(QCoreApplication::translate("MainWindow", "Skew", nullptr));
        FrameFilter->setText(QCoreApplication::translate("MainWindow", "Frame", nullptr));
        NeonFilter->setText(QCoreApplication::translate("MainWindow", "Neon Colors", nullptr));
        HorizontalFlip->setText(QCoreApplication::translate("MainWindow", "H Flip", nullptr));
        VerticalFlip->setText(QCoreApplication::translate("MainWindow", "V Flip", nullptr));
        oldtvFilter->setText(QCoreApplication::translate("MainWindow", "Old TV", nullptr));
        infraredFilter->setText(QCoreApplication::translate("MainWindow", "Infrared", nullptr));
        MergeFilter->setText(QCoreApplication::translate("MainWindow", "MergeWResize", nullptr));
        empossFilter->setText(QCoreApplication::translate("MainWindow", "Emposs", nullptr));
        MergeCrop->setText(QCoreApplication::translate("MainWindow", "MergeWCrop", nullptr));
        loadImgBtn->setText(QCoreApplication::translate("MainWindow", "Load Image", nullptr));
        clearImg->setText(QCoreApplication::translate("MainWindow", "Reset Image", nullptr));
        saveImgBtn->setText(QCoreApplication::translate("MainWindow", "Save  \360\237\222\276", nullptr));
        undoBtn->setText(QCoreApplication::translate("MainWindow", " Undo", nullptr));
#if QT_CONFIG(shortcut)
        undoBtn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        redoBtn->setText(QCoreApplication::translate("MainWindow", " Redo", nullptr));
#if QT_CONFIG(shortcut)
        redoBtn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        titleIcon->setText(QString());
        rotateLeft->setText(QString());
        resizeFilterBtn->setText(QCoreApplication::translate("MainWindow", "Resize \360\237\224\247", nullptr));
        widthLabel->setText(QCoreApplication::translate("MainWindow", "Width:", nullptr));
        heightLabel->setText(QCoreApplication::translate("MainWindow", "Height:", nullptr));
        resizeRatio->setText(QCoreApplication::translate("MainWindow", "Keep Aspect Ratio", nullptr));
        inImg->setText(QCoreApplication::translate("MainWindow", "Source Preview", nullptr));
        outImg->setText(QCoreApplication::translate("MainWindow", "Load an Image to see changes", nullptr));
        justFrame->setText(QCoreApplication::translate("MainWindow", "Drag to Crop", nullptr));
        rotateRight->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H