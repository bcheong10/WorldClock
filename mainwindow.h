#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_sgButton_clicked();

    void on_cnButton_clicked();

    void on_ukButton_clicked();

    void on_jpButton_clicked();

    void on_myButton_clicked();

    QString fetchWeatherData(const QUrl& url);

    QString fetchTimeData(const QUrl& url);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
