// UVa Online Judge
// Problem 10523 - Very Easy !!!
// Written by Tian Zhou
// Created 9/15/13
// Last Modified 9/15/13

import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int N;
        int A;
        BigInteger bigA;
        BigInteger sum;
        BigInteger term;

        while (scanner.hasNextInt())
        {
            N = scanner.nextInt();
            A = scanner.nextInt();
            bigA = BigInteger.valueOf(A);
            sum = bigA;
            term = bigA;

            for (int i = 2; i <= N; i++)
            {
                term = term.multiply(bigA);
                sum = sum.add(term.multiply(BigInteger.valueOf(i)));
            }

            System.out.println(sum);
        }
    }
}