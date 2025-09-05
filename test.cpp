#include <iostream>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
int main()
{
    std::cout << "Testing add: 5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "Testing subtract: 5 - 3 = " << subtract(5, 3) << std::endl;
    std::cout << "Testing multiply: 5 * 3 = " << multiply(5, 3) << std::endl;
    std::cout << "Testing divide: 6 / 3 = " << divide(6, 3) << std::endl;
    return 0;
}