// UVa Online Judge
// Problem 146 - ID Codes
// Written by Tian Zhou
// Created 9/11/13
// Last Modified 9/11/13

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string code;
    string successor;

    getline(cin, code);
    while (code != "#")
    {
        if (next_permutation(code.begin(), code.end()))
            cout << code << "\n";
        else
            cout << "No Successor\n";

        getline(cin, code);
    }

    return 0;
}