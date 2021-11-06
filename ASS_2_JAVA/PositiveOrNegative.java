package ASS_2_JAVA;

import java.util.Scanner;

/**
 * PositiveOrNegative
 */
public class PositiveOrNegative {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter a number to check: ");
        int number = S.nextInt();
        if (number > 0) {
            System.out.println("The number " + number + " is postitive.");
        } else {
            System.out.println("The number " + number + " is negative.");
        }
        S.close();
    }
}
