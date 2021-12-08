// Write a java program to find out the area of rectangle,
// square and circle using method overloading and constructor overloading

package com.company;

import java.lang.Math;

abstract class Area {
    int side1, side2;

    Area(int side) {
        this.side1 = side;
    }

    Area(int length, int breadth) {
        this.side1 = length;
        this.side2 = breadth;
    }

    abstract double returnArea();
}

class RectangleArea extends Area {
    RectangleArea(int length, int breadth) {
        super(length, breadth);
    }

    double returnArea() {
        return side1 * side2;
    }
}

class SquareArea extends Area {
    SquareArea(int side) {
        super(side);
    }

    double returnArea() {
        return side1 * side1;
    }
}

class CircleArea extends Area {
    CircleArea(int radius) {
        super(radius);
    }

    double returnArea() {
        return 3.14 * Math.pow(side1, 2);
    }
}

public class Question3 {
    public static void main(String... args) {

        RectangleArea ip = new RectangleArea(4, 5);
        System.out.println("Area: " + ip.returnArea());

        SquareArea op = new SquareArea(4);
        System.out.println("Area: " + op.returnArea());

        CircleArea up = new CircleArea(7);
        System.out.println("Area: " + up.returnArea());

    }
}
