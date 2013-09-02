// UVa Online Judge
// Problem 12289 - One-Two-Three
// Written by Tian Zhou
// Created 9/1/13
// Last Modified 9/1/13

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string word;
    
    int check = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        
        if (word.size() == 5)
            cout << 3 << '\n';
        else
        {
            if (word[0] == 'o')
                check++;
            if (word[1] == 'n')
                check++;
            if (word[2] == 'e')
                check++;

            if (check >= 2)
                cout << 1 << '\n';
            else
                cout << 2 << '\n';

            check = 0;
        }
    }

    return 0;
}
