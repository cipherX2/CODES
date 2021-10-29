import java.util.Scanner;

public class AreaCircle {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter the radius of the circle: ");
        float radius = S.nextFloat();
        double area = 3.14 * radius * radius;
        System.out.println("The area of circle is : " + area);
    }
}
