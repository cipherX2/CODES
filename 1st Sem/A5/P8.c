// To check whether the input is vowel or consonant or other character usin switch case
#include<stdio.h>
int main()
{
    char x;
    printf("Enter any alphabet to check : ");
    scanf("%c",&x);

    if((x>='a' && x<='z' ) || (x>='A' && x<='Z'))
    {
        switch(x)
        {
            case 'a': printf("It is a vowel");
                     break;
            case 'e': printf("It is a vowel");
                     break;
            case 'i': printf("It is a vowel");
                     break;
            case 'o': printf("It is a vowel");
                     break;
            case 'u': printf("It is a vowel");
                     break;
            case 'A': printf("It is a vowel");
                     break;
            case 'E': printf("It is a vowel");
                     break;
            case 'I': printf("It is a vowel");
                     break;
            case 'O': printf("It is a vowel");
                     break;
            case 'U': printf("It is a vowel");
                     break;
            default : printf("It is a consonant");

        }

    }
    else
    {
        printf("It is some other special symbol or any other character");
    }
    return 9990;
    
    
}