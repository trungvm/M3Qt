#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_stackWidget = new QStackedWidget();

    m_loginscreen = new loginscreen(nullptr);
    m_helloscreen = new helloscreen(nullptr);
    m_maincontrolapp = new maincontrolapp(nullptr);

    m_stackWidget->addWidget(m_loginscreen);
    m_stackWidget->addWidget(m_helloscreen);
    m_stackWidget->addWidget(m_maincontrolapp);

    m_stackWidget->setCurrentWidget(m_helloscreen);

    setCentralWidget(m_stackWidget);

    connect(m_helloscreen, &helloscreen::loginClicked, this , [this]
    {
        m_stackWidget->setCurrentWidget(m_loginscreen);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

