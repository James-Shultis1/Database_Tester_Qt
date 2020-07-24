#ifndef CHARACTERSHEET_H
#define CHARACTERSHEET_H

#include <QWidget>

namespace Ui {
class characterSheet;
}

class characterSheet : public QWidget
{
    Q_OBJECT

public:
    explicit characterSheet(QWidget *parent = nullptr);
    ~characterSheet();

private:
    Ui::characterSheet *ui;
};

#endif // CHARACTERSHEET_H
