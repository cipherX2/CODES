package ASS_2_JAVA;

import java.util.Scanner;
import java.lang.Math;

public class RootsOfQuadraticEquation {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);

        float a = S.nextFloat();
        float b = S.nextFloat();
        float c = S.nextFloat();

        double square_part = Math.sqrt(b*b - 4*a*c);
        double root_one = (-b + square_part) / 2*a;
        double root_two = (-b - square_part) / 2*a;

        System.out.println("The roots of the equation are: " + root_one + " and"  + root_two);
        
        S.close();
    }
}
