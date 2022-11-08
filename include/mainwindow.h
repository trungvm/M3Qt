#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "loginscreen.h"
#include "helloscreen.h"
#include "maincontrolapp.h"

#include <QMainWindow>
#include <QStackedWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

private:
    Ui::MainWindow *ui;
    helloscreen* m_helloscreen;
    loginscreen* m_loginscreen;
    maincontrolapp* m_maincontrolapp;
    QStackedWidget* m_stackWidget;
};
#endif // MAINWINDOW_H
