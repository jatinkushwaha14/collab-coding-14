#include <iostream>
#include "addition.h"
#include "subtraction.h" 
#include "division.h"
#include  "multiplication.h"

// Function headers - to be implemented by contributors
 int add(int a, int b);
 int subtract(int a, int b);
 int multiply(int a, int b);
 int divide(int a, int b);

int main() {
    int a = 20, b = 10;

    // std::cout << "Addition: " << add(a, b) << std::endl;
    // std::cout << "Subtraction: " << subtract(a, b) << std::endl;
    // std::cout << "Multiplication: " << multiply(a, b) << std::endl;
    // std::cout << "Division: " << divide(a, b) << std::endl;
    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Subtraction: " << subtract(a, b) << std::endl;
    std::cout << "Division: " << divide(a, b) << std::endl;    
    std::cout << "Multiplication: " << multiply(a, b) << std::endl;




    return 0;
}

