package ASS_2_JAVA;

import java.lang.Math; 

public class ArmstrongUnderHundred {
    public static void main(String[] args) {
        for (int i = 1; i < 101; i++) {

            int number = i;
            int digits = 0;
            while(number > 0){
                digits++;
                number /= 10;
            }

            number = i;
            int result = 0;
            while (number > 0){
                result += Math.pow(number,digits);
                number /= 10;
            }

            if(result == i){
                System.out.print(i +" ");
            }
        }
    }
}
