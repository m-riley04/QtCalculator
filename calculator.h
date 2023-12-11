#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <list>
#include <string>

class Calculator
{
public:
    Calculator();

    /*=== GETTERS ===*/
    long double getAnswer();
    std::list<std::string[2]> getHistory();

private:
    long double answer;
};

#endif // CALCULATOR_H
