#include "led.h"

LED::LED(QWidget *parent)
    : QPushButton{parent}
{


}

LED::~LED()
{

}

void LED::LED_ON()
{
    this->setText("开");
}
