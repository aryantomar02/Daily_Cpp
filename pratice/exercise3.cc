#include <iostream>
#include <string>

//Function Decleration
void printmsg();
int multiplication(int x, int y);

//Function definition with decleration
void custommsg(const std::string& message) {
    std::cout << "the argument you used is: " << message << std::endl;
}

int division(int a, int b) {
    return a/b;
}

double division(double a, double b) {
    return a/b;
}

//Function call
int main () {
    printmsg();
    int mul=multiplication(2,3);
    std::cout << "Multiplication is:" << mul << std::endl;
    std::string mymessage = "I love skibidi tolits";
    custommsg(mymessage);
    int intiger_devision = division(9,2);
    double double_division = division(9.0,2.0);
    std::cout << "Intiger division: " << intiger_devision << std::endl;
    std::cout << "Float division: " << double_division << std::endl;
}

//Function defination
void printmsg() {
        std::cout << "Hello from function" << std::endl;
}

int multiplication(int x, int y) {
    return x*y;
}