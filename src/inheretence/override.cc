#include <iostream>

class Base
{
public:
    virtual ~Base() = default;
    virtual void act() const = 0;
};

class DervivedA : public Base
{
public:
    void act() const override
    {
        std::cout << "DerivedA acting" << std::endl;
    }
};

class DervivedB : public Base
{
public:
    void act() const override
    {
        std::cout << "DerivedA acting" << std::endl;
    }
};

int main()
{
    Base *a = new DervivedA();
    Base *b = new DervivedB();

    a->act();
    b->act();

    delete a;
    delete b;
}