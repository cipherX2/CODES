#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    int roll;
    char address[100];
    int mark1;
    int mark2;
    int mark3;
};

int main()
{
    struct student s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
    strcpy(s1.name, "Dinesh pattnaik");
    s1.roll = 21;
    strcpy(s1.address, "Cuttack,Odisha");
    s1.mark1 = 29;
    s1.mark2 = 45;
    s1.mark3 = 9;
    strcpy(s2.name, "Subham pattnaik");
    s2.roll = 22;
    strcpy(s2.address, "Bhubaneswar,Odisha");
    s2.mark1 = 19;
    s2.mark2 = 25;
    s2.mark3 = 99;
    strcpy(s3.name, "Sahil saha");
    s3.roll = 23;
    strcpy(s3.address, "Puri,Odisha");
    s3.mark1 = 9;
    s3.mark2 = 15;
    s3.mark3 = 12;
    strcpy(s4.name, "Aditi pattnaik");
    s4.roll = 11;
    strcpy(s1.address, "Cuttack,Odisha");
    s4.mark1 = 129;
    s4.mark2 = 145;
    s4.mark3 = 29;
    strcpy(s5.name, "ayeskant ");
    s5.roll = 211;
    strcpy(s1.address, "Old town,Odisha");
    s5.mark1 = 2129;
    s5.mark2 = 145;
    s5.mark3 = 59;
    strcpy(s1.name, "pratyush");
    s6.roll = 21;
    strcpy(s1.address, "kalpana,Odisha");
    s6.mark1 = 29;
    s6.mark2 = 45;
    s6.mark3 = 9;
    strcpy(s1.name, "sameer");
    s7.roll = 21;
    strcpy(s1.address, "Valo,Odisha");
    s7.mark1 = 29;
    s7.mark2 = 45;
    s7.mark3 = 9;
    strcpy(s1.name, "Dinesh pattnaik");
    s8.roll = 21;
    strcpy(s1.address, "Cuttack,Odisha");
    s8.mark1 = 29;
    s8.mark2 = 45;
    s8.mark3 = 9;
    strcpy(s1.name, "Dinesh pattnaik");
    s9.roll = 21;
    strcpy(s1.address, "Cuttack,Odisha");
    s9.mark1 = 29;
    s9.mark2 = 45;
    s9.mark3 = 9;
    strcpy(s1.name, "Dinesh pattnaik");
    s10.roll = 21;
    strcpy(s1.address, "Cuttack,Odisha");
    s10.mark1 = 29;
    s10.mark2 = 45;
    s10.mark3 = 9;
    printf("The name is %s\n", s1.name);
    printf("The name is %s\n", s2.name);
    printf("The name is %s\n", s3.name);
    printf("The name is %s\n", s4.name);
    printf("The name is %s\n", s5.name);
    printf("The name is %s\n", s6.name);
    printf("The name is %s\n", s7.name);
    printf("The name is %s\n", s8.name);
    printf("The name is %s\n", s9.name);
    printf("The name is %s\n", s10.name);

    return 0;
}
