// UVa Online Judge
// Problem 11577 - Hajj-e-Akbar
// Written by Tian Zhou
// Created 9/10/13
// Last Modified 9/10/13

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

const char HAJJ[] = "Hajj-e-Akbar";
const char UMRAH[] = "Hajj-e-Asghar";

int main()
{
    string input;
    int count = 0;

    cin >> input;
    while (input != "*")
    {
        printf("Case %d: %s\n", ++count, 
            (input == "Hajj") ? HAJJ : UMRAH);

        cin >> input;
    }

    return 0;
}
