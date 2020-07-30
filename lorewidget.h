#ifndef LOREWIDGET_H
#define LOREWIDGET_H

#include <QWidget>

namespace Ui {
class LoreWidget;
}

class LoreWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoreWidget(QWidget *parent = nullptr);
    ~LoreWidget();

private:
    Ui::LoreWidget *ui;
};

#endif // LOREWIDGET_H
