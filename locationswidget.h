#ifndef LOCATIONSWIDGET_H
#define LOCATIONSWIDGET_H

#include <QWidget>

namespace Ui {
class LocationsWidget;
}

class LocationsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LocationsWidget(QWidget *parent = nullptr);
    ~LocationsWidget();

private:
    Ui::LocationsWidget *ui;
};

#endif // LOCATIONSWIDGET_H
