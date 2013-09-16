// UVa Online Judge
// Problem 12060 - All Integer Average
// Written by Tian Zhou
// Created 9/11/13
// Last Modified 9/11/13

#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

const string MINUS = "- ";
const string MINUS_SPACE = "  ";

int find_gcd(int a, int b)
{
    int t;
    while (b != 0)
    {
        t = b;
        b = a % t;
        a = t;
    }
    return a;
}

int find_num_length(int n)
{
    if (n >= 1000)
        return 4;
    else if (n >= 100)
        return 3;
    else if (n >= 10)
        return 2;
    else
        return 1;
}

string get_chars(char c, int n)
{
    string str = "";
    for (int i = 0; i < n; i++)
        str += c;

    return str;
}

int main()
{
    int cases = 0;
    int n;
    int *nums;
    int sum;
    bool is_neg;

    int avg_int;

    int avg_frac;
    int gcd;

    string frac_space;

    int avg_frac_up;
    int avg_frac_down;

    int up_length;
    int down_length;

    string up, middle_left, middle_right, down;

    while (scanf("%d", &n) && n != 0)
    {
        cases++;
        nums = new int[n];
        sum = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &nums[i]);
            sum += nums[i];
        }

        if (sum < 0)
        {
            is_neg = true;
            sum *= -1;
        }
        else
        {
            is_neg = false;
        }

        avg_int = sum / n;

        printf("Case %d:\n", cases);

        if (sum % n == 0)
        {
            if (is_neg)
                printf("%s%d\n", MINUS.c_str(), avg_int);
            else
                printf("%d\n", avg_int);
        }
        else
        {
            up = "";
            middle_left = "";
            middle_right = "";
            down = "";

            if (is_neg)
            {
                up.append(MINUS_SPACE);
                middle_left.append(MINUS);
                down.append(MINUS_SPACE);
            }

            if (avg_int != 0)
            {
                frac_space = get_chars(' ', find_num_length(avg_int));
                up.append(frac_space);
                down.append(frac_space);
            }

            avg_frac = sum % n;
            gcd = find_gcd(avg_frac, n);

            avg_frac_up = avg_frac / gcd;
            avg_frac_down = n / gcd;

            up_length = find_num_length(avg_frac_up);
            down_length = find_num_length(avg_frac_down);

            middle_right += get_chars('-', down_length);
            up += get_chars(' ', down_length - up_length);

            printf("%s%d\n", up.c_str(), avg_frac_up);
            if (avg_int != 0)
                printf("%s%d%s\n", middle_left.c_str(), avg_int, middle_right.c_str());
            else
                printf("%s%s\n", middle_left.c_str(), middle_right.c_str());
            printf("%s%d\n", down.c_str(), avg_frac_down);
        }
    }

    return 0;
}