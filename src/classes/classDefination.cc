#include <iostream>
using std::cout;
using std::endl;

//defining every thing in class publically
// class myClass
struct myClass // after using struct and commenting class everything works same
{
public://dose not show any error
    int x;
    void printx() {
        cout << "the value of x is: " << x << endl;
    }
};

int main() {
    myClass o;
    o.x =123; //x is public and anyone can modify it
    o.printx();
}