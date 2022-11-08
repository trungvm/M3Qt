#include "helloscreen.h"
#include "ui_helloscreen.h"

helloscreen::helloscreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::helloscreen)
{
    ui->setupUi(this);
    connect(ui->helloButton, &QPushButton::clicked,this,[this]
    {
     emit loginClicked();
    });
}

helloscreen::~helloscreen()
{
    delete ui;
}
