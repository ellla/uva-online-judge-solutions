// UVa Online Judge
// Problem 12403 - Save Setu
// Written by Tian Zhou
// Created 9/6/13
// Last Modified 9/6/13

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int lines;
    string verb;
    int amount;
    int total = 0;

    cin >> lines;
    for (int i = 0; i < lines; i++)
    {
        cin >> verb;

        if (verb == "donate")
        {
            cin >> amount;
            total += amount;
        }
        else
        {
            cout << total << "\n";
        }
    }

    return 0;
}