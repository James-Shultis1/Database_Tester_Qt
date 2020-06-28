#include "charsheet.h"

CharSheet::CharSheet(QWidget *parent) : QWidget(parent)
{
    lblName = new QLabel();
    lblName->setText("NAME");
    lblName->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    txtDesc = new QTextBrowser();
    txtDesc->setText("Hello this is /n a new Text ocument");
    txtDesc->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    vBoxLayout = new QVBoxLayout(this);
    vBoxLayout->addWidget(lblName);
    vBoxLayout->addWidget(txtDesc);

    parent->setLayout(vBoxLayout);

}
CharSheet::CharSheet(){

}

void CharSheet::mouseDoubleClickEvent(QMouseEvent *event)
{
    QDialog *dialog = new QDialog(this);
    dialog->open();

}
