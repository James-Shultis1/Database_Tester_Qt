#include "lorescroll.h"
#include "ui_lorescroll.h"

LoreScroll::LoreScroll(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoreScroll)
{
    ui->setupUi(this);
}

LoreScroll::~LoreScroll()
{
    delete ui;
}
