#include <iostream> 
int main () {
    double d = 2.24;
    double* p = &d;
    std::cout << "Value of d is " << *p << std::endl;
}