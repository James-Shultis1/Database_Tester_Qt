#include "locationswidget.h"
#include "ui_locationswidget.h"

LocationsWidget::LocationsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LocationsWidget)
{
    ui->setupUi(this);
}

LocationsWidget::~LocationsWidget()
{
    delete ui;
}
