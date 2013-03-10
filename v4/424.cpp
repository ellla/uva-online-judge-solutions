// UVa Online Judge
// Problem 424 - Integer Inquiry
// Written by Tian Zhou
// Created 2/14/13
// Last Modified 2/14/13

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string tran1(string s)
{
    string t = "";

    for (int i = s.length() - 1; i >= 0; i--)
        t += s[i];
    for (int i = s.length(); i < 104; i++)
        t += "0";

    return t;
}

string tran2(string s)
{
    int i = s.length() - 1;
    string t = "";

    while (s[i--] == '0');

    for (i++; i >=0; i--)
        t += s[i];

    return t;
}

string get_sum(string a, string b)
{
    int carryon = 0;
    int sum;
    string s = "";

    for (int i = 0; i < 104; i++)
    {
        sum = int((a[i] - '0') + (b[i] - '0')) + carryon;

        if (sum >= 10)
        {
            carryon = 1;
            sum -= 10;
        }
        else
        {
            carryon = 0;
        }

        s += char(sum) + '0';
    }

    return s;
}

int main()
{
    vector<string> num;
    string s;
    string sum;

    cin >> s;
    while (s != "0")
    {
        num.push_back(tran1(s));
        cin >> s;
    }

    sum = num[0];

    for (int i = 1; i < num.size(); i++)
        sum = get_sum(sum, num[i]);

    cout << tran2(sum) << endl;

    return 0;
}
