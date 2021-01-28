#include <iostream>
#include "ufo_functions.h"

int main()
{

    greeting();

    std::string codeword = "codecademy";
    std::string answer = "----------";
    int misses = 0;
    std::vector<char> incorrect;
    bool guess = false;
    char letter;

    while (answer != codeword && misses < 7)
    {
        display_misses(misses);

        display_status(incorrect, answer);

        std::cout << "Please enter your guess: ";
        std::cin >> letter;

        //loop through each character in codeword to see if the player was right
        for (int i = 0; i < codeword.length(); i++)
        {
            if (letter == codeword[i])
            {
                answer[i] = letter;
                guess = true;
            }
        }
        // check if the player guessed a letter correctly
        if (guess == true)
        {
            std::cout << "Correct!\n";
        }
        else
        {
            std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++; //misses only increments if the guess was false
        }

        guess = false;
    }
    end_game(answer, codeword);
}
