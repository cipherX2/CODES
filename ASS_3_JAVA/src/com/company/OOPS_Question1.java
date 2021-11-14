package com.company;

import java.util.Scanner;

class Average{
    int num1, num2, num3;
    float average;

    public void get_average(){
        average = (float) (num1 + num2 + num3) / 3;
        System.out.println("The average of the numbers are: " + average);
    }
}

public class OOPS_Question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Average marks = new Average();

        marks.num1 = sc.nextInt();
        marks.num2 = sc.nextInt();
        marks.num3 = sc.nextInt();

        //System.out.println(marks.num1);
        /*System.out.println(marks.num2);*/
        //System.out.println(marks.num3);
        marks.get_average();
    }
}
