import java.util.Scanner;

public class FaranheitToCelcius {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter the tempreature in faranheit: ");
        float f = S.nextFloat();
        double celsius = ((f - 32) * 5) / 9;
        System.out.println("The tempreature in celsius is: " + celsius);
    }
}
