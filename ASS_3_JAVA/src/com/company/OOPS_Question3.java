package com.company;

class Rectangle{
    int length, breadth;

    public int area_of_rectangle(){
        int area = length * breadth;
        return area;
    }
}

public class OOPS_Question3 {
    public static void main(String[] args) {
        Rectangle first = new Rectangle();

        first.length = 4;
        first.breadth = 5;
        int area_of_first_rectangle = first.area_of_rectangle();
        System.out.println("The area of first rectangle is: " + area_of_first_rectangle + "m2");

        Rectangle second = new Rectangle();
        second.length = 5;
        second.breadth = 8;
        int area_of_second_rectangle = second.area_of_rectangle();
        System.out.println("The area of second rectangle is: " + area_of_second_rectangle + "m2");
    }
}
