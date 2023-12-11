#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btn_1, &QPushButton::clicked, this, &MainWindow::clicked_one);
    connect(ui->btn_2, &QPushButton::clicked, this, &MainWindow::clicked_two);
    connect(ui->btn_3, &QPushButton::clicked, this, &MainWindow::clicked_three);
    connect(ui->btn_4, &QPushButton::clicked, this, &MainWindow::clicked_four);
    connect(ui->btn_5, &QPushButton::clicked, this, &MainWindow::clicked_five);
    connect(ui->btn_6, &QPushButton::clicked, this, &MainWindow::clicked_six);
    connect(ui->btn_7, &QPushButton::clicked, this, &MainWindow::clicked_seven);
    connect(ui->btn_8, &QPushButton::clicked, this, &MainWindow::clicked_eight);
    connect(ui->btn_9, &QPushButton::clicked, this, &MainWindow::clicked_nine);
    connect(ui->btn_0, &QPushButton::clicked, this, &MainWindow::clicked_zero);
    connect(ui->btn_answer, &QPushButton::clicked, this, &MainWindow::clicked_answer);
    connect(ui->btn_decimal, &QPushButton::clicked, this, &MainWindow::clicked_decimal);
    connect(ui->btn_clear, &QPushButton::clicked, this, &MainWindow::clicked_clear);
    connect(ui->btn_add, &QPushButton::clicked, this, &MainWindow::clicked_add);
    connect(ui->btn_subtract, &QPushButton::clicked, this, &MainWindow::clicked_subtract);
    connect(ui->btn_multiply, &QPushButton::clicked, this, &MainWindow::clicked_multiply);
    connect(ui->btn_divide, &QPushButton::clicked, this, &MainWindow::clicked_divide);
    connect(ui->btn_parentheses_left, &QPushButton::clicked, this, &MainWindow::clicked_parentheses_left);
    connect(ui->btn_parentheses_right, &QPushButton::clicked, this, &MainWindow::clicked_parentheses_right);
    connect(ui->btn_equals, &QPushButton::clicked, this, &MainWindow::clicked_equals);
}

long double MainWindow::getAnswer() {
    return this->answer;
}

void MainWindow::setInput(std::string input) {
    this->inputText = input;
    this->ui->textbox_input->setText(QString(this->inputText.c_str()));
}

void MainWindow::addInput(std::string digit) {
    this->inputText += digit;
    this->setInput(this->inputText);
}

void MainWindow::addInput(char digit) {
    this->inputText += digit;
    this->setInput(this->inputText);
}

void MainWindow::clicked_one() {
    this->addInput("1");
}
void MainWindow::clicked_two() {
    this->addInput("2");
}
void MainWindow::clicked_three() {
    this->addInput("3");
}
void MainWindow::clicked_four() {
    this->addInput("4");
}
void MainWindow::clicked_five() {
    this->addInput("5");
}
void MainWindow::clicked_six() {
    this->addInput("6");
}
void MainWindow::clicked_seven() {
    this->addInput("7");
}
void MainWindow::clicked_eight() {
    this->addInput("8");
}
void MainWindow::clicked_nine() {
    this->addInput("9");
}
void MainWindow::clicked_zero() {
    this->addInput("0");
}
void MainWindow::clicked_answer() {}
void MainWindow::clicked_decimal() {
    this->addInput(".");
}
void MainWindow::clicked_clear() {
    this->setInput("");
}
void MainWindow::clicked_add() {
    this->addInput(" + ");
}
void MainWindow::clicked_subtract() {
    this->addInput(" - ");
}
void MainWindow::clicked_multiply() {
    this->addInput(" * ");
}
void MainWindow::clicked_divide() {
    this->addInput(" / ");
}
void MainWindow::clicked_parentheses_left() {
    this->addInput("(");
}
void MainWindow::clicked_parentheses_right() {
    this->addInput(")");
}
void MainWindow::clicked_equals() {

}



MainWindow::~MainWindow()
{
    delete ui;
}
