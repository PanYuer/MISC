#include <string>

void asterisks(std::string word, std::string &text, int i)
{
    for (int k = 0; k < word.size(); k++)
    {
        text[i + k] = '*';
    }
}

void bleep(std::string word, std::string &text)
{
    for (int i = 0; i < text.size(); i++)
    {
        int match = 0;
        for (int j = 0; j < word.size(); j++)
        {
            if (text[i] == word[j])
            {
                match++;
            }
        }
        if (match == word.size())
        {
            asterisks(word, text, i);
        }
    }
}