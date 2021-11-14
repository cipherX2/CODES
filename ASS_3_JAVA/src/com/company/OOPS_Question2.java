package com.company;

class Student{
    String name;
    int roll_no;

    public void print_details(){
        System.out.println("My name is " + name + " and my roll no. is " + roll_no);
    }

}

public class OOPS_Question2 {
    public static void main(String[] args) {
        Student john = new Student();

        john.name = "John Hammond";
        john.roll_no = 20;

        john.print_details();
    }
}
