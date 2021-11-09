import java.util.Scanner;

public class MeanOfNumbers {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of n: ");
        int n = sc.nextInt();
        int [] arr = new int[n];

        System.out.println("Enter the numbers: ");
        for (int i = 0; i < n; i++) {
            int input = sc.nextInt();
            arr[i] = input;
        }

        int sum = 0;
        for (int i = 0; i < n; i++){
            sum += arr[i];
        }

        double mean_value = (double) sum / n;
        System.out.println("The mean of the " + n + " numbers is " + mean_value );
    }
}


/*
* Classroom of 500 students
* 1. Make variable for each student
* 2. Use Arrays (Strong recommendation)
**/
