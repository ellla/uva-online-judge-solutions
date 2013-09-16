// UVa Online Judge
// Problem 893 - Y3K Problem
// Written by Tian Zhou
// Created 9/11/13
// Last Modified 9/11/13

import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int diff, dd, mm, yyyy;
        GregorianCalendar calendar;

        diff = scanner.nextInt();
        dd = scanner.nextInt();
        mm = scanner.nextInt();
        yyyy = scanner.nextInt();

        while (dd != 0)
        {
            calendar = new GregorianCalendar(yyyy, mm - 1, dd);
            calendar.add(Calendar.DATE, diff);

            System.out.printf("%d %d %d\n", calendar.get(Calendar.DATE),
                    calendar.get(Calendar.MONTH) + 1, calendar.get(Calendar.YEAR));

            diff = scanner.nextInt();
            dd = scanner.nextInt();
            mm = scanner.nextInt();
            yyyy = scanner.nextInt();
        }
    }
}