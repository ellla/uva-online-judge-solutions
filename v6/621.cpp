// UVa Online Judge
// Problem 621 - Secret Research
// Written by Tian Zhou
// Created 9/10/13
// Last Modified 9/10/13

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string input;
    int size;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        size = input.size();
        
        if (input == "1" || input == "4" || input == "78")
            printf("+\n");
        else if (size > 2 && input.substr(size - 2, 2) == "35")
            printf("-\n");
        else if (size > 2 && input[0] == '9' && input[size - 1] == '4')
            printf("*\n");
        else
            printf("?\n");
    }
    
    return 0;
}
