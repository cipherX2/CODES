// To check what type the character is of
#include<stdio.h>
int main()
{
  char x;
  printf("Enter the character you want to check : ");
  scanf("%c",&x);

  if(x>='A' && x<='Z')
  {
      printf("It is a UPPERCASE character");

  }
  else if (x>='a' && x<='z')
  {
      printf("It is a lowercase letter");
  }
  else if (x>='0' && x<='9')
  {
      printf("It's a numeriacal value");
  }
  else
  {
      printf("It is a special character");
  }
  return 9990;

}