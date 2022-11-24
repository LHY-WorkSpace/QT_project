#ifndef BTN_H
#define BTN_H

#include <QPushButton>

class Btn : public QPushButton
{
    Q_OBJECT
public:
    explicit Btn(QWidget *parent = nullptr);
    ~Btn();
signals:
    void Size();

};

#endif // BTN_H
