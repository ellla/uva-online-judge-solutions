// UVa Online Judge
// Problem 272- TEX Quotes
// Written by Tian Zhou
// Created 10/6/12
// Last Modified 10/10/12

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    int count = 0;

    while (getline(cin, text))
    {       
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == '"')
            {
                if (count == 0)
                {
                    text[i] = '`';
                    text.insert(i, "`");
                    count++;
                }
                else
                {
                    text[i] = '\'';
                    text.insert(i, "'");
                    count--;
                }
            }
        }

        cout << text << endl;
    }
}
