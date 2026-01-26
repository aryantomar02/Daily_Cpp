#include <iostream>
int main() {
    double arr[5] = { 1.23, 2.45, 8.52, 6.3, 10.15 };
    arr[0] = 2.34;
    arr[4] = 4.87;
    std::cout << "First array element is " << arr[0] << std::endl;
    std::cout << "Last array element is " << arr[4] << std::endl;
}