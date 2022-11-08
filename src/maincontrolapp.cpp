#include "maincontrolapp.h"
#include "ui_maincontrolapp.h"

maincontrolapp::maincontrolapp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::maincontrolapp)
{
    ui->setupUi(this);
}

maincontrolapp::~maincontrolapp()
{
    delete ui;
}
