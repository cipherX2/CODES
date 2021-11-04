import java.util.Scanner;

public class SimpleInterest {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter the amount, rate of interest and time period: ");
        int amount = S.nextInt();
        float interest = S.nextFloat();
        float time = S.nextFloat();
        float simpleInterest = (amount * interest * time) / 100;
        System.out.println("Simple Interest is: " + simpleInterest);
        S.close();
    }
}
