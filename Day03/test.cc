#include <iostream>
int main () {
    // int x = 3;
    // int* p= &x;
    // std::cout << *p <<"\n"<< p<< "\n"<<x;
    int x = 320;
    const auto& y = x;
    std::cout << x << "\n" << y<< std::endl;
    x = 780;
    std::cout << x << "\n" << y<< std::endl;
}