#include "messagewindow.h"
#include "ui_messagewindow.h"

messagewindow::messagewindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::messagewindow)
{
    ui->setupUi(this);
}

messagewindow::~messagewindow()
{
    delete ui;
}
