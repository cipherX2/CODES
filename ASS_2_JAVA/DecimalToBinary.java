package ASS_2_JAVA;

import java.util.Scanner;

public class DecimalToBinary {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.print("Enter a decimal number: ");
        int number = S.nextInt();

        String binary = "";
        while (number > 0) {
            int rem = number % 2;
            number /= 2;
            binary += rem;
        }   

        System.err.println("The binary equivalent is: " + binary);
        
        S.close();  
    }
}
