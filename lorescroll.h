#ifndef LORESCROLL_H
#define LORESCROLL_H

#include <QWidget>

namespace Ui {
class LoreScroll;
}

class LoreScroll : public QWidget
{
    Q_OBJECT

public:
    explicit LoreScroll(QWidget *parent = nullptr);
    ~LoreScroll();

private:
    Ui::LoreScroll *ui;
};

#endif // LORESCROLL_H
