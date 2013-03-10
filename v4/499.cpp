// UVa Online Judge
// Problem 499 - What's The Frequency, Kenneth?
// Written by Tian Zhou
// Created 3/10/13
// Last Modified 3/10/13

#include <iostream>
#include <string>
using namespace std;

const char letters[] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
};


int find_max(int *frequency)
{
    int max = 0;

    for (int i = 0; i < 52; i++)
    {
        if (frequency[i] > max)
            max = frequency[i];
    }

    return max;
}

int main()
{
    string s;
    int *frequency;
    int max;
    
    while (getline(cin, s))
    {
        frequency = new int[52];

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                frequency[s[i] - 'A']++;

            else if (s[i] >= 'a' && s[i] <= 'z')
                frequency[s[i] - 'a' + 26]++;
        }

        max = find_max(frequency);

        for (int i = 0; i < 52; i++)
        {
            if (frequency[i] == max)
                cout << letters[i];
        }

        cout << " " << max << endl;
    }

    return 0;
}
