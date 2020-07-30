#ifndef LOCATIONBROCHURE_H
#define LOCATIONBROCHURE_H

#include <QWidget>

namespace Ui {
class LocationBrochure;
}

class LocationBrochure : public QWidget
{
    Q_OBJECT

public:
    explicit LocationBrochure(QWidget *parent = nullptr);
    ~LocationBrochure();

private:
    Ui::LocationBrochure *ui;
};

#endif // LOCATIONBROCHURE_H
