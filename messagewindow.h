#ifndef MESSAGEWINDOW_H
#define MESSAGEWINDOW_H

#include <QMainWindow>

namespace Ui {
class messagewindow;
}

class messagewindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit messagewindow(QWidget *parent = nullptr);
    ~messagewindow();

private:
    Ui::messagewindow *ui;
};

#endif // MESSAGEWINDOW_H
