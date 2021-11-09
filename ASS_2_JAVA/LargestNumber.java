import java.util.Scanner;

public class LargestNumberInArray{

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int size = sc.nextInt();
        int [] arr = new int[size];

        System.out.println("Enter the numbers: ");
        int number;
        for (int i = 0; i < size; i++) {
            number = sc.nextInt();
            arr[i] = number;
        }

        int max = -999999999;
        for (int i=0; i<size; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        System.out.println("The largest number in the array is " + max);
    }
}
