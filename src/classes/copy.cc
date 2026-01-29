// copy constructor

/* #include <iostream>

// defult copy constructor
class MyClass
{
private:
    int x, y;

public:
    MyClass(int xx, int yy) : x{xx}, y{yy}
    {
    }
};

int main() {
    MyClass o1{1 , 2};
    MyClass o2 = o1; //defult copy constructor invocked
}
*/

#include <iostream>

class MyClass
{
private:
    int x, y;
public:
    MyClass(int xx, int yy) : x{xx}, y{yy}
    {
    };
    //user defined copy constructor
    MyClass(const MyClass& rhs) : x{rhs.x} , y{rhs.y}//initlized object with other objects member
    {
        std::cout << "User defined copy constructor invocked" << std::endl;
    };
};

int main() {
    MyClass o{1, 2};
    MyClass o2 =o;// user defined copy constructor invocked
}

