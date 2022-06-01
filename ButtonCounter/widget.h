#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QTimer>
#include <QLCDNumber>
#include "gpio.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void updateButtonState();

private:
    QList<QLabel*> m_input_display;
    QLCDNumber* counterLcd = new QLCDNumber(3,this);
    QTimer* m_timer;
    gpio* m_gpio;
    int counter = 0;
    bool able = 1;
    int prestate[3];
};

#endif // WIDGET_H
