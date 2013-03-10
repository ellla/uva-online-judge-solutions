// UVa Online Judge
// Problem 11559 - Event Planning
// Written by Tian Zhou
// Created 3/4/13
// Last Modified 3/4/13

#include <iostream>
#include <limits>
#include <limits.h>
using namespace std;

int get_money(int n, int b, int h, int w)
{
    int price;
    int bed;
    int minprice = INT_MAX;

    for (int i = 0; i < h; i++)
    {
        cin >> price;

        if (price > minprice || price * n > b)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else
        {
            for (int i = 0; i < w; i++)
            {
                cin >> bed;

                if (bed > n)
                {
                    minprice = price;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
            }
        }
    }

    return minprice;
}

int main()
{
    int n; // number of participants
    int b; // budget
    int h; // number of hotels to consider
    int w; // number of weeks to choose from
    int minprice;

    while (cin >> n >> b >> h >> w)
    {
        minprice = get_money(n, b, h, w);

        if (minprice <= 10000)
            cout << minprice * n << endl;
        else
            cout << "stay home" << endl;
    }

    return 0;
}
