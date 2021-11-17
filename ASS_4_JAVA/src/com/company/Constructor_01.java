package com.company;

import java.lang.Math;

class Triangle{
    private int sidea, sideb, sidec;
    private double area, semiperimeter, perimeter;

    public Triangle(int side_a, int side_b, int side_c){
        this.sidea = side_a;
        this.sideb = side_b;
        this.sidec = side_c;
        perimeter = (sidea+sideb+sidec);
        semiperimeter = (float) perimeter / 2;
        this.area = Math.sqrt(semiperimeter*(semiperimeter - sidea)*
                (semiperimeter - sideb)*(semiperimeter - sideb));
    }

    public double getArea(){
        return area;
    }

    public double getPerimeter(){
        return perimeter;
    }

}

public class Constructor_01 {
    public static void main(String[] args) {
        Triangle me = new Triangle(7,4,5);
        System.out.println("Area of triangle is: " + me.getArea());
        System.out.println("Perimeter of triangle is: " + me.getPerimeter());
    }
}
