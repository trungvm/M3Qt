#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QWidget>

namespace Ui {
class loginscreen;
}

class loginscreen : public QWidget
{
    Q_OBJECT

public:
    explicit loginscreen(QWidget *parent = nullptr);
    ~loginscreen();
signals:
    void helloClicked();
private:
    Ui::loginscreen *ui;
};

#endif // LOGINSCREEN_H
