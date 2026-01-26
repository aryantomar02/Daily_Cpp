#include <iostream>
int main (){
    int sum = 0, val = 10;
    while(val<=100) {
        sum += val;
        val++;
    }
    std::cout << "Sum of values from1 to 10 is " 
    << sum << std::endl;
    return 0; 
}