#ifndef CHARSHEET_H
#define CHARSHEET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QTextBrowser>
#include <QDialog>

class CharSheet : public QWidget
{
    Q_OBJECT
public:
    explicit CharSheet(QWidget *parent = nullptr);
    CharSheet();
protected:
    QLabel *lblName;
    QTextBrowser *txtDesc;
    QVBoxLayout *vBoxLayout;
    void mouseDoubleClickEvent(QMouseEvent *event);

signals:

};

#endif // CHARSHEET_H
