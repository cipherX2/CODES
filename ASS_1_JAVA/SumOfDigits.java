package ASS_1_JAVA;
import java.util.Scanner;

public class SumOfDigits {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int num1 = S.nextInt();
        int sum = 0;
        while (num1 > 0) {
            int rem = num1 % 10;
            sum += rem;
            num1 /=10;
        }
        System.out.println("The sum of the numbers are: " + sum);
        S.close();
    }    
}
