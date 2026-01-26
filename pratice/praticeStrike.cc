//Checking the longest strike
#include<iostream>
int main() {
    int n;
    std::cin >> n;
    int currnum, prev;
    int count = 1, maxCount = 1;
    std::cin >> prev;
    for(int i = 0; i < n-1; i++){
        std::cin >> currnum;
        if(currnum > prev){
            count++;
        } 
        else{
            if(count > maxCount) {
                maxCount = count;
                count = 1;
            }
        }
        prev = currnum;
    }
    if(count>maxCount) maxCount = count;
    std::cout << maxCount << std::endl;
}