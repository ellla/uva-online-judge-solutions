// UVa Online Judge
// Problem 11713 - Abstract Names
// Written by Tian Zhou
// Created 3/11/13
// Last Modified 3/11/13

#include <iostream>
#include <string>
using namespace std;

bool is_vowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool check(string name1, string name2)
{
    if (name1.length() != name2.length())
        return false;

    for (int i = 0; i < name1.length(); i++)
    {
        if (!is_vowel(name1[i]) && name1[i] != name2[i])
            return false;

        else if(is_vowel(name1[i]) && !is_vowel(name2[i]))
            return false;
    }

    return true;
}

int main()
{
    int n;
    string name1;
    string name2;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name1 >> name2;

        if(check(name1, name2))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
