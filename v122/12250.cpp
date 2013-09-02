// UVa Online Judge
// Problem 12250 - Language Detection
// Written by Tian Zhou
// Created 9/1/13
// Last Modified 9/1/13

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int count = 1;

    cin >> input;
    while (input != "#")
    {
        cout << "Case " << count << ": ";
        if (input == "HELLO")
            cout << "ENGLISH\n";
        else if (input == "HOLA")
            cout << "SPANISH\n";
        else if (input == "HALLO")
            cout << "GERMAN\n";
        else if (input == "BONJOUR")
            cout << "FRENCH\n";
        else if (input == "CIAO")
            cout << "ITALIAN\n";
        else if (input == "ZDRAVSTVUJTE")
            cout << "RUSSIAN\n";
        else
            cout << "UNKNOWN\n";

        count++;
        cin >> input;
    }
    
    return 0;
}
