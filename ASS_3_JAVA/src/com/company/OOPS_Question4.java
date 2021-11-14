package com.company;

import java.util.Scanner;

class Complex{
    int real1, real2, imaginary1, imaginary2;

    public void show_number(){
        System.out.format("Your first number was: %d+%di \n",real1,imaginary1);
        System.out.format("Your second number was: %d+%di \n",real2,imaginary2);
    }

    public void get_sum(){
        System.out.format("The sum is: %d+%di",(real1+real2), (imaginary1+imaginary2));
    }
}

public class OOPS_Question4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Complex numbers = new Complex();

        System.out.println("Enter the real and imaginary part of the first complex number: ");
        numbers.real1 = sc.nextInt();
        numbers.imaginary1 = sc.nextInt();

        System.out.println("Enter the real and imaginary part of the second complex number: ");
        numbers.real2 = sc.nextInt();
        numbers.imaginary2 = sc.nextInt();

        numbers.show_number();
        numbers.get_sum();

    }
}
