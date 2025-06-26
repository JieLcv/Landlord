#include "mybutton.h"
#include <QMouseEvent>
#include <QPainter>
#include <QDebug>
MyButton::MyButton(QWidget *parent) : QPushButton(parent)
{
}

void MyButton::setImage(QString normal, QString hover, QString pressed)
{

    m_normal = normal;
    m_hover = hover;
    m_pressed = pressed;
    m_pixmap.load(m_normal);
    update();//pixmap变化后，不会自动绘图，需要更新绘图事件，调用paintEvent
}

void MyButton::mousePressEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::LeftButton)
    {
        m_pixmap.load(m_pressed);
        update();
    }
    QPushButton::mousePressEvent(ev);
}

void MyButton::mouseReleaseEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::LeftButton)
    {
        m_pixmap.load(m_normal);
        update();
    }
    QPushButton::mouseReleaseEvent(ev);
}

void MyButton::enterEvent(QEvent *ev)
{
    //解决unused警告，可以用宏函数Q_UNUSED，或者删除形参event变量，留下QPaintEvent *
    Q_UNUSED(ev)
    m_pixmap.load(m_hover);
    update();
}

void MyButton::leaveEvent(QEvent *ev)
{
    //解决unused警告，可以用宏函数Q_UNUSED，或者删除形参event变量，留下QPaintEvent *
    Q_UNUSED(ev)
    m_pixmap.load(m_normal);
    update();
}

void MyButton::paintEvent(QPaintEvent *ev)
{
    //解决unused警告，可以用宏函数Q_UNUSED，或者删除形参event变量，留下QPaintEvent *
    Q_UNUSED(ev)
    QPainter p(this);
    p.drawPixmap(rect(), m_pixmap);
}
