#include "widget.h"
#include <QtMath>


Widget::Widget(QWidget *parent) :
    QWidget(parent)
{

}

Widget::~Widget()
{

}
void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setBrush(Qt::yellow);
    painter.drawRect(0,0,100,100);
    painter.shear(2,1);
    //painter.setBrush(Qt::red);
    painter.setBrush(QColor(qrand()%220,qrand()%255,qrand()%255));
    painter.drawRect(10,50,100,100);

}
