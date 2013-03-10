// UVa Online Judge
// Problem 10420 - List of Conquests
// Written by Tian Zhou
// Created 2/15/13
// Last Modified 2/15/13

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    string s;
    int count;
    vector<string> countries;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        countries.push_back(s);
        cin.ignore(75, '\n');
    }

    sort(countries.begin(), countries.end());

    count = 0;
    s = countries[0];

    for (int i = 0; i < countries.size(); i++)
    {
        if (countries[i] == s)
        {
            count++;
        }
        else
        {
            cout << s << " " << count << endl;
            s = countries[i];
            count = 1;
        }
    }

    cout << s << " " << count << endl;

    return 0;
}
