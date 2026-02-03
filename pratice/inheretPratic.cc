#include <iostream>

class Base
{
private:
    int* baseptr;
public:
    Base() : baseptr(new int(1)) {std::cout << "Base Constructed" << std::endl;}
    virtual ~Base() {
        delete baseptr;
        std::cout << "Base distroyed" << std::endl;
    }
};

class Derived : public Base
{
private:
    int* derivedptr;
public:
    Derived() : derivedptr(new int(2)) {std::cout << "Derived Constructed" << std::endl;}
    ~Derived() {
        delete derivedptr;
        std::cout << "Derived distroyed" << std::endl;
    }
};

int main() {
    Base* p = new Derived();
    delete p;
}