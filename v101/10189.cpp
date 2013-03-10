// UVa Online Judge
// Problem 10189 - Minesweeper
// Written by Tian Zhou
// Created 3/2/13
// Last Modified 3/2/13

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    int row, col;
    string s;
    int count;

    cin >> row >> col;

    while (row != 0 && col != 0)
    {
        cin.ignore(8, '\n');

        n++;
        vector<string> field;

        field.push_back(string(col + 2, '0')); 

        for (int i = 0; i < row; i++)
        {
            getline(cin, s);
            s = '0' + s + '0';
            field.push_back(s);
        }

        field.push_back(string(col + 2, '0'));

        for (int i = 1; i < field.size() - 1; i++)
        {
            for (int j = 1; j < field[i].length() - 1; j++)
            {
                if (field[i][j] != '*')
                {
                    count = 0;
                    if (field[i - 1][j - 1] == '*')
                        count++;
                    if (field[i - 1][  j  ] == '*')
                        count++;
                    if (field[i - 1][j + 1] == '*')
                        count++;
                    if (field[  i  ][j - 1] == '*')
                        count++;
                    if (field[  i  ][j + 1] == '*')
                        count++;
                    if (field[i + 1][j - 1] == '*')
                        count++;
                    if (field[i + 1][  j  ] == '*')
                        count++;
                    if (field[i + 1][j + 1] == '*')
                        count++;

                    field[i][j] = count + '0';
                }
            }
        }

        if (n != 1)
            cout << endl;

        cout << "Field #" << n << ":" << endl;
        for (int i = 1; i < field.size() - 1; i++)
            cout << field[i].substr(1, col) << endl;

        cin >> row >> col;
    }

    return 0;
}
