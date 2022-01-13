package com.company;

import java.util.Scanner;

public class Question2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x, y;
        x = sc.nextInt();
        y = sc.nextInt();
        if ((x - y) == 0) {
            try {
                throw new ArithmeticException();
            } catch (Exception e) {
                System.out.println("The denominator cannot be 0. Program Terminated....");
            }
        } else {
            int z = x / (x - y);
            System.out.println("Result: " + z);
        }

    }
}
