package com.company;

import java.util.Scanner;
import java.lang.Math;

class Point {
    private float x1cor, y1cor, x2cor, y2cor;
    double distance_between_points;

    public Point(float x1_cor, float y1_cor, float x2_cor, float y2_cor) {
        this.x1cor = x1_cor;
        this.y1cor = y1_cor;
        x2cor = x2_cor;
        y2cor = y2_cor;
    }

    public double distanceBetPoints() {
        distance_between_points = Math.sqrt(Math.pow(x2cor - x1cor, 2) + Math.pow(y2cor - y1cor, 2));
        return distance_between_points;
    }
}

public class Constructor_06 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter both the coordinates, (x,y):  ");
        Point qwerty = new Point(sc.nextFloat(), sc.nextFloat(), sc.nextFloat(), sc.nextFloat());
        double distance = qwerty.distanceBetPoints();
        System.out.println("The distance between the two points is: " + distance + " units");
    }
}
