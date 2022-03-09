#include "Human.h"
#include <iostream>

// Constuctor
Human::Human() {}

// Get move
char Human::makeMove() {
    char input;
    std::cout << "Enter move: ";
    std::cin >> input;
    return input;
}