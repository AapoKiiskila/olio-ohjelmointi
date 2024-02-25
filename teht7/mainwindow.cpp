#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}

void MainWindow::timeout()
{
    qDebug() << "Timer on";
    updateProgressBar();
}


void MainWindow::on_btnSwitch1_clicked()
{
    if (currentPlayer == 1)
    {
        currentPlayer = 2;
        qDebug() << "Player 2";
    }
}


void MainWindow::on_btnSwitch2_clicked()
{
    if (currentPlayer == 2)
    {
        currentPlayer = 1;
        qDebug() << "Player 1";
    }
}


void MainWindow::on_btn120sec_clicked()
{
    if (pQTimer->isActive() == 0)
    {
    GameTime = 120;
    player1Time = GameTime;
    player2Time = GameTime;

    ui->progressBar1->setMaximum(GameTime);
    ui->progressBar2->setMaximum(GameTime);

    ui->progressBar1->setValue(player1Time);
    ui->progressBar2->setValue(player2Time);

    setGameInfoText("Ready to play",16);

    qDebug() <<"120 sec";
    }
}


void MainWindow::on_btn5min_clicked()
{
    if (pQTimer->isActive() == 0)
    {
    GameTime = 300;
    player1Time = GameTime;
    player2Time = GameTime;

    ui->progressBar1->setMaximum(GameTime);
    ui->progressBar2->setMaximum(GameTime);

    ui->progressBar1->setValue(player1Time);
    ui->progressBar2->setValue(player2Time);

    setGameInfoText("Ready to play",16);

    qDebug() <<"5 min";
    }
}


void MainWindow::on_btnStart_clicked()
{
    static bool running = false;

    if ((GameTime == 120 && pQTimer->isActive()==0) || (GameTime == 300 && pQTimer->isActive()==0))
    {
        if (!running)
        {
            running = true;
            connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
        }

        pQTimer->start(1000);

        setGameInfoText("Game ongoing",16);

        currentPlayer = 1;

        qDebug() << "Start";
    }
}


void MainWindow::on_btnStop_clicked()
{
    if (pQTimer->isActive() == 1)
    {
    pQTimer->stop();
    qDebug() << "Stop";
    qDebug() << "Timer off";

    currentPlayer = 0;
    GameTime = 0;
    player1Time = 0;
    player2Time = 0;
    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);

    setGameInfoText("New game via start button",16);
    }
}

void MainWindow::updateProgressBar()
{
    if (currentPlayer == 1 && pQTimer->isActive() == 1)
    {
        player1Time--;
        ui->progressBar1->setValue(player1Time);
    }

    if (currentPlayer == 2 && pQTimer->isActive() == 1)
    {
        player2Time--;
        ui->progressBar2->setValue(player2Time);
    }

    if (player1Time <= 0)
    {
        setGameInfoText("Player 2 WON!!",16);
        pQTimer->stop();
        currentPlayer = 0;
        GameTime = 0;

        qDebug() << "Timer off";
    }

    if (player2Time <= 0)
    {
        setGameInfoText("Player 1 WON!!",16);
        pQTimer->stop();
        currentPlayer = 0;
        GameTime = 0;

        qDebug() << "Timer off";
    }
}

void MainWindow::setGameInfoText(QString text, short size)
{
    QFont font("Comic Sans ms", size, QFont::Bold);
    ui->label->setFont(font);
    ui->label->setText(text);
}

