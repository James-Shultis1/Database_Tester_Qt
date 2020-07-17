#include "prepmessages.h"
#include "ui_prepmessages.h"

PrepMessages::PrepMessages(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PrepMessages)
{
    ui->setupUi(this);
}

PrepMessages::~PrepMessages()
{
    delete ui;
}
