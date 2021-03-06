#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QJsonDocument>
#include <QJsonObject>

#include <QDesktopServices>
#include <QUrl>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QSerialPort serial;

    QString power;
    QString volt;
    QString amper;

    bool eat;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void dadosRecebidos();
    void on_btnPlug_clicked();

    void on_btnAction_clicked();

    void on_btnEmailEdu_clicked();

    void on_btnEmailNeto_clicked();

    void on_btnGithub_clicked();

    void on_btnSite_clicked();

private:
    Ui::MainWindow *ui;
    bool plugStatus = false;
    bool action = false;
};
#endif // MAINWINDOW_H
