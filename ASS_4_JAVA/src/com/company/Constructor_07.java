package com.company;

class BankAccount{
    private String accountHolderName;
    private double accNo, balance;

    public BankAccount(String name, int account_number, double account_balance){
        accountHolderName = name;
        accNo = account_number;
        balance = account_balance;
    }

    public void print_details(){
        System.out.println("Account: " + accountHolderName);
        System.out.println("Acc. Details: " + accNo);
        System.out.println("Balance :" + balance);
    }
}

public class Constructor_07 {
    public static void main(String[] args) {
        BankAccount cc = new BankAccount("Offensive", 20331, 421);
        cc.print_details();
    }
}
