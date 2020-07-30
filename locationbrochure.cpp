#include "locationbrochure.h"
#include "ui_locationbrochure.h"

LocationBrochure::LocationBrochure(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LocationBrochure)
{
    ui->setupUi(this);
}

LocationBrochure::~LocationBrochure()
{
    delete ui;
}
