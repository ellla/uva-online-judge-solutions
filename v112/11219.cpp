// UVa Online Judge
// Problem 11219 - How old are you?
// Written by Tian Zhou
// Created 3/11/13
// Last Modified 3/11/13

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    string date1, date2;
    int d1, m1, y1;
    int d2, m2, y2;
    int age;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> date1 >> date2;
        d1 = atoi(date1.substr(0, 2).c_str());
        m1 = atoi(date1.substr(3, 2).c_str());
        y1 = atoi(date1.substr(6, 4).c_str());
        d2 = atoi(date2.substr(0, 2).c_str());
        m2 = atoi(date2.substr(3, 2).c_str());
        y2 = atoi(date2.substr(6, 4).c_str());

        cout << "Case #" << i << ": ";

        if (y1 < y2)
        {
            cout << "Invalid birth date" << endl;
            continue;
        }
        else if (y1 == y2 && m1 < m2)
        {
            cout << "Invalid birth date" << endl;
            continue;
        }
        else if (y1 == y2 && m1 == m2 && d1 < d2)
        {
            cout << "Invalid birth date" << endl;
            continue;
        }

        age = y1 - y2 - 1;
        if ((m1 > m2) || (m1 == m2 && d1 >= d2))
            age++;

        if (age > 130)
            cout << "Check birth date" << endl;
        else
            cout << age << endl;
    }

    return 0;
}
