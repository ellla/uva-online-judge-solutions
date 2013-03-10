// UVa Onlind Judge
// Problem 11498 - Division of Nlogonia
// Written by Tian Zhou
// Created 3/5/13
// Last Modified 3/5/13

#include <iostream>
using namespace std;

int main()
{
    int n;
    int Ox, Oy;
    int x, y;

    cin >> n;
    
    while(n != 0)
    {
        cin >> Ox >> Oy;

        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;

            x -= Ox;
            y -= Oy;

            if (x == 0 || y == 0)
                cout << "divisa" << endl;
            else if (x > 0 && y > 0)
                cout << "NE" << endl;
            else if (x > 0 && y < 0)
                cout << "SE" << endl;
            else if (x < 0 && y > 0)
                cout << "NO" << endl;
            else if (x < 0 && y < 0)
                cout << "SO" << endl;
        }

        cin >> n;
    }

    return 0;
}
