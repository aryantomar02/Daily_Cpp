#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n) || n < 1) {
        return -1;
    }

    int currnum;
    int lowestprice;
    int maxprofit = 0;
    int count = 0;

    // Read FIRST valid price
    while (true) {
        if (std::cin >> currnum) {
            lowestprice = currnum;
            count = 1;
            break;
        } else {
            std::cout << "Invalid input!, try again\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }
    }

    // Read remaining (n - 1) valid prices
    while (count < n) {

        if (!(std::cin >> currnum)) {
            std::cout << "Invalid input!, try again\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;   // do NOT count invalid input
        }

        if (currnum < lowestprice) {
            lowestprice = currnum;
        } else {
            int profittoday = currnum - lowestprice;
            if (profittoday > maxprofit) {
                maxprofit = profittoday;
            }
        }

        count++;   // increment ONLY for valid input
    }

    std::cout << "Max profit possible is: " << maxprofit << std::endl;
    return 0;
}
