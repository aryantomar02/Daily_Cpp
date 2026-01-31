/* 
#include <iostream>
class Box
{
private:
    int x;
    // char c;
    // double d;
    // bool b;
public:
    // void printmsg();
    void setx(int myvalue)
    {
        x = myvalue;
    }
    int getx() 
    {
        return x;
    }
};

// void Box::printmsg() {
//     std::cout << "Hello, world" <<std::endl;
// };

int main() {
    Box obj;
    obj.setx(123);
    std::cout << obj.getx();
//     obj.printmsg();
}
 
#include <iostream>

class myclass
{
private:
    int x;
    double d;
public:
    myclass(int xx, double dd);
    myclass(const myclass& rhs);
    void printdata();
    ~myclass();
};

myclass::myclass(int xx, double dd) : x{xx}, d{dd}
{
}

myclass::myclass(const myclass& rhs) : x{rhs.x}, d{rhs.d} 
{
}

void myclass::printdata() {
    std::cout << "x: "<< x << ", d: " <<d << std::endl;
}

myclass::~myclass()
{
    std::cout << "Distructor invocked " <<std::endl;
}

int main() {
    myclass o(1, 1.0);
    myclass o2 =o;
    o.printdata();
}


#include <iostream>
#include <string>
#include <utility>

class MyClass
{   
    double d;
    std::string s;
public:
    MyClass(double dd, std::string ss) :d{dd} , s{ss} {

    }

    MyClass(MyClass&& rhs) noexcept : d{std::move(rhs.d)} , s{std::move(rhs.s)} {

    }
    ~MyClass(){}

    void printdata () {
        std::cout << "double " << d << " | string " << s << std::endl;
    }
};

int main() {
    MyClass o1(2.0, "This was in object 1");
    MyClass o2 = std::move(o1);
    o2.printdata();
}
*/

#include <iostream>
#include <utility>

class decrement
{
private:
    int x;
    double y;
public:
    decrement(int xx, double yy) :x{xx}, y{yy}
    {
    }
    void printdata() 
    {
        std::cout << "x: " << x << " | y: " << y << std::endl;
    }
    decrement& operator-=(const decrement& rhs) noexcept 
    {
        this->x -= rhs.x;
        this->y -= rhs.y;
        return *this;
    }
    friend decrement operator-(decrement lhs,const decrement& rhs)
    {
        lhs -= rhs;
        return lhs;
    }
};

int main() {
    decrement obj1(3, 3.0);
    decrement obj2(4, 4.0);
    decrement obj3 = obj2 - obj1;
    obj3.printdata();
}