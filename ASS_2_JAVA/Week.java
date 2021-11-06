package ASS_2_JAVA;

import java.util.Scanner;

public class Week {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        int user_input = S.nextInt();
        String week_day = "";
        switch (user_input) {
            case 1:
                week_day = "Monday";
                break;
            case 2:
                week_day = "Tuesday";
                break;
            case 3:
                week_day = "Wednesday";
                break;
            case 4:
                week_day = "Thursday";
                break;
            case 5:
                week_day = "Friday";
                break;
            case 6:
                week_day = "Saturday";
                break;
            case 7:
                week_day = "Sunday";
                break;
            default:
                week_day = "null";
                break;
        }
        if (week_day != "null") {
            System.out.println("The day corresponding to " + user_input + " is " + week_day);
        }else{
            System.out.println("Please check your input!!");
        }
        S.close();
    }
}
