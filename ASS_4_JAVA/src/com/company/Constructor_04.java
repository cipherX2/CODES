package com.company;

class Employee{
    private int empId;
    private String empName, designation;

    public Employee(int id, String name_of_employee, String post){
        empId = id;
        empName = name_of_employee;
        designation = post;
    }

    public void printDetails(){
        System.out.println("Name: " + empName);
        System.out.println("Employee id: " + empId);
        System.out.println("Designation is: " + designation);
    }
}

public class Constructor_04 {
    public static void main(String[] args) {
        Employee e1 = new Employee(23, "Cipher","Web Developer" );
        Employee e2 = new Employee(24, "Cipherchuck","Software Engineer" );

        e1.printDetails();
        e2.printDetails();

    }
}
