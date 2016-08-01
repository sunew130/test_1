#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

float MainWindow::AreaOfTriangle( float a, float b, float c )
{
    float p = ( a + b + c ) / 2.0f;
    return sqrt( p * ( p - a ) * ( p - b ) * ( p - c ) );
}
