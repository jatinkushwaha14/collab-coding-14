#include "division.h"
#include <iostream>

// Function to divide two integers safely
int divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0; // or handle error differently if needed
    }
    return static_cast<int>(a) / b;
}
