import java.util.Scanner;

public class InterchangeLargestSmallest {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // TODO.1 - Get the input from the user
        System.out.println("Enter the size of the array: ");
        int size;
        size = sc.nextInt();

        int[] arr = new int[size];
        System.out.println("Enter the elements of array: ");
        for (int i = 0; i < size; i++) {

            arr[i] = sc.nextInt();
        }

        // TODO.2 - Now loop through the array and get the indices of most valued and least valued number
        int max = -999999999;
        int min = 999999999;

        int max_pos = 0, min_pos = 0;
        for (int i = 0; i < size; i++) {

            if (arr[i] > max) {
                max = arr[i];
                max_pos = i;
            }

            if (arr[i] < min) {
                min = arr[i];
                min_pos = i;
            }
        }
        // TODO.3 - Once you get the positions swap them
        int temp = arr[max_pos];
        arr[max_pos] = arr[min_pos];
        arr[min_pos] = temp;

        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
