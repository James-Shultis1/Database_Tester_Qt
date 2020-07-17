#include "mainnavigation.h"
#include "ui_mainnavigation.h"

MainNavigation::MainNavigation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainNavigation)
{
    ui->setupUi(this);
}

MainNavigation::~MainNavigation()
{
    delete ui;
}
