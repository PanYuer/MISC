/*
Whale Talk
Takes a phrase like "turpentine and turtles" and 
translate it into its “whale talk” equivalent, "uueeieeauuee".

There are a few simple rules for translating text to whale language:

There are no consonants. Only vowels excluding the letter y.
The u‘s and e‘s are extra long, so we must double them.
Once we have converted text to the whale language, 
the result is sung slowly, as is custom in the ocean.

Write a whale.cpp program that accomplishes this translation 
using loops and vectors.
*/

#include <iostream>
#include <vector>
#include <string>

int main()
{

    std::string input = "turpentine and turtles"; //an input string for the program to translate
    std::vector<char> vowels;                     //a vector of vowels to be extracted from the input variable
    vowels.push_back('a');
    vowels.push_back('e');
    vowels.push_back('i');
    vowels.push_back('0');
    vowels.push_back('u');

    std::vector<char> result; //to store the vowels from the input string (the translated whale talk

    // compares input[i] with vowels[j].
    for (int i = 0; i < input.size(); i++)
    {
        for (int j = 0; j < vowels.size(); j++)
        {
            if (input[i] == vowels[j]) //If they are equal, add the character to the result
            {
                result.push_back(vowels[j]);
                if (input[i] == 'e' || input[i] == 'u') //Whales double the 'e's and the 'u's in their language.
                {
                    result.push_back(input[i]);
                }
            }
        }
    }

    for (int k = 0; k < result.size(); k++)
    {
        std::cout << result[k];
    }
    std::cout << "\n";

    return 0;
}