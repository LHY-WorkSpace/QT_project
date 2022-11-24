#include "btn.h"
#include <QDebug>

Btn::Btn(QWidget *parent)
    : QPushButton{parent}
{
    qDebug() << "Btn 构造";
}


Btn::~Btn()
{
    qDebug() << "Btn 析构";
}

Btn::Size()
{

}
