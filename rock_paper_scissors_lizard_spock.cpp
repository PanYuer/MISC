/*
rock_paper_scissors_lizard_spock.cpp program will:

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
    int computer = rand() % 5 + 1; // computer is a random number that could be 1, 2, or 3 for the computer
    int user;

    std::cout << "====================\n";
    std::cout << "rock paper scissors lizard spock!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";
    std::cout << "4) lizard\n";
    std::cout << "5) spock\n";

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
    else if (user == 3)
    {
        std::cout << "You chose ✌️.\n";
    }
    else if (user == 4)
    {
        std::cout << "You chose lizard.\n";
    }
    else
    {
        std::cout << "You chose spock.\n";
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
    else if (computer == 3)
    {
        std::cout << "Computer chose ✌️.\n";
    }
    else if (computer == 4)
    {
        std::cout << "Computer chose lizard.\n";
    }
    else
    {
        std::cout << "Computer chose spock.\n\n";
    }

    // Compare user and computer's choices
    if (user == computer)
    {
        std::cout << "Tie!\n";
    }
    else if (user == 3 && computer == 2)
    {
        std::cout << "You won!\n";
    }
    else if (user == 2 && computer == 1)
    {
        std::cout << "You won!\n";
    }
    else if (user == 1 && computer == 4)
    {
        std::cout << "You won!\n";
    }
    else if (user == 4 && computer == 5)
    {
        std::cout << "You won!\n";
    }
    else if (user == 5 && computer == 3)
    {
        std::cout << "You won!\n";
    }
    else if (user == 3 && computer == 4)
    {
        std::cout << "You won!\n";
    }
    else if (user == 4 && computer == 2)
    {
        std::cout << "You won!\n";
    }
    else if (user == 5 && computer == 1)
    {
        std::cout << "You won!\n";
    }
    else if (user == 1 && computer == 3)
    {
        std::cout << "You won!\n";
    }
    else
    {
        std::cout << "You lost!\n";
    }
}
