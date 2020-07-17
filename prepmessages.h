#ifndef PREPMESSAGES_H
#define PREPMESSAGES_H

#include <QWidget>

namespace Ui {
class PrepMessages;
}

class PrepMessages : public QWidget
{
    Q_OBJECT

public:
    explicit PrepMessages(QWidget *parent = nullptr);
    ~PrepMessages();

private:
    Ui::PrepMessages *ui;
};

#endif // PREPMESSAGES_H
