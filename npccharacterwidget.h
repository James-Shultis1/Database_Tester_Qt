#ifndef NPCCHARACTERWIDGET_H
#define NPCCHARACTERWIDGET_H

#include <QWidget>

namespace Ui {
class NPCCharacterWidget;
}

class NPCCharacterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NPCCharacterWidget(QWidget *parent = nullptr);
    ~NPCCharacterWidget();

private:
    Ui::NPCCharacterWidget *ui;
};

#endif // NPCCHARACTERWIDGET_H
