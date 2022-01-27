//
// Created by Administrator on 2022/1/27.
//

#ifndef QTAPP_MAINWINDOW_H
#define QTAPP_MAINWINDOW_H


#include <QMainWindow>
#include <QPushButton>

class MainWindow : public QMainWindow {
Q_OBJECT
public:

    explicit MainWindow();

private slots:

    void handleButton();

private:

    QPushButton *button;

};


#endif //QTAPP_MAINWINDOW_H
