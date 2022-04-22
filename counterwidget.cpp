#include <QHBoxLayout>
#include "counterwidget.h"
#include "config.h"
#include "qDebug.h"

CounterWidget::CounterWidget(QWidget *parent)
    : QWidget(parent), m_count(0), m_timer(this), m_gpio(this)
{

    m_states = (0,0,0);
    m_ledlights = (0, 0, 0);

    setWindowTitle("BinaryCounter");
    resize(300, 200);
    QHBoxLayout* layout = new QHBoxLayout(this);
    setLayout(layout);

    // QLCDNumber zur Anzeige des Zaehlerstandes dezimal:
m_output->setDigitCounter(0);
m_output->set
layout->addWidget(m_output);

    connect(&m_timer, &QTimer::timeout, this, &CounterWidget::updateCounter);
    m_timer.start(T_UPDATE);
}
CounterWidget::dezimaltoBin()
{
    int n= m_zähler;
    for(int n =0; n>0; i++)
    {
        m_ledlights[i] = n%2;
        qDebug() << ledlights[i];
        n=n/2
    }
    LED();
}
CounterWidget::~CounterWidget()
{

}

void CounterWidget::LED()
{
    int cnt = 0;
    for (auto pin:LED) pio.set(pin, m_ledlights[cnt++]);
}

// Zaehlerstand im Widget und dual ueber LEDs anzeigen:
void CounterWidget::updateCounter()
{
int cnt = 0;
for(auto pin : BUTTON) m_states[cnt++]= gpio->Activated(pin);
{

if(m_states[0] == 1) m_zähler--;
if(m_states[1] == 1) m_zähler = 0;
if(m_states[2] == 1) m_zähler++;
if(m_count >= 15) m_zähler = 0;
if(m_count >= 0) m_zähler = 0;
m_output->display(m_zähler);
}
}


