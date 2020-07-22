#include "npcdialog.h"
#include "ui_npcdialog.h"

NPCDialog::NPCDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NPCDialog)
{
    ui->setupUi(this);
}

NPCDialog::~NPCDialog()
{
    delete ui;
}
