package com.company;

import java.util.Scanner;

class MyEmployee{
    private String empName;
    private int empNo;
    private double basicSal, da, hra, grossSal;

    MyEmployee(String name, int employeeNo, double salary){
        this.empName = name;
        this.empNo = employeeNo;
        this.basicSal = salary;
    }

    public void print_details(){
        System.out.println("Name of employee: " + this.empName);
        System.out.println("Employee number: " + this.empNo);
        System.out.println("Basic salary: " + this.basicSal);
    }

    public double calGrossSal(){
        this.da = this.basicSal * 0.20;
        this.hra = this.basicSal * 0.10;
        this.grossSal = basicSal + da + hra;
        return grossSal;
    }

}

public class Constructors_08 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        MyEmployee Blake = new MyEmployee("Blake", 341, 24000);
        Blake.print_details();
        double blake_gross_salary = Blake.calGrossSal();
        System.out.println("Gross salary of Blake is: " + blake_gross_salary);

        MyEmployee David = new MyEmployee("David", 122, 100000);
        David.print_details();
        double David_gross_salary = David.calGrossSal();
        System.out.println("Gross salary of David is: " + David_gross_salary);

    }
}
