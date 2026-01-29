/*Class name: Number
One int member
Constructor prints "constructed"
Destructor prints "destroyed"
Required main
int main() {
    Number a(5);
    Number b = a;
}
Your goal
Write the code
Run it (or reason it out)
Tell me how many times each message appears
Do NOT add copy constructor yet.
*/
//
#include <iostream>

class Number
{
    int x;
public:
    Number(int xx) : x{xx} 
    {
        std::cout << "constructed" << std::endl;
    }
    
    ~Number() {
        std::cout << "destroyed" << std::endl;
    }
};

int main() {
    Number a(5);
    Number b = a;
}