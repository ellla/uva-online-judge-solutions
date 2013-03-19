// UVa Online Judge
// Problem 438 - The Circumference of the Circle
// Written by Tian Zhou
// Created 3/18/13
// Last Modified 3/18/13

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;

const double PI = 3.141592653589793;

double find_dis(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double a, b, c, d;
    
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)
    {
        a = find_dis(x1, y1, x2, y2);
        b = find_dis(x1, y1, x3, y3);
        c = find_dis(x2, y2, x3, y3);

        d = 2 * a * b * c / sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c));
        
        printf("%.2f\n", d * PI);
    }
    return 0;
}
