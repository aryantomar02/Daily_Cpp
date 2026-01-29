#include <iostream>

class Point
{
    int x , y;
public:
    Point(int xx, int yy) : x{xx} , y{yy}
    {    
    }
    Point() : x{0} ,y{0}
    {
    }
    void print() {
        std::cout << x << " " << y << std::endl;
    }
};

int main() {
    Point p1(1, 2);
    Point p2;
    p2 = p1;
    p2.print();   // output: 1 2
}

