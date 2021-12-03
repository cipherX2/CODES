package com.company;

class Rectangle {
    int length, width;

    Rectangle(int length, int width) {
        this.length = length;
        this.width = width;
    }

    int get_Area() {
        return length * width;
    }

    int get_perimeter() {
        return 2 * (length + width);
    }

}

class Square extends Rectangle {
    int side;

    Square(int side) {
        super(side, side);
    }

}

public class Inheritance03 {
    public static void main(String[] args) {
        Rectangle obj = new Rectangle(4, 3);
        System.out.println("Area: " + obj.get_Area());
        System.out.println("Perimeter: " + obj.get_perimeter());

        Square obj_square = new Square(5);
        System.out.println("Area: " + obj_square.get_Area());
        System.out.println("Perimeter: " + obj_square.get_perimeter());
    }
}
