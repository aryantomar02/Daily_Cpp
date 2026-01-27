#include <iostream>

int main()
{
    int x = 123;  // automatic storage duration

    std::cout << "The value with an automatic storage duration is: "
              << x << '\n';

    int* p = new int{x};  // dynamic storage duration

    std::cout << "The value with a dynamic storage duration is: "
              << *p << '\n';

    delete p;   // free dynamically allocated memory
    p = nullptr; // good practice

    return 0;
} // end of scope
