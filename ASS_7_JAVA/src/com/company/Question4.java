package com.company;

public class Question4 {
    public static void main(String[] args) {
        int a = 10, b = 0;
        try {
            int c = a / b;
            System.out.println(c);
        } catch (ArithmeticException e) {
            System.out.println(e);
        } catch (IllegalArgumentException i) {
            System.out.println(i);
        }
    }
}
