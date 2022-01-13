package com.company;

import java.util.Scanner;

public class Question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1, n2;
        System.out.println("Enter the values of n1 and n2 respectively: ");
        n1 = sc.nextInt();
        n2 = sc.nextInt();
        try {
            int n3 = n1 / n2;
            System.out.println("n1/n2: " + n3);
        } catch (ArithmeticException e) {
            while (n2 == 0) {
                System.out.println("Arithmetic Exception!, " +
                        "Value of n2 can't be zero.. Enter another value: ");
                n2 = sc.nextInt();
            }
            System.out.println("n1/n2: " + n1 / n2);
        }
    }
}
