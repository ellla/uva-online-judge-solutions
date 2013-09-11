// UVa Online Judge
// Problem 739 - Soundex Indexing
// Written by Tian Zhou
// Created 9/7/13
// Last Modified 9/7/13

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const char codes[] = {
    '0', '1', '2', '3', '0', '1', '2',
    '0', '0', '2', '2', '4', '5', '5',
    '0', '1', '2', '6', '2', '3',
    '0', '1', '0', '2', '0', '2'
};

int main()
{
    string text;
    string code;
    int pos;
    char c;
    char prev_c;

    cout << left;
    cout << setw(9) << " " << setw(25) << "NAME" << "SOUNDEX CODE\n";

    while (cin >> text)
    {
        code = text.substr(0, 1);
        pos = 1;
        prev_c = codes[text[0] - 'A'];

        while (code.length() < 4 && pos < text.length())
        {
            c = codes[text[pos] - 'A'];
            if (c != '0' && c != prev_c)
                code += c;
            pos++;
            prev_c = c;
        }

        while (code.length() < 4)
            code += '0';

        cout << setw(9) << " " << setw(25) << text << code << "\n";
    }

    cout << setw(19) << " " << "END OF OUTPUT\n";
    return 0;
}