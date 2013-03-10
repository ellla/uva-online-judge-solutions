// UVa Online Judge
// Problem 489 - Hangman Judge
// Written by Tian Zhou
// Created 2/13/13
// Last Modified 2/13/13

#include <iostream>
#include <string>
using namespace std;

const int CHANCE = 7;

int main()
{
    int round;
    string word;
    string guess;
    int nGuess;
    int p;
    
    cin >> round;
    while (round != -1)
    {
        cout << "Round " << round << endl;

        cin >> word >> guess;
        nGuess = 0;

        for (int i = 0; i < guess.size(); i++)
        {
            if (nGuess == CHANCE || word.empty())
                break;
            else if (word.find(guess[i]) != string::npos)
            {
                while ((p = word.find_first_of(guess[i])) != string::npos)
                    word.erase(word.begin() + p);
            }
            else
                nGuess++;
        }

        if (word == "")
            cout << "You win." << endl;
        else if (nGuess == CHANCE)
            cout << "You lose." << endl;
        else
            cout << "You chickened out." << endl;

        cin >> round;
    }
    return 0;
}
