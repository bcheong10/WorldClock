/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLCDNumber *timeLCD;
    QLCDNumber *tempLCD;
    QPushButton *sgButton;
    QPushButton *cnButton;
    QPushButton *ukButton;
    QPushButton *jpButton;
    QPushButton *myButton;
    QLabel *countryImage;
    QLabel *countryImage_2;
    QLabel *countryImage_3;
    QLabel *countryImage_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(801, 497);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        timeLCD = new QLCDNumber(centralwidget);
        timeLCD->setObjectName("timeLCD");
        timeLCD->setGeometry(QRect(310, 160, 181, 71));
        tempLCD = new QLCDNumber(centralwidget);
        tempLCD->setObjectName("tempLCD");
        tempLCD->setGeometry(QRect(310, 250, 181, 71));
        sgButton = new QPushButton(centralwidget);
        sgButton->setObjectName("sgButton");
        sgButton->setGeometry(QRect(10, 390, 141, 51));
        QFont font;
        font.setPointSize(12);
        sgButton->setFont(font);
        cnButton = new QPushButton(centralwidget);
        cnButton->setObjectName("cnButton");
        cnButton->setGeometry(QRect(170, 390, 141, 51));
        cnButton->setFont(font);
        ukButton = new QPushButton(centralwidget);
        ukButton->setObjectName("ukButton");
        ukButton->setGeometry(QRect(330, 390, 141, 51));
        ukButton->setFont(font);
        jpButton = new QPushButton(centralwidget);
        jpButton->setObjectName("jpButton");
        jpButton->setGeometry(QRect(490, 390, 141, 51));
        jpButton->setFont(font);
        myButton = new QPushButton(centralwidget);
        myButton->setObjectName("myButton");
        myButton->setGeometry(QRect(650, 390, 141, 51));
        myButton->setFont(font);
        countryImage = new QLabel(centralwidget);
        countryImage->setObjectName("countryImage");
        countryImage->setGeometry(QRect(350, 20, 101, 101));
        countryImage_2 = new QLabel(centralwidget);
        countryImage_2->setObjectName("countryImage_2");
        countryImage_2->setGeometry(QRect(220, 160, 81, 71));
        QFont font1;
        font1.setPointSize(22);
        countryImage_2->setFont(font1);
        countryImage_3 = new QLabel(centralwidget);
        countryImage_3->setObjectName("countryImage_3");
        countryImage_3->setGeometry(QRect(120, 240, 181, 71));
        countryImage_3->setFont(font1);
        countryImage_4 = new QLabel(centralwidget);
        countryImage_4->setObjectName("countryImage_4");
        countryImage_4->setGeometry(QRect(500, 250, 51, 71));
        countryImage_4->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 801, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sgButton->setText(QCoreApplication::translate("MainWindow", "Singapore", nullptr));
        cnButton->setText(QCoreApplication::translate("MainWindow", "Canada", nullptr));
        ukButton->setText(QCoreApplication::translate("MainWindow", "UK", nullptr));
        jpButton->setText(QCoreApplication::translate("MainWindow", "Japan", nullptr));
        myButton->setText(QCoreApplication::translate("MainWindow", "Malaysia", nullptr));
        countryImage->setText(QString());
        countryImage_2->setText(QCoreApplication::translate("MainWindow", "Time:", nullptr));
        countryImage_3->setText(QCoreApplication::translate("MainWindow", "Temperature:", nullptr));
        countryImage_4->setText(QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
