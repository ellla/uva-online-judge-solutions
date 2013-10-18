// UVa Online Judge
// Problem 374 - Big Mod
// Written by Tian Zhou
// Created 9/22/13
// Last Modified 9/22/13

import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        BigInteger B;
        BigInteger P;
        BigInteger M;

        while (scanner.hasNextBigInteger())
        {
            B = scanner.nextBigInteger();
            P = scanner.nextBigInteger();
            M = scanner.nextBigInteger();

            System.out.println(B.modPow(P, M));
        }
    }
}