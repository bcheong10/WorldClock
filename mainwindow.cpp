#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDateTime>
#include <QLabel>
#include <QPixmap>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setStyleSheet("background-color: darkgrey;");
    this->setWindowTitle("World Clock/Weather GUI");
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::fetchWeatherData(const QUrl& url)
{

    QNetworkAccessManager* manager = new QNetworkAccessManager(this);
    QEventLoop loop;

    connect(manager, &QNetworkAccessManager::finished, &loop, &QEventLoop::quit);

    QNetworkReply *reply = manager->get(QNetworkRequest(url));
    loop.exec();

    QByteArray data = reply->readAll();
    // Parse JSON data
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject obj = doc.object();
    // Extract parts of the data
    QJsonValue tempValue = doc.object()["days"].toArray()[0].toObject()["temp"]; // Replace "key" with the key you want to extract
    QString tempString = QString::number(tempValue.toDouble());


    // qDebug() << tempString;
    reply->deleteLater();
    return tempString;
}

QString MainWindow::fetchTimeData(const QUrl& url)
{

    QNetworkAccessManager* manager = new QNetworkAccessManager(this);
    QEventLoop loop;

    connect(manager, &QNetworkAccessManager::finished, &loop, &QEventLoop::quit);

    QNetworkReply *reply = manager->get(QNetworkRequest(url));
    loop.exec();

    QByteArray data = reply->readAll();
    // Parse JSON data
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject obj = doc.object();
    // Extract parts of the data
    QString timeValue = doc.object()["datetime"].toString();
    QString timeSliced = timeValue.mid(11, 5);


    // qDebug() << timeSliced;
    reply->deleteLater();
    return timeSliced;
}


void MainWindow::on_sgButton_clicked()
{
    QPixmap sg_icon(":/all_assets/assets/singapore.png");
    QPixmap scaled_sg_icon = sg_icon.scaled(100, 100, Qt::KeepAspectRatio);

    ui->countryImage->setPixmap(scaled_sg_icon);

    QUrl url("https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/Singapore/today?unitGroup=metric&include=current&key=SDW5ZJBCJSFXED7BD9V3NH563&contentType=json");
    QUrl url2("http://worldtimeapi.org/api/timezone/Asia/Singapore");

    QString temp = fetchWeatherData(url);
    QString time = fetchTimeData(url2);

    ui->tempLCD->display(temp);
    ui->timeLCD->display(time);
}

void MainWindow::on_cnButton_clicked()
{
    QPixmap cn_icon(":/all_assets/assets/canada.png");
    QPixmap scaled_cn_icon = cn_icon.scaled(100, 100, Qt::KeepAspectRatio);

    ui->countryImage->setPixmap(scaled_cn_icon);

    QUrl url("https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/Canada/today?unitGroup=metric&include=current&key=SDW5ZJBCJSFXED7BD9V3NH563&contentType=json");
    QUrl url2("https://worldtimeapi.org/api/timezone/Etc/GMT+4");

    // Fetch weather data when the button is pressed
    QString temp = fetchWeatherData(url);
    QString time = fetchTimeData(url2);

    ui->tempLCD->display(temp);
    ui->timeLCD->display(time);
}

void MainWindow::on_ukButton_clicked()
{
    QPixmap uk_icon(":/all_assets/assets/united-kingdom.png");
    QPixmap scaled_uk_icon = uk_icon.scaled(100, 100, Qt::KeepAspectRatio);

    ui->countryImage->setPixmap(scaled_uk_icon);

    QUrl url("https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/United%20Kingdom/today?unitGroup=metric&include=current&key=SDW5ZJBCJSFXED7BD9V3NH563&contentType=json");
    QUrl url2("https://worldtimeapi.org/api/timezone/Europe/London");

    // Fetch weather data when the button is pressed
    QString temp = fetchWeatherData(url);
    QString time = fetchTimeData(url2);

    ui->tempLCD->display(temp);
    ui->timeLCD->display(time);
}


void MainWindow::on_jpButton_clicked()
{
    QPixmap jp_icon(":/all_assets/assets/japan.png");
    QPixmap scaled_jp_icon = jp_icon.scaled(100, 100, Qt::KeepAspectRatio);

    ui->countryImage->setPixmap(scaled_jp_icon);

    QUrl url("https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/Japan/today?unitGroup=metric&include=current&key=SDW5ZJBCJSFXED7BD9V3NH563&contentType=json");
    QUrl url2("https://worldtimeapi.org/api/timezone/Asia/Tokyo");

    // Fetch weather data when the button is pressed
    QString temp = fetchWeatherData(url);
    QString time = fetchTimeData(url2);

    ui->tempLCD->display(temp);
    ui->timeLCD->display(time);
}


void MainWindow::on_myButton_clicked()
{
    QPixmap my_icon(":/all_assets/assets/malaysia.png");
    QPixmap scaled_my_icon = my_icon.scaled(100, 100, Qt::KeepAspectRatio);

    ui->countryImage->setPixmap(scaled_my_icon);

    QUrl url("https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/Malaysia/today?unitGroup=metric&include=current&key=SDW5ZJBCJSFXED7BD9V3NH563&contentType=json");
    QUrl url2("https://worldtimeapi.org/api/timezone/Asia/Singapore");

    // Fetch weather data when the button is pressed
    QString temp = fetchWeatherData(url);
    QString time = fetchTimeData(url2);

    ui->tempLCD->display(temp);
    ui->timeLCD->display(time);
}

