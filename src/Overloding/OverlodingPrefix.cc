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
        std::cout << "++Operator invoked" << std::endl;

        return *this;
    }
    
};

int main() {
    MyClass obj;
    ++obj;
    obj.operator++();
}

