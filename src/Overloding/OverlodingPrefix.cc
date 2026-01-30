#include<iostream>

class MyClass
{
private:
    int x;
    double d;
public:
    MyClass(int xx, double dd) : x{xx}, d{dd}
    {
    }

    MyClass& operator++()
    {
        ++x;
        ++d;
        std::cout << "prefix operator ++ invoked." << std::endl;

        return *this;
    }

    MyClass operator++(int)
    {
        MyClass temp(*this); //defult copy
        operator++();
        std::cout << "Postfix operator ++ invoked." << std::endl;
        return temp;
    }

    MyClass& operator+=(const MyClass& rhs) {
        this->x+=rhs.x;
        this->d+=rhs.d;

        return *this;
    }

};

MyClass operator+(MyClass lhs, const MyClass& rhs){
        lhs+=rhs;
        return lhs;
}


int main() {
    MyClass obj(1, 1.0);
    MyClass obj2(2, 2.0);
    MyClass obj3 = obj + obj2;
    obj+=obj2;
    std::cout << "Used the overloaded += operator." << std::endl;
}

