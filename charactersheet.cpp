#include "charactersheet.h"
#include "ui_charactersheet.h"

characterSheet::characterSheet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::characterSheet)
{
    ui->setupUi(this);
}

characterSheet::~characterSheet()
{
    delete ui;
}
