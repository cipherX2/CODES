package com.company;

class Rectangle {
    private int length, breadth, area;

    public Rectangle(int l, int b) {
        this.length = l;
        this.breadth = b;
    }

    public int getArea() {
        return (length * breadth);
    }

    public int getPerimeter() {
        return 2 * (length + breadth);
    }

}

public class Constructor_02 {
    public static void main(String[] args) {
        Rectangle r_one = new Rectangle(4, 5);
        Rectangle r_two = new Rectangle(5, 8);

        System.out.println("Area of first rectangle is: " + r_one.getArea() + "units");
        System.out.println("Area of second rectangle is: " + r_two.getArea() + "units");
        System.out.println("Perimeter of first rectangle is: " + r_one.getPerimeter() + "units");
        System.out.println("Perimeter of second rectangle is: " + r_two.getPerimeter() + "units");
    }
}
