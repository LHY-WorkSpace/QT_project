#include "widget.h"
#include "ui_widget.h"
#include "btn_ui.h"
#include "led.h"
#include <QPushButton>
#include <QDebug>
Widget::Widget(QWidget *parent): QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);

    Btn_UI * AA = new Btn_UI(this);
    AA->setText("AA");
    AA->resize(50,50);
    AA->move(10,100);

    LED *led = new LED(this);
    led->resize(50,50);
    led->move(100,100);
    led->setText("关");
    led->show();

    connect(AA,&Btn_UI::Btn_Pressed,led,&LED::LED_ON);
    emit AA->Btn_Pressed();
}




Widget::~Widget()
{
    delete ui;
    qDebug() << "Widget 析构";
}

