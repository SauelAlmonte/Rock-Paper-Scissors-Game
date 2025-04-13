/*
 * Author: Sauel Almonte
 * Date: 12April2025
 * Version: 0.01
 *
 * Description:
 * This program simulates a simple Rock-Paper-Scissors game between the user and the computer.
 * The user selects one of the options from a menu, and the computer makes a random choice.
 * The game continues until there is a winner or the user chooses to quit.
 */

#include <iostream>
#include "game_header.h"
using namespace std;

int main() {
    int userChoice, computerChoice;
    bool winner = false;

    introduction();

    do {
        computerChoice = getComputerChoice();
        userChoice = getUserChoice();

        displayChoices(userChoice, computerChoice);
        winner = determineWinner(userChoice, computerChoice);

    } while (!winner);

    return 0;
}
