#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>


class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:

    void paintEvent(QPaintEvent *);
};

#endif // WIDGET_H
