// UVa Online Judge
// Problem 11764 - Jumping Mario
// Written by Tian Zhou
// Created 3/7/13
// Last Modified 3/7/13

#include <iostream>
using namespace std;

int main()
{
    int cases;
    int n;
    int opos;
    int npos;
    int hj;
    int lj;

    cin >> cases;

    for (int i = 1; i <= cases; i++)
    {
        cin >> n;
        hj = 0;
        lj = 0;

        cin >> npos;

        for (int i = 1; i < n; i++)
        {
            opos = npos;
            cin >> npos;

            if (npos > opos)
                hj++;
            else if (npos < opos)
                lj++;
        }

        cout << "Case " << i << ": " << hj << " " << lj << endl;
    }

    return 0;
}
