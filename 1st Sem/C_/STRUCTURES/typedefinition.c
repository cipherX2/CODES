#include <stdio.h>
typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[14];
} std;
int main()
{
    std s1, s2;
    s1.id = 34;
    s2.id = 45;
    printf("Value of s1.id %d", s1.id);

    // // typedef<previous_name><alias_name>;
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1, l2, l3;
    // // integer a = 4;
    // return 0;
}
