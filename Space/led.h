#ifndef LED_H
#define LED_H

#include <QWidget>
#include <QPushButton>
class LED : public QPushButton
{
    Q_OBJECT
public:
    explicit LED(QWidget *parent = nullptr);
    ~LED();
     void LED_ON();
signals:


};

#endif // LED_H
