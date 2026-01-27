#include <iostream>
int main() {
    int positive =0, negative = 0, zero = 0;
    int n , currnum;
    std::cin >> n;

    for(int i = 0; i < n; i++) {

        if(!(std::cin >> currnum)) {
            std::cout << "Invalid input, try again \n" << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n'); //std::cin.ignore(MAX_CHARS, DELIMITER);
        }

        if(currnum > 0) positive++ ;
        else if(currnum < 0) negative++;
        else zero++;
    }
    std::cout << "Positive numbers: " << positive << " Negative numbers: " << negative << " Zeros: " << zero << std::endl;
    return 0;
}