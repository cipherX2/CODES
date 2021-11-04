package ASS_1_JAVA;
import java.util.Scanner;

public class CustomAddition {
    public static void main(String[] args) {
        Scanner news = new Scanner(System.in);
        float num1 = news.nextFloat();
        float num2 = news.nextFloat();
        float sum = num1 + num2;
        System.out.println("The sum of the two number are: " + sum);
        news.close();
    }
}
