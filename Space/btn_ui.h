#ifndef BTN_UI_H
#define BTN_UI_H

#include <QWidget>
#include <QPushButton>

class Btn_UI : public QPushButton
{
    Q_OBJECT
public:
    explicit Btn_UI(QWidget *parent = nullptr);
    ~Btn_UI();
signals:
    void Btn_Pressed();

};

#endif // BTN_UI_H
