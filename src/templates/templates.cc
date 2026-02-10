#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class intonly
{
private:
    T x;
public:
    intonly(T xx);
    T myfunc(T argu);
};
template <typename T>
intonly<T>::intonly(T xx) : x{xx}
{
    cout << "Const invoked, value passed is: "<< xx << endl;
}

template <typename T>
T intonly<T>::myfunc(T xx) {
    return -1;
}

template<>
int intonly<int>::myfunc(int xx) {
    cout << "The int is: " << xx << endl;
    return xx;
}

int main() {
    intonly<int> o{2};
    intonly<double> o2{3.1};

    o.myfunc(10);
    o2.myfunc(10.0);
}