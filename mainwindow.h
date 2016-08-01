#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    float AreaOfTriangle( float a, float b, float c );

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
