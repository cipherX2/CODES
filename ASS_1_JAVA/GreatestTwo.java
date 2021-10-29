// Greatest Using Conditional Operators 

import java.util.Scanner;

public class GreatestTwo {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter the two numbers: ");
        int num1 = S.nextInt();
        int num2 = S.nextInt();
        int greatest = (num1 > num2) ? num1 : num2;
        System.out.println(greatest + " is the greatest");
    }
}
