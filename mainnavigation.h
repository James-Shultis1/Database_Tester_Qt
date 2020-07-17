#ifndef MAINNAVIGATION_H
#define MAINNAVIGATION_H

#include <QWidget>

namespace Ui {
class MainNavigation;
}

class MainNavigation : public QWidget
{
    Q_OBJECT

public:
    explicit MainNavigation(QWidget *parent = nullptr);
    ~MainNavigation();

private:
    Ui::MainNavigation *ui;
};

#endif // MAINNAVIGATION_H
