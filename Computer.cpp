#include "Computer.h"
#include <iostream>

// Constuctor
Computer::Computer() {}

// Get move
char Computer::makeMove() {
    char input;
    std::cout << "Enter move: ";
    std::cin >> input;
    return input;
}