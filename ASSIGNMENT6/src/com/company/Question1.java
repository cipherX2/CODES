package com.company;

import java.util.Scanner;

abstract class GeometricFigure {
    double dim1, dim2;

    public GeometricFigure(double l, double b) {
        this.dim1 = l;
        this.dim2 = b;
    }

    abstract public double getArea();

}

class Rectangle extends GeometricFigure {

    Rectangle(double l, double w) {
        super(l, w);
    }

    public double getArea() {
        return dim1 * dim2;
    }

}

class Triangle extends GeometricFigure {

    Triangle(double h, double b) {
        super(h, b);
    }

    public double getArea() {
        return 0.5 * dim1 * dim2;
    }

}

public class Question1 {
    public static void main(String...args) {
        Scanner sc = new Scanner(System.in);
        Rectangle ip = new Rectangle(4, 5);
        System.out.println("Area: " + ip.getArea());

        Triangle op = new Triangle(2,3);
        System.out.println("Area: " + op.getArea());
    }
}
