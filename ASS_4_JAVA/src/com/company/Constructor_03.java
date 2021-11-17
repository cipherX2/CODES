package com.company;

class Box {
    private int width, height, depth;
    private double volume;

    public Box(int w, int h, int d) {
        this.width = w;
        this.height = h;
        this.depth = d;
    }

    public int getVolume() {
        return (width * height * depth);
    }
}

public class Constructor_03 {
    public static void main(String[] args) {
        Box box_1 = new Box(4,5,6);
        Box box_2 = new Box(7, 8 , 9);
        System.out.println("The volume of box 1 is: " + box_1.getVolume());
        System.out.println("The volume of box 2 is: " + box_2.getVolume());
    }
}
