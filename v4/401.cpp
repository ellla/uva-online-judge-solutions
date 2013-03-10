// UVa Online Judge
// Problem 401 - Palindromes
// Written by Tian Zhou
// Created 2/14/13
// Last Modified 2/14/13

#include <iostream>
#include <string>
using namespace std;

const char pairs[2][35] = {
    {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
        'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 
        '1', '2', '3', '4', '5', '6', '7', '8', '9'},
    {'A', -1, -1, -1, '3', -1, -1, 'H', 'I', 'L', -1, 'J', 'M', -1,
        'O', -1, -1, -1, '2', 'T', 'U', 'V', 'W', 'X', 'Y', '5',
        '1', 'S', 'E', -1, 'Z', -1, -1, '8', -1}
};

char find_reverse(char c)
{
    for (int i = 0; i < 35; i++)
        if (pairs[0][i] == c)
            return pairs[1][i];

    return -1;
}

bool is_palindrome(string s)
{
    if (s.length() == 0 || s.length() == 1)
        return true;
    else
        return (s[0] == s[s.length() - 1] && is_palindrome(s.substr(1, s.length() - 2)));
}

bool is_mirrored(string s)
{
    if(s.length() == 0)
        return true;
    else if (s.length() == 1)
        return (s[0] == find_reverse(s[0]));
    else
        return (s[0] == find_reverse(s[s.length() - 1]) && is_mirrored(s.substr(1, s.length() - 2)));
}

int main()
{
    string s;

    while(cin >> s)
    {
        cout << s << " -- ";

        if (!is_palindrome(s) && !is_mirrored(s))
            cout << "is not a palindrome." << endl << endl;
        else if (is_palindrome(s) && !is_mirrored(s))
            cout << "is a regular palindrome." << endl << endl;
        else if (!is_palindrome(s) && is_mirrored(s))
            cout << "is a mirrored string." << endl << endl;
        else
            cout << "is a mirrored palindrome." << endl << endl;
    }

    return 0;
}
