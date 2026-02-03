#include<iostream>

class Base {
public:
    virtual ~Base() {
        std::cout << "Base destroyed" << std::endl;
    }
};

class Derived : public Base {
private:
    int* heapInt;
public:
    Derived(int value) {
        heapInt = new int(value);
        std::cout << "Derived: Allocated heapInt with value " << *heapInt << std::endl;
    }
    ~Derived() {
        delete heapInt;
        heapInt = nullptr;
        std::cout << "Derived destroyed" << std::endl;
    }
};

int main() {
    Base* p= new Derived(42);
    delete p;
    return 0;
}