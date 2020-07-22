#ifndef NPCDIALOG_H
#define NPCDIALOG_H

#include <QDialog>

namespace Ui {
class NPCDialog;
}

class NPCDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NPCDialog(QWidget *parent = nullptr);
    ~NPCDialog();

private:
    Ui::NPCDialog *ui;
};

#endif // NPCDIALOG_H
