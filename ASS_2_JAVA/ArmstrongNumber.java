package ASS_2_JAVA;

import java.util.Scanner;
import java.lang.Math;

public class ArmstrongNumber {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter A Number: ");
        int number = S.nextInt();

        int digits = 0;

        int dummy = number;
        while (dummy > 0) {
            digits++;
            dummy /= 10;
        }
        int result = 0;
        dummy = number;

        while (dummy != 0) {

            result += Math.pow(dummy % 10, digits);
            dummy /= 10;
        }

        // System.out.println(result);
        if (result == number) {
            System.out.println(number + ": It's a armstrong number");
        } else {
            System.out.println(number + ": It's not a armstrong number");
        }
        S.close();
    }
}

/**
 * 153 = (1*1*1) + (5*5*5) + (3*3*3)
 */