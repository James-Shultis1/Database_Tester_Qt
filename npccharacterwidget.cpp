#include "npccharacterwidget.h"
#include "ui_npccharacterwidget.h"

NPCCharacterWidget::NPCCharacterWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NPCCharacterWidget)
{
    ui->setupUi(this);
}

NPCCharacterWidget::~NPCCharacterWidget()
{
    delete ui;
}
