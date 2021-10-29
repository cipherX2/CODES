import java.util.Scanner;

public class SwapUsingVariables {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        int num1 = S.nextInt();
        int num2 = S.nextInt();
        System.out.println("Values before swap: " + num1 + " " + num2);
        int temp;
        temp = num1;
        num1 = num2;
        num2 = temp;
        System.out.println("Values after swap: " + num1 + " " +  num2);
    }
}

