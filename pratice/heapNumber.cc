#include <iostream>
class HeapNumber
{
    int *p;

public:
    HeapNumber(int v) : p{new int(v)}
    {
        std::cout << "Created" << std::endl;
    }
    HeapNumber(const HeapNumber &others) : p{others.p ? new int(*others.p) : nullptr}
    {
        std::cout << "created" << std::endl;
    }
    ~HeapNumber()
    {
        delete p;
        std::cout << "destroyed" << std::endl;
    }
};
int main()
{
    HeapNumber a(10);
    HeapNumber b = a;
}
