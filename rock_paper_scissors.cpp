/*
rock_paper_scissors.cpp program will:

1. Prompt the user to select either Rock, Paper, Scissors, Lizard, or Spock.
2. Instruct the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
3. Compare the user’s choice and the computer’s choice and determine the winner.
4. Inform the user who the winner is.
*/

#include <iostream>
#include <stdlib.h>

int main()
{

    srand(time(NULL));
    int computer = rand() % 3 + 1; // computer is a random number that could be 1, 2, or 3 for the computer
    int user;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "shoot! ";

    std::cin >> user; //grab user’s input

    // Display user's choice
    if (user == 1)
    {
        std::cout << "You chose ✊.\n";
    }
    else if (user == 2)
    {
        std::cout << "You chose ✋.\n";
    }
    else
    {
        std::cout << "You chose ✌️.\n\n";
    }

    // Display computer's choice
    if (computer == 1)
    {
        std::cout << "Computer chose ✊.\n";
    }
    else if (computer == 2)
    {
        std::cout << "Computer chose ✋.\n";
    }
    else
    {
        std::cout << "Computer chose ✌️.\n\n";
    }

    // Compare user and computer's choices
    if (user == computer)
    {
        std::cout << "Tie!\n";
    }
    else if (user == 1 && computer == 3)
    {
        std::cout << "You won!\n";
    }
    else if (user == 2 && computer == 1)
    {
        std::cout << "You won!\n";
    }
    else if (user == 3 && computer == 2)
    {
        std::cout << "You won!\n";
    }
    else
    {
        std::cout << "You lost!\n";
    }
}
