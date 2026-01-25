#include <iostream>
int main()
{
    std::cout << "Enter range" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    if (v1 < v2)
    {
        while (v1 <= v2)
        {
            std::cout << v1 << std::endl;
            v1++;
        }
    }
    else
    {
        std::cout << "Invalid range!" << std::endl;
    }
    return 0;
}