#include "btn_ui.h"
#include<QDebug>
Btn_UI::Btn_UI(QWidget *parent)
    : QPushButton{parent}
{

}

Btn_UI::~Btn_UI()
{
    qDebug()<<"释放UI";
}
