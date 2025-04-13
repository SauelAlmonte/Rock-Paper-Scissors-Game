/*
 * game_header.h
 * Function prototypes for Rock-Paper-Scissors game
*/
#ifndef GAME_HEADER_H
#define GAME_HEADER_H

#include <string>
using namespace std;

void introduction();
string choiceToString(int choice);
int getComputerChoice();
int getUserChoice();
void displayChoices(int user, int computer);
bool determineWinner(int user, int computer);

#endif
