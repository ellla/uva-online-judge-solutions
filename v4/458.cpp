// UVa Online Judge
// Problem 458 - The Decoder
// Written by Tian Zhou
// Created 10/10/12
// Last Modified 10/10/12

#include <iostream>
#include <string>

using namespace std;

string decode(string code)
{
    for (int i = 0; i < code.length(); i++)
        code[i] -= 7;

    return code;
}

int main()
{
    string code;

    while(getline(cin, code))
        cout << decode(code) << endl;
}
