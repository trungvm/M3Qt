#ifndef MAINCONTROLAPP_H
#define MAINCONTROLAPP_H

#include <QWidget>

namespace Ui {
class maincontrolapp;
}

class maincontrolapp : public QWidget
{
    Q_OBJECT

public:
    explicit maincontrolapp(QWidget *parent = nullptr);
    ~maincontrolapp();

private:
    Ui::maincontrolapp *ui;
};

#endif // MAINCONTROLAPP_H
