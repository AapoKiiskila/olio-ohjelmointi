#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();

private slots:
    void on_btnSwitch1_clicked();

    void on_btnSwitch2_clicked();

    void on_btn120sec_clicked();

    void on_btn5min_clicked();

    void on_btnStart_clicked();

    void on_btnStop_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *pQTimer;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short GameTime;
    void updateProgressBar();
    void setGameInfoText(QString,short);
};
#endif // MAINWINDOW_H
