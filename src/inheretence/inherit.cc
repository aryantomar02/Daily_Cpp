#include<iostream>

class Base {
public:
    virtual ~Base() {
        std::cout << "Base destroyed" << std::endl;
    }
};

class derived : public Base {
private:
    int* heapInt;
public:
    derived(int value) {
        heapInt = new int(value);
        std::cout << "Derived: Allocated heapInt with value " << *heapInt << std::endl;
    }
    ~derived() {
        std::cout << "Derived destroyed" << std::endl;
    }
};

int main() {
    Base* p= new derived(42);
    delete p;
    return 0;
}