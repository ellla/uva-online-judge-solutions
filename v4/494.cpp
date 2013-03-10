// UVa Online Judge
// Problem 494 - Kindergarten Counting Game
// Written by Tian Zhou
// Created 2/6/13
// Last Modified 2/6/13

#include <iostream>
#include <string>
using namespace std;

int count(string s)
{
    int count = 0;
    bool isword = false;

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            if (!isword)
                isword = true;
        }
        else
        {
            if (isword)
            {
                isword = false;
                count++;
            }
        }
    }

    if (isword)
        count++;

    return count;
}

int main()
{
    string s;

    while (getline(cin, s))
        cout << count(s) << endl;

    return 0;
}
