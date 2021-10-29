#include <stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
};

int main()
{
    struct Student harry, ravi, dinesh;
    harry.id = 34;
    ravi.id = 4;
    dinesh.id = 2;
    harry.marks = 664;
    ravi.marks = 466;
    dinesh.marks = 466;
    harry.fav_char = 'p';
    ravi.fav_char = 'p';
    dinesh.fav_char = 'p';
    printf("Harry got %d marks\n", harry.marks);
    printf("Harry got %d id\n", harry.id);
    printf("Harry got %c favourite char\n", harry.fav_char);
    //Same thing you can do with the rest 2 stduents
    return 0;
}
