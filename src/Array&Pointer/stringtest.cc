#include <iostream> 
#include <string>
int main () {
    std::string s;
    std::string s1 = "Hello, World";
    std::string mysubstring = s1.substr(0,5);
    std::cout << "Enter a string" << std::endl;
    std::getline(std::cin, s);
    std::string::size_type found = s.find(mysubstring);
    if(found != std::string::npos) {
        std::cout << "string '" << s << "' includes substring: " << mysubstring << std::endl; 
    }
    else{
        std::cout << "String " << s << " has no sub string " << mysubstring << std::endl;
    }
    std::cout << s.c_str();
}