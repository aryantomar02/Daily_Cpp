#include <iostream>
int main() {
    int* p = new int[3];
    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    std::cout << "The values are: " << p[0] << p[1] << p[2] << std::endl;
    delete[] p;
    return 0;
}