#include <iostream>
#include <utility>

class HeapInt
{
private:
    int* p;
public:
    HeapInt(int value);
    ~HeapInt();
    HeapInt(const HeapInt& other) : p{other.p ? new int(*other.p) : nullptr} {}
    HeapInt(HeapInt&& other) noexcept {
        p = other.p;
        other.p = nullptr;
    }
    HeapInt& operator=(const HeapInt& other) {
        if(this != &other) {
            delete p;

            if(other.p != nullptr) {
                p = new int(*other.p);
            }
            else{
                p = nullptr;
            }
        }
        return *this;
    }
    HeapInt& operator=(HeapInt&& other) noexcept {
        if(this !=&other){
            delete p;
            p = other.p;
            other.p =nullptr;
        }
        return *this;
    }
    const int* get() const{
        return p;
    }
};

HeapInt::HeapInt(int value)
{
    p = new int(value);
}

HeapInt::~HeapInt()
{
    delete p;
    p =nullptr;
}

#include <iostream>

int main() {
    HeapInt h1(42);
    std::cout << "h1: " << h1.get() << " val: " << *h1.get() << std::endl;

    HeapInt h2 = h1;
    std::cout << "h2 (copy): " << h2.get() << " val: " << *h2.get() << std::endl;

    HeapInt h3 = std::move(h1);
    std::cout << "h3 (move): " << h3.get() << " val: " << *h3.get() << std::endl;
    
    if (h1.get() == nullptr) {
        std::cout << "h1 is null" << std::endl;
    }

    HeapInt h4(100);
    h4 = h2;
    std::cout << "h4 (assigned): " << h4.get() << " val: " << *h4.get() << std::endl;

    return 0;
}