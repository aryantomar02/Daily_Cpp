#include <iostream>
#include <string>
int main() {
    //Reference
    double mydouble = 3.14;
    double &myreference = mydouble;
    myreference = 6.28;
    std::cout << "The values are: " << mydouble << " and " << myreference << '\n' << std::endl;
    mydouble = 9.45;
    std::cout << "The values are: " << mydouble << " and " << myreference << '\n' << std::endl;

    //string
    std::string s1 = "Hello";
    std::string s2 = " World!";
    std::string s3 = s1 + s2;
    std::cout << "The resulting string is: " << s3;

    std::string fullname1;
    std::cout << "Please enter the first and the last name: ";
    std::getline(std::cin, fullname1);
    std::cout << "Your name is: " << fullname1;

    std::string fullname = "John Doe";
    std::string firstname = fullname.substr(0, 4);
    std::string lastname = fullname.substr(5, 3);
    std::cout << "The full name is: " << fullname << '\n';
    std::cout << "The first name is: " << firstname << '\n';
    std::cout << "The last name is: " << lastname << '\n';

    std::string s = "Hello C++ World.";
    char c = 'C';
    auto found = s.find(c);
    if (found != std::string::npos)
    {
        std::cout << "Character found at position: " << found << '\n' << std::endl;
    }
    else{
        std::cout << "Character was not found." << '\n' << std::endl;
    }
    
    //Auto
    auto c1 = 'a';
    auto x = 123;
    auto d = 3.14;
    std::cout << "The type of c is deduced as char, the value is: " << c1 << '\n';
    std::cout << "The type of x is deduced as int, the value is: " << x << '\n';
    std::cout << "The type of d is deduced as double, the value is: " << d << '\n';
}