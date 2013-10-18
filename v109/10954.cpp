// UVa Online Judge
// Problem 10954 - Add All
// Written by Tian Zhou
// Created 9/21/13
// Last Modified 9/21/13

#include <cstdlib>
#include <cstdio>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

typedef priority_queue<int, vector<int>, greater<int> > PQ;

int main()
{
    int numbers;
    int num;
    PQ myPQ;
    int sum;
    int totalCost;

    while (scanf("%d", &numbers) && numbers != 0)
    {
        totalCost = 0;

        for (int i = 0; i < numbers; i++)
        {
            scanf("%d", &num);
            myPQ.push(num);
        }

        while (true)
        {
            sum = myPQ.top();
            myPQ.pop();
            sum += myPQ.top();
            myPQ.pop();
            totalCost += sum;

            if (!myPQ.empty())
                myPQ.push(sum);
            else
                break;
        }

        printf("%d\n", totalCost);
    }

    return 0;
}