package com.company;

import java.util.Scanner;

class MyCustomException extends Exception {
    @Override
    public String getMessage() {
        return "Insufficient Funds. Invalid Transaction......";
    }
}

class Account {
    String name;
    int acc_no;
    double balance;

    Account(String name, int acc_no, double balance) {
        this.name = name;
        this.acc_no = acc_no;
        this.balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
        System.out.println("Amount Credited :" + amount + " Remaining balance: " + balance);
    }

    void withdraw(double amount) {
        double rem = this.balance - amount;
        if (rem < 500) {
            try {
                throw new MyCustomException();
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        } else {
            balance -= amount;
            System.out.println("Amount Withdrawn: " + amount + " Remaining balance: " + balance);
        }
    }

    void transfer(int acc1, int acc2, int amount) {
        if (this.balance - amount < 500) {
            try {
                throw new MyCustomException();
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        } else {
            balance -= amount;
            System.out.println("Transaction Successful.....");
            System.out.println("Amount Transferred: " + amount + " Remaining balance: " + balance);
        }
    }
}

public class Question5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Account cipher = new Account("Cipher", 211, 109900);
        cipher.withdraw(50000);
        cipher.transfer(211, 100, 10000);
        cipher.deposit(1090);
    }
}
