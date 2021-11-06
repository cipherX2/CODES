package ASS_2_JAVA;

import java.util.Scanner;

public class Pallindrome {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = S.nextInt();

        int safe = number;

        int reverse_number = 0;
        while (number > 0) {
            int lsb = number % 10;
            reverse_number = (10 * reverse_number) + lsb;
            number /= 10;
        }

        if (safe == reverse_number) {
            System.out.println(safe + " is a Pallindrome");
        } else {
            System.out.println(safe + " is not a Pallindrome");
        }
        S.close();
    }
}

/**
 * 121 ==> 121
 */