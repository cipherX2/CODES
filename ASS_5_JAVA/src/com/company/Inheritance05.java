package com.company;

class Employee00{
    String name, empID;
    double empSalary;

    Employee00(String name, String empID, double empSalary){
        this.name = name;
        this.empID = empID;
        this.empSalary = empSalary;
    }
}

class Manager00 extends Employee00{
    int bonus;
    Manager00(String name, String empId, double empSalary, int bonus){
        super(name, empId, empSalary);
        this.bonus = bonus;
    }
}

public class Inheritance05 {
    public static void main(String[] args) {
        System.out.println("Hello World");
    }
}
