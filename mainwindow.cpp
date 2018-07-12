#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    updatePassImages();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::updatePassImages()
//{
//    QWidget* container= new QWidget;

//    QHBoxLayout *layout = new QHBoxLayout(container);

//    layout->addWidget(new QPushButton("One"));
//    layout->addWidget(new QPushButton("Two"));
//    layout->addWidget(new QPushButton("Three"));
//    layout->addWidget(new QPushButton("Four"));
//    layout->addWidget(new QPushButton("Five"));

//    ui->passScrollArea->setWidget(container);

//}

void MainWindow::updatePassImages()
{
    QPushButton *button1 = new QPushButton("One");
    QPushButton *button2 = new QPushButton("Two");
    QPushButton *button3 = new QPushButton("Three");
    QPushButton *button4 = new QPushButton("Four");
    QPushButton *button5 = new QPushButton("Five");

    QWidget *container = new QWidget();
    QHBoxLayout *layout = new QHBoxLayout(container);

    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);
    layout->addWidget(button4);
    layout->addWidget(button5);

    ui->scrollArea->setWidget(container);
}
