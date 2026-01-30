#include<iostream>

class MyClass
{
private:
    int x;
    double d;
public:
    MyClass() : x{0}, d{0.0}
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
    
};

int main() {
    MyClass obj;
    obj++;
    obj.operator++(0);
}

