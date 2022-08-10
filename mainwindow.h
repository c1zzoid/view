#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QDebug>

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QPushButton *button = nullptr;


public:
    MainWindow(){
        setFixedSize(450,450);
        QWidget *widget = new QWidget;
        setCentralWidget(widget);
        widget->setStyleSheet("background-color:green");
        QGridLayout *lay = new QGridLayout(widget);
        button = new QPushButton ("Text");
        connect(button,&QPushButton::clicked,this,&MainWindow::printToConsole);
        lay->addWidget(button);
        button->setStyleSheet("background-color:red");
    }
    ~MainWindow(){

    }
private slots:
    void printToConsole() {
        qDebug() << "Hello world!";
    }
};

#endif // MAINWINDOW_H
