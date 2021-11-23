package com.company;

import java.util.Scanner;

class ComplexNum{
    int real, img;

    ComplexNum(int real_part, int img_part){
        this.real = real_part;
        this.img = img_part;
    }

    public void displayCompNumber(){
        System.out.format("Complex Number: %d+%di\n", real, img);
    }

    public void main(){
        Scanner sc = new Scanner(System.in);
        int real_ptII, img_ptII;
        System.out.println("Enter the real and imaginary part of second complex number: ");
        real_ptII = sc.nextInt();
        img_ptII = sc.nextInt();
        System.out.format("Sum is: %d+%di", (real+real_ptII), (img+img_ptII));
    }

}

public class Constructors_09 {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter the real and imaginary part of first complex number: ");
        ComplexNum ty = new ComplexNum(S.nextInt(),S.nextInt());
        ty.displayCompNumber();
        ty.main();
    }
}
