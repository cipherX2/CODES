// To check the triangle is valid or not
#include<stdio.h>
int main()
{
  float s1,s2,s3;


  printf("Enter the sides of the triangel: ");
  scanf("%d %d %d",&s1,&s2,&s3);

  if(s1+s2>s3 && s2+s3>s1 && s3+s1>s2)
  {
      if(s1==s2 && s1==s3)
      {
          printf("The triangle is valid and its equilateral triangle");
      }
      else if(s1==s2 || s2==s3 || s3==s1)
      {
          printf("The triangle is valid and its isoceles triangle ");
      }
       else if(s1*s1+s2*s2==s3*s3|| s2*s2+s3*s3==s1*s1||s1*s1+s3*s3==s2*s2 )
      {
          printf("The triangle is valid and its a right angle triangle");
      }
      else
      {
          printf("The triangle is valid and scalar");
      }
      
  }
  else
  {
      printf("The triangle is not valid");
  }
  return 990;


}