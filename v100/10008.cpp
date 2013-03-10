// UVa Online Judge
// Problem 10008 - What's Cryptanalysis?
// Written by Tian Zhou
// Created 2/6/13
// Last Modified 2/6/13

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define SIZE 26

struct alpha
{
    char letter;
    int count;
};

bool alpha_sorter(alpha a, alpha b)
{
    if (a.count != b.count)
        return a.count >  b.count;
    else
        return a.letter < b.letter;
}

int main()
{
    int n;
    string s;
    alpha letters[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        letters[i].letter = char(i + 'A');
        letters[i].count = 0;
    }

    cin >> n;
    cin.get();

    for (int i = 0; i < n; i++)
    {
        getline(cin, s);

        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
                letters[s[j] - 'a'].count++;
            if (s[j] >= 'A' && s[j] <= 'Z')
                letters[s[j] - 'A'].count++;
        }
    }

    sort(letters, letters + SIZE, alpha_sorter);

    for (int i = 0 ; i < SIZE && letters[i].count != 0; i++)
    {
        cout << letters[i].letter << ' ' << letters[i].count << endl;
    }

    return 0;
}
