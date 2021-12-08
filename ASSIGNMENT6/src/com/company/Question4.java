package com.company;

class shape{
    void draw(){
        System.out.println("Drawing Shape");
    }

    void erase(){
        System.out.println("Erasing Shape");
    }
}

class CircleShape extends shape{
    @Override
    void draw(){
        System.out.println("Drawing Circle");
    }

    @Override
    void erase(){
        System.out.println("Erasing Circle");
    }
}

class TriangleShape extends shape{
    @Override
    void draw(){
        System.out.println("Drawing Triangle");
    }

    @Override
    void erase(){
        System.out.println("Erasing Triangle");
    }
}

class SquareShape extends shape{
    @Override
    void draw(){
        System.out.println("Drawing Square");
    }

    @Override
    void erase(){
        System.out.println("Erasing Square");
    }

}

public class Question4 {
    public static void main(String...args) {
        shape ip = new shape();
        ip.draw();
        ip.erase();
    }
}
