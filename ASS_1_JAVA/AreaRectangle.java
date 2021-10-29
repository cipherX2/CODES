import java.util.Scanner;

public class AreaRectangle {
    public static void main(String[] args) {
        Scanner S  = new Scanner(System.in);
        System.out.println("Enter the length and breadth of the rectangle: ");
        int length = S.nextInt();
        int breadth = S.nextInt();
        int area = length * breadth;
        System.out.println("The area of the rectangle is: " + area);
    }
}
