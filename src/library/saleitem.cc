#include <iostream>
#include "Sales_item.h"
// int main() {
//     Sales_item book;
//     std::cin >> book;
//     std::cout << book << std::endl;
//     return 0;
// }

// int main () {
//     Sales_item item1, item2;
//     std::cin >> item1 >> item2;
//     std::cout << item1+item2 << std::endl;
//     return 0;
// }

// int main () {
//     Sales_item book;
//     while(std::cin >> book) {
//         std::cout << book << std::endl;
//     }
//     return 0;
// }

// int main()
// {
//     Sales_item book;
//     Sales_item total;
//     if (std::cin >> total)
//     {
//         while (std::cin >> book)
//         {
//             total += book;

//         }
//         std::cout << total << std::endl;
//     }
//     return 0;
// }

// int main()
// {
//     Sales_item curritem;
//     Sales_item item;
//     int count = 1;
//     if (std::cin >> curritem)
//     {
//         while (std::cin >> item)
//         {
//             if (curritem.isbn() == item.isbn()) {
//                 ++count;
//             }
//             else {
//                 std::cout << curritem.isbn()<< " occurs " << count << " times" << std::endl;
//                 count = 1;
//                 curritem = item;
//             }
//         }
//         std::cout << curritem.isbn()<< " occurs " << count << " times" << std::endl;
//     }
//     return 0;
// }

int main()
{
    Sales_item total;

    if (std::cin >> total)
    {
        Sales_item trans;
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
            {
                total += trans;
            }
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else
    {
        std::cerr << "no data ?" << std::endl;
        return -1;
    }
    return 0;
}