package ASS_2_JAVA;

import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int number = S.nextInt();
        int fact = 1;
        while (number > 0) {
            fact *= number;
            number--;
        }
        System.out.println("Factorial is: " + fact);
        S.close();
    }
}
