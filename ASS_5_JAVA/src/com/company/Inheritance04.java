package com.company;

class Shape{
    void defaultCall(){
        System.out.println("This is shape");
    }
}

class Rectangle01 extends Shape{
    @Override
    void defaultCall(){
        System.out.println("This is rectangular shape");
    }
}

class Circle01 extends Shape{
    @Override
    void defaultCall(){
        System.out.println("This is circular shape");
    }
}

class Square01 extends Rectangle01{
    @Override
    void defaultCall(){
        System.out.println("Square is rectangle");
    }
}

public class Inheritance04 {
    public static void main(String[] args) {
        Shape obj = new Square01();
        obj.defaultCall();

        Rectangle01 obj_rectangle = new Square01();
        obj_rectangle.defaultCall();
    }
}
