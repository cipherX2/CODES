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

    void addComplexNum (ComplexNum x, ComplexNum y){
        real = x.real + y.real;
        img = x.img + y.img;
//        return this;
        System.out.format("Sum: %d+%di", real, img ) ;
    }

}

public class Constructors_09 {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter the real and imaginary part of first complex number: ");
        ComplexNum ty = new ComplexNum(S.nextInt(),S.nextInt());
        ty.displayCompNumber();

        System.out.println("Enter the real and imaginary part of first complex number: ");
        ComplexNum ok = new ComplexNum(S.nextInt(),S.nextInt());
        ok.displayCompNumber();

        ComplexNum ans = new ComplexNum(0,0);
        ans.addComplexNum(ty,ok);

    }
}
