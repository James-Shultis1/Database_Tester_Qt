#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    boxLayout = ui->horizontalLayout;
    for (int i= 0; i< 15; i++) {
        CharSheet *charaSheet = new CharSheet(this);
        boxLayout->addWidget(charaSheet);


    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

