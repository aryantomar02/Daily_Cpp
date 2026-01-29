#include <iostream>
class MyClass
{
public:
    int x, y;
    MyClass(int xx, int yy) //: x{xx}, y{yy} // member initlizer list
    {
        x = xx;
        y = yy;
    };
};
int main() {
    MyClass o{1,2};// invke a user provided constructor
    //MyClass o{1, 2} // invoke a user defined constructor
    std::cout << o.x << " " << o.y << std::endl;
}