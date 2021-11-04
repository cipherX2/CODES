package ASS_1_JAVA;
import java.util.Scanner;

public class SwapWithoutVariables {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        int num1 = S.nextInt();
        int num2 = S.nextInt();
        System.out.println("Before Swap: " + num1 + " " + num2);
        num1 = (num1 + num2) - num1;
        num2 = (num1 + num2) - num2;
        System.out.println("After Swap: " + num1 + " " + num2);
        S.close();
    }
}
