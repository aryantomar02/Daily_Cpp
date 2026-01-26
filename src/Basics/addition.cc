#include <iostream>
/*
simple main function
*/
int main()
{
    std::cout << "Enter two numbers" << std::endl;
    int v1 = 0, v2 = 0;//inrtilazition
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    return 0;
}