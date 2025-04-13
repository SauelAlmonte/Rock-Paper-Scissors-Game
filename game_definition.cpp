/*
 * game_definition.cpp
 * Generates and returns a random choice for the computer: 1 = Rock, 2 = Paper, 3 = Scissors
 */
#include <iostream>
#include <random>
#include <string>
#include "game_header.h"
using namespace std;

void introduction() {
    cout << "\nThis program simulates\na simple Rock-Paper-Scissors game\nbetween the user and the computer.\n";
}

int getComputerChoice() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 3);
    return distr(gen);
}

int getUserChoice() {
    int choice;
    bool valid = false;

    // Show menu once
    cout << "\nChoose your option:\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Enter your choice (1-3): ";

    do {
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and 3: ";
        } else if (choice < 1 || choice > 3) {
            cout << "Invalid range. Please enter a number between 1 and 3: ";
        } else {
            valid = true;
        }

    } while (!valid);

    return choice;
}

string choiceToString(int choice) {
    if (choice == 1) return "Rock";
    if (choice == 2) return "Paper";
    return "Scissors";
}

void displayChoices(int user, int computer) {
    cout << "You chose: " << choiceToString(user) << endl;
    cout << "Computer chose: " << choiceToString(computer) << endl;
}

bool determineWinner(int user, int computer) {
    if (user == computer) {
        cout << "It's a tie! Play again.\n\n";
        return false;
    }

    if ((user == 1 && computer == 3) ||
        (user == 2 && computer == 1) ||
        (user == 3 && computer == 2)) {
        cout << "You win!\n";
        } else {
            cout << "Computer wins!\n";
        }

    return true;
}
