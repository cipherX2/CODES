package ASS_2_JAVA;

import java.util.Scanner;

public class StudentGrade {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        System.out.println("Enter the marks of student in 4 subjects : ");
        int subject_1 = S.nextInt();
        int subject_2 = S.nextInt();
        int subject_3 = S.nextInt();
        int subject_4 = S.nextInt();

        String grade = "";
        float average_mark = (subject_1 + subject_2 + subject_3 + subject_4) / 4;

        if (average_mark >= 90) {
            grade = "O";
        } else if (average_mark >= 80) {
            grade = "E";
        } else if (average_mark >= 70) {
            grade = "A";
        } else if (average_mark >= 60) {
            grade = "B";
        } else if (average_mark >= 50) {
            grade = "C";
        } else {
            grade = "F";
        }

        System.out.println("The grade of the student is " + grade);
        S.close();
    }
}
