#include <iostream>
#include <cstring>
#include <vector>
using std::cout;
using std::endl;

class StringLite
{

    char *data;
    int length;

public:
    StringLite(const char *str) : length(std::strlen(str)) ///using strlen for calculating the length of string
    {
        data = new char[length + 1]; //allocating new char of length(length + 1) to pointer data
        std::strcpy(data, str);
        cout << "conturected" << endl;
    }

    StringLite(const StringLite &other) : length(other.length) //checking the length of current string
    {
        data = new char[length + 1]; //allocating new char of lenth(length + 1) 
        std::strcpy(data, other.data); // copying the data of previous string to current string
        cout << "copy" << endl;
    }
    StringLite &operator=(const StringLite &other)
    {
        if (this == &other)//if current variable = the value other is refering to return the value stored in this pointer
            return *this;
        delete[] data;// deleat that value 

        length = other.length; // then just store value at different same as previous at different location
        data = new char[length + 1];
        std::strcpy(data, other.data);

        cout << "copy assigined" << endl;
        return *this;
        
    }
    StringLite(StringLite&& other) noexcept : data{other.data}, length{other.length}
    {
        other.data = nullptr;
        other.length = 0;
        cout << "move" << endl;
    }

    StringLite& operator=(StringLite&& other) noexcept{
        if(this==&other) return *this;

        delete[] data;

        data=other.data;
        length=other.length;

        other.data=nullptr;
        other.length=0;
        
        cout << "move assigined" << endl;
        return *this;
    }

    ~StringLite()
    {
        delete[] data; //freeing the memory of heap finally
        cout << "distructed" << endl;
    }
};

int main()
{
    std::vector<StringLite> v;
    // StringLite a("hello");
    // StringLite b = a;//copy constructor
    // StringLite c("world");
    // c = a;//copy assiginment
    // c = std::move (b);

    //vector
// first it is constructing  moving then distrucing

    v.push_back(StringLite("one"));// moving one time
    v.push_back(StringLite("two"));// moving two times
    v.push_back(StringLite("three")); // moving three times
}
