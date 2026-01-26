//Check if the digits in a number is repeated and if it is repeated output the digit
#include <iostream>
#include <string>
int main() {
    std::string n;
    std::cin >> n;
    
    int arr[10];
    for(int i = 0; i < 10; i++){
        arr[i] = -1;
    }

    for(int i = 0; i < n.length(); i++) {
        int digit = n[i] - '0';

        if(arr[digit] != -1) {
            std::cout << digit << std::endl;
            return 0;
        }
        arr[digit] = digit;
    }
    std::cout << "No repeatation" << std::endl;
}