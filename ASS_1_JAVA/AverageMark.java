import java.util.Scanner;

public class AverageMark {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter marks of three subjects: ");
        float student1 = S.nextFloat();
        float student2 = S.nextFloat();
        float student3 = S.nextFloat();
        double Average = (student1 + student2 + student3) / 3;
        System.out.println("The average is: " + Average);
    }
}
