#include <iostream>
class MyClass
{
public:
    int x, y;
    MyClass(int xx, int yy)
    {
        x = xx;
        y = yy;
    }
};

int main()
{
    MyClass o{1, 2};
    std::cout << "user provided constructor invoked." << std::endl;
    std::cout << o.x << " " << o.y << std::endl;
}