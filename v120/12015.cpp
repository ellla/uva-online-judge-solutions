// UVa Online Judge
// Problem 12015 - Google is Feeling Lucky
// Written by Tian Zhou
// Created 3/10/13
// Last Modified 3/10/13

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int v;
    int maxV;
    int cnt;
    string page;
    string *pages;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        maxV = 0;
        pages = new string[10];

        for (int j = 0; j < 10; j++)
        {
            cin >> page >> v;

            if (v > maxV)
            {
                maxV = v;
                cnt = 0;
                delete[] pages;
                pages = new string[10];
                pages[cnt++] = page;
            }
            else if (v == maxV)
                pages[cnt++] = page;
        }

        cout << "Case #" << i << ":" << endl;

        for (int i = 0; i < cnt; i++)
            cout << pages[i] << endl;
    }

    return 0;
}
