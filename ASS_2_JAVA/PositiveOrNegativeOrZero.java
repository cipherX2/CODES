package ASS_2_JAVA;

import java.util.Scanner;

public class PositiveOrNegativeOrZero {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter an integer to check: ");
        int number = S.nextInt();
        if (number > 0) {
            System.out.println("The number " + number + " is positive");
        } else if (number < 0) {
            System.out.println("The number " + number + " is negative");
        } else {
            System.out.println("The number " + number + " is a zero");
        }
        S.close();
    }
}
