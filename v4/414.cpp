// UVa Online Judge
// Problem 414 - Machined Surfaces
// Written by Tian Zhou
// Created 2/9/13
// Last Modified 2/9/13

#include <iostream>
#include <string>
using namespace std;

#define LENGTH 25

int find_left(string s)
{
    int l = 1;

    for (int i = 1; i < LENGTH; i++)
    {
	if (s[i] == 'X')
	    l++;
	else if (s[i] == ' ')
	    break;
    }

    return l;
}

int find_right(string s)
{
    int r = 1;

    for (int i = LENGTH - 2; i >= 0; i--)
    {
	if (s[i] == 'X')
	    r++;
	else if (s[i] == ' ')
	    break;
    }

    return r; 
}

int find_max(int A[], int n)
{
    int max = 1;

    for (int i = 0; i < n; i++)
	if (A[i] > max)
	    max = A[i];

    return max;
}

int main()
{
    int n;
    string* lines;
    int* used;
    int max_used;
    int total_void;

    cin >> n;
    while (n != 0)
    {
        cin.clear();
        cin.ignore(1, '\n');
	lines = new string[n];
	used = new int[n];
	total_void = 0;
	
        for (int i = 0; i < n; i++)
	{
            getline(cin, lines[i]);
	    used[i] = find_left(lines[i]) + find_right(lines[i]);

	    if (used[i] > 25)
		used[i] = 25;
	}

	max_used = find_max(used, n);

	for (int i = 0; i < n; i++)
	    total_void += max_used - used[i];

	cout << total_void << endl;
	delete[] lines;
	delete[] used;
	cin >> n;
    }

    return 0;
}
