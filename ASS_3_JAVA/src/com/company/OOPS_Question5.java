package com.company;

class Employee{
    String name,address;
    int year_of_joining, salary;

    public void print_details(){
        System.out.println("Name is: " + name + ", Address: "  + address +
                ", Joined on " + year_of_joining + " and salary is: $" + salary);
    }
}

public class OOPS_Question5 {
    public static void main(String[] args) {
        // Creating the first employee
        Employee employee1 = new Employee();
        employee1.name = "Sherlock Holmes";
        employee1.address = "221B Baker Street";
        employee1.year_of_joining = 1990;
        employee1.salary = 100000;

        //Creating second employee
        Employee employee2 = new Employee();
        employee2.name = "Tommy Shelby";
        employee2.address = "Small Heath, Birmingham";
        employee2.year_of_joining = 2013;
        employee2.salary = 20000000;

        //Creating third employee
        Employee employee3 = new Employee();
        employee3.name = "Ragnar Lothbrook";
        employee3.address = "Kattegat, Norway";
        employee3.year_of_joining = 2013;
        employee3.salary = 500000;

        employee1.print_details();
        employee2.print_details();
        employee3.print_details();
    }
}
