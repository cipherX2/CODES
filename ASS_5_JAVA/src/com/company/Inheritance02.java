package com.company;

class Member{
    String name, address;
    int age;
    double phone, salary;

    Member(String name, String address, int age, double phone, double salary){
        this.name = name;
        this.address = address;
        this.age = age;
        this.phone = phone;
        this.salary = salary;
    }

    void printSalary(){
        System.out.println("Salary: " + this.salary);
    }

    void printDetails(){
        System.out.format("Name: %s\n Address: %s\n Age: %d\n Phone: %f\n Salary:%f\n",
                name, address, age, phone, salary);
    }
}

class Employee extends Member{
    String specialization;
    Employee(String name, String address, int age, double phone, double salary, String specialization){
        super(name, address, age, phone, salary);
        this.specialization = specialization;
        printDetails();
        System.out.println("Specialization: " + specialization);
    }
}

class Manager extends Member{
    String department;
    Manager(String name, String address, int age, double phone, double salary, String department){
        super(name, address, age, phone, salary);
        this.department = department;
        printDetails();
        System.out.println("Department: " + department);
    }
}

public class Inheritance02 {
    public static void main(String[] args) {
        Employee employee1 = new Employee("Blake Griffin","221B Baker Street",23,
                441123,50000,"Professional Basketball Player");
        Manager managerchicagobulls = new Manager("Phil Jackson","Chicago,United States", 41,7721237,
                900000,"Chicago Bulls NBA");
    }
}
