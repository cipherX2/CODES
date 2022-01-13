package com.company;

import java.util.Scanner;

public class Question3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[10];
        for (int i = 0; i < 10; i++) {
            arr[i] = i + 1;
        }
        int ind, flag = 0;
        while (flag < 5) {
            System.out.println("Enter the index position you wish to access the element: ");
            ind = sc.nextInt();
            try {
                int value = arr[ind];
                System.out.println("Value at index " + ind + " is " + value);
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("Index not valid...");
                flag += 1;
            }
        }if(flag==5){
            System.out.println("Limit Exceeded.....");
        }
    }
}
