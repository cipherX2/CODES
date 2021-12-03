package com.company;

class Parent1{
    void printMe(){
        System.out.println("This is parent class");
    }
}

class ChildOfParent1 extends Parent1{
    void printMeChild(){
        System.out.println("This is child class");
    }
}

public class Inheritance01 {
    public static void main(String...args) {
        // method of parent class by object of parent class
        Parent1 obj = new Parent1();
        obj.printMe();

        // method of child class by object of child class
        ChildOfParent1 objChild = new ChildOfParent1();
        objChild.printMeChild();

        // method of parent class by object of child class
        objChild.printMe();

    }
}
