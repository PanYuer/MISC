/*
“A thousand years or more ago,
When I was newly sewn,
There lived four wizards of renown,
Whose names are still well known.”

The Hogwarts School of Witchcraft and Wizardry welcomes you! 
First-year students must go through the annual Sorting Ceremony.

The Sorting Hat is a talking hat at Hogwarts that magically determines 
which of the four school Houses each new student belongs most to:

gryffindor
hufflepuff
ravenclaw
slytherin


Write a sortinghat.cpp program that asks the user some questions 
and places them into one of the four Houses based on their answers!
*/

#include <iostream>

int main()
{
    int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0; // store points and initialize to 0
    int answer1, answer2, answer3, answer4;                           // store each answer to the four quiz questions

    // Welcome
    std::cout << "The Sorting Hat Quiz!\n";

    // Question 1
    std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n";
    std::cin >> answer1;

    switch (answer1)
    {
    case 1:
        hufflepuff++;
        break;
    case 2:
        slytherin++;
        break;
    case 3:
        ravenclaw++;
        break;
    case 4:
        gryffindor++;
        break;
    default:
        std::cout << "Invalid input\n";
    }

    // Question 2
    std::cout << "Q2) Dawn or Dusk?\n";
    std::cout << "1) Dawn\n";
    std::cout << "2) Dusk\n";
    std::cin >> answer2;

    switch (answer2)
    {
    case 1:
        gryffindor++;
        ravenclaw++;
        break;
    case 2:
        hufflepuff++;
        slytherin++;
        break;
    default:
        std::cout << "Invalid input\n";
    }

    // Question 3
    std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
    std::cout << "1) The violin\n";
    std::cout << "2) The trumpet\n";
    std::cout << "3) The piano\n";
    std::cout << "4) The drum\n";
    std::cin >> answer3;

    switch (answer3)
    {
    case 1:
        slytherin++;
        break;
    case 2:
        hufflepuff++;
        break;
    case 3:
        gryffindor++;
        break;
    case 4:
        ravenclaw++;
        break;
    default:
        std::cout << "Invalid input\n";
    }

    // Question 4
    std::cout << "Q4) Which road tempts you most?\n";
    std::cout << "1) The wide, sunny grassy lane\n";
    std::cout << "2) The narrow, dark, lantern-lit alley\n";
    std::cout << "3) The twisting, leaf-strewn path through woods\n";
    std::cout << "4) The cobbled street lined (ancient buildings)\n";
    std::cin >> answer4;

    switch (answer4)
    {
    case 1:
        hufflepuff++;
        break;
    case 2:
        slytherin++;
        break;
    case 3:
        gryffindor++;
        break;
    case 4:
        ravenclaw++;
        break;
    default:
        std::cout << "Invalid input\n";
    }

    // find out which of the four Houses has the highest answer!
    std::string house;
    int max = 0;

    if (gryffindor > max)
    {

        max = gryffindor;
        house = "Gryffindor";
    }

    if (hufflepuff > max)
    {

        max = hufflepuff;
        house = "Hufflepuff";
    }

    if (ravenclaw > max)
    {

        max = ravenclaw;
        house = "Ravenclaw";
    }

    if (slytherin > max)
    {

        max = slytherin;
        house = "Slytherin";
    }

    std::cout << "You belong to " << house << "!\n";
}