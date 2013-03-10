// UVa Online Judge
// Problem 591 - Box of Bricks
// Written by Tian Zhou
// Created 3/5/13
// Last Modified 3/5/13

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int set = 0;
    int n;
    int num;
    int sum;
    int mean;
    int move;
    vector<int> vec;

    cin >> n;
    while (n != 0)
    {
        set++;
        move = 0;
        sum = 0;
        vec.clear();

        for (int i = 0; i < n; i++)
        {
            cin >> num;
            vec.push_back(num);
            sum += num;
        }

        mean = sum / n;

        for (int i = 0; i < n; i++)
            if (vec[i] > mean)
                move += (vec[i] - mean);

        cout << "Set #" << set << endl;
        cout << "The minimum number of moves is " << move << "." << endl << endl;

        cin >> n;
    }

    return 0;
}
