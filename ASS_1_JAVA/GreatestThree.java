import java.util.Scanner;

public class GreatestThree {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter three numbers: ");
        int a = S.nextInt();
        int b = S.nextInt();
        int c = S.nextInt();

        int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c) ;
        System.out.println("Maximum is : " + max);
    }
}
