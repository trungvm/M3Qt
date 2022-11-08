#ifndef HELLOSCREEN_H
#define HELLOSCREEN_H

#include <QWidget>

namespace Ui {
class helloscreen;
}

class helloscreen : public QWidget
{
    Q_OBJECT

public:
    explicit helloscreen(QWidget *parent = nullptr);
    ~helloscreen();
signals:
        void loginClicked();
private:
    Ui::helloscreen *ui;
};

#endif // HELLOSCREEN_H
