package com.company;

import java.util.Scanner;

class Area{
    int length, breadth;

    public void set_dim(int new_length, int new_breadth){
        length = new_length;
        breadth = new_breadth;
    }

    public int get_area(){
        return length * breadth;
    }
}

public class OOPS_Question6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Area rectangle1 = new Area();

        System.out.println("Enter the length and breadth of the rectangle: ");
        rectangle1.set_dim(sc.nextInt(), sc.nextInt());

        System.out.println("The area of rectangle is: " + rectangle1.get_area() + "m2");
    }
}
