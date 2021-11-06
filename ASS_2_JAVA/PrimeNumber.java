package ASS_2_JAVA;

import java.util.Scanner;
import java.lang.Math;

public class PrimeNumber {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int number = S.nextInt();
        
        int flag = 0;
        for (int i = 2; i < Math.sqrt(number); i++) {
            if(number % i == 0){
                flag += 1;
                break;
            }
        }
        if(flag == 0){
            System.out.println(number + " is a prime number.");
        }else{
            System.out.println(number + " is not a prime number.");
        }
        S.close();
    }
}
