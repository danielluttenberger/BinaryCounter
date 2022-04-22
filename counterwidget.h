#ifndef COUNTERWIDGET_H
#define COUNTERWIDGET_H

#include <QLCDNumber>
#include <QLabel>
#include <QTimer>
#include "gpio.h"

class CounterWidget : public QWidget
{
    Q_OBJECT

public:
    CounterWidget(QWidget *parent = nullptr);
    ~CounterWidget();

public slots:
    void updateCounter();

private:
     int m_zähler;
     int m_output;
     QTimer m_timer;
     Qpio = gpio;
     Qlist <bool> m_states;
     Qlist <bool> m_ledlights;
     Qlist <bool> LED;


};

#endif // COUNTERWIDGET_H
