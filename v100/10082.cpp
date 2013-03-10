// UVa Online Judge
// Problem 10082 - WERTYU
// Written by Tian Zhou
// Created 10/6/12
// Last Modified 10/10/12

#include <iostream>
#include <string>

using namespace std;

const int SIZE = 44;

int search(int key, char in[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (in[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    char in[SIZE] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
        'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\',
        'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'',
        'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/', ' '};
    char out[SIZE] = {'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-',
        'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']',
        'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';',
        'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', ' '};

    string text;
    int pos;

    while(getline(cin, text))
    {
        for (int i = 0; i < text.length(); i++)
        {
            pos = search(text[i], in, SIZE);
            text[i] = out[pos];
        }
        cout << text << endl;
    }
}
