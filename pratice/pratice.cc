//Output the count of 3 digit number between a and b
#include <iostream> 
int main() {
    int a, b;
    std::cin >> a >> b;
    int count = 0;
    if (a <= b) {
        for(int i = a; i <=b; i++){
            if(i >= 100 || i <= -100) {
                count++;
            }
        }
    }
    else {
        int temp;
        temp = a;
        a = b;
        b = temp;
        for(int i = a; i <=b; i++){
            if(i >= 100 || i <= -100) {
                count++;
            }
        }
    }
    std::cout << "Count of three digit numbres is: " << count << std::endl;
}