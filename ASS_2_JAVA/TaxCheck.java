package ASS_2_JAVA;

import java.util.Scanner;

public class TaxCheck {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter your Income: ");
        int income = S.nextInt();

        double tax = 0;
        if (income < 150000) {
            tax = income;
        } else if (income < 300000) {
            tax = income * 0.10;
        } else if (income < 500000) {
            tax = income * 0.20;
        } else {
            tax = income * 0.30;
        }
        System.out.println("After tax the income is: " + tax);
        S.close();
    }
}
