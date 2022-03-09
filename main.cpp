#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main(void) {
    // Make players
    Human player1;
    Computer player2;
    Referee referee;

    // Print game result
    std::cout << referee.refGame(player1, player2) << std::endl;
}