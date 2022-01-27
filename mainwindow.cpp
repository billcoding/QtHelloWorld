//
// Created by Administrator on 2022/1/27.
//

#include <QMessageBox>
#include "mainwindow.h"

MainWindow::MainWindow() {
    button = new QPushButton("Click", this);
    button->resize(200, 100);
    button->show();

    connect(button, &QPushButton::released, this, &MainWindow::handleButton);
}

void MainWindow::handleButton() {
    QMessageBox *box = new QMessageBox(nullptr);
    box->setText("Hello World");
    box->setWindowTitle("Info");
    box->show();
}