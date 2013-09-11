// UVa Online Judge
// Problem 10114 - Loansome Car Buyer
// Written by Tian Zhou
// Created 9/10/13
// Last Modified 9/10/13

#include <cstdlib>
#include <cstdio>

int main()
{
    int months;
    double down_payment, loan;
    int N;
    double value;
    double monthly_payment;

    int* month_counters;
    double* depreciation_rates;

    int current_counter;
    double current_rate;
    int j;

    scanf("%d %lf %lf %d", &months, &down_payment, &loan, &N);
    while (months > 0)
    {
        value = loan + down_payment;
        monthly_payment = loan / months;

        month_counters = new int[N];
        depreciation_rates = new double[N];

        for (int i = 0; i < N; i++)
        {
            scanf("%d %lf", &month_counters[i], &depreciation_rates[i]);
        }
        current_counter = 0;
        j = 0;

        for (int i = 0; i < months + 1; i++)
        {
            if (i == current_counter)
            {
                current_rate = depreciation_rates[j];
                current_counter = month_counters[++j];
            }

            value *= (1 - current_rate);

            if (loan < value)
            {
                if (i == 1)
                    printf("1 month\n");
                else
                    printf("%d months\n", i);

                break;
            }

            loan -= monthly_payment;
        }

        scanf("%d %lf %lf %d", &months, &down_payment, &loan, &N);
    }

    return 0;
}