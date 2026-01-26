// Mearged the questions from Excerise 2
#include <iostream>

int main()
{
    int x = 256;

    // ----- IF–ELSE with logical operators -----
    if (x > 100 && x < 300)
    {
        std::cout << "The value is greater than 100 and less than 300.\n";
    }
    else
    {
        std::cout << "The value is not inside the (100 .. 300) range.\n";
    }

    bool mycondition = true;

    if (x > 100 || mycondition)
    {
        std::cout << "Either x is greater than 100 or the bool variable is true.\n";
    }
    else
    {
        std::cout << "x is not greater than 100 and the bool variable is false.\n";
    }

    bool mysecondcondition = !mycondition;

    // ----- SWITCH statement -----
    x = 3; // changing value to test switch

    switch (x)
    {
    case 1:
        std::cout << "The value is equal to 1.\n";
        break;

    case 2:
        std::cout << "The value is equal to 2.\n";
        break;

    case 3:
        std::cout << "The value is equal to 3.\n";
        break;

    case 4:
        std::cout << "The value is equal to 4.\n";
        break;

    default:
        std::cout << "The value is not inside the [1..4] range.\n";
        break;
    }

    return 0;
}
