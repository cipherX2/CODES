package com.company;

class Student {
    private int regNo;
    private String stdName, branch;
    private float cgpa;

    public Student() {
        this.regNo = 0;
        this.stdName = "N/A";
        this.branch = "Computer Engineering";
        this.cgpa = 0.0f;
    }

    public Student(String name, int reg_number, float cgpa) {
        stdName = name;
        regNo = reg_number;
        this.cgpa = cgpa;
    }

    public void print_details() {
        System.out.println("Name : " + this.stdName);
        System.out.println("Registration number: " + this.regNo);
        System.out.println("Branch : " + this.branch);
        System.out.println("CGPA : " + this.cgpa);
    }

}

public class Constructor_05 {
    public static void main(String[] args) {
        Student number_1 = new Student("Jay Shetty", 23, 9.43f);
        Student to_join1 = new Student();

        number_1.print_details();
        to_join1.print_details();
    }
}
