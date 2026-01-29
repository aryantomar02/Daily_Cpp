#include <iostream>
#include <cstring>

class StringLite
{

    char *data;
    int length;

public:
    StringLite(const char *str) : length(std::strlen(str))
    {
        data = new char[length + 1];
        std::strcpy(data, str);
    }

    StringLite(const StringLite &other) : length(other.length)
    {
        data = new char[length + 1];
        std::strcpy(data, other.data);
    }
    StringLite &operator=(const StringLite &other)
    {
        if (this == &other)
            return *this;
        delete[] data;

        length = other.length;
        data = new char[length + 1];
        std::strcpy(data, other.data);
        return *this;
    }

    ~StringLite()
    {
        delete[] data;
    }
};

int main()
{
    StringLite a("hello");
    StringLite b = a;
    StringLite c("world");
    c = a;
}
