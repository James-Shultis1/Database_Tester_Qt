#include "lorewidget.h"
#include "ui_lorewidget.h"

LoreWidget::LoreWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoreWidget)
{
    ui->setupUi(this);
}

LoreWidget::~LoreWidget()
{
    delete ui;
}
