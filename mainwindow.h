#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Button Commands
    void clicked_one();
    void clicked_two();
    void clicked_three();
    void clicked_four();
    void clicked_five();
    void clicked_six();
    void clicked_seven();
    void clicked_eight();
    void clicked_nine();
    void clicked_zero();
    void clicked_answer();
    void clicked_decimal();
    void clicked_clear();
    void clicked_add();
    void clicked_subtract();
    void clicked_multiply();
    void clicked_divide();
    void clicked_parentheses_left();
    void clicked_parentheses_right();
    void clicked_equals();

    // Setters
    void setInput(std::string input);
    void addInput(std::string digit);
    void addInput(char digit);

    // Getters
    long double getAnswer();

private:
    std::list<std::string> history;
    long double answer;
    std::string inputText;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
