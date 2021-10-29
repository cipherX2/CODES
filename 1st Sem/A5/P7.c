// To check the grade of the steel
#include<stdio.h>
int main()
{
  float h,c,ts;                              // h as in hardness,c as in carbon content, ts as in tensile strength
  printf("Enter the hardness : ");
  scanf("%f",&h);

  printf("Enter the carbon content: ");
  scanf("%f",&c);

  printf("Enter the tensile strength: ");
  scanf("%f",&ts);
  if(h>80 && c<0.7 && ts>5600)
  {
      printf("It is of Grade 10");
  }
  else if(h>80 && c<0.7 && ts<=5600)
  {
      printf("It is of Grade 9");
  }
  else if(h<=50 && c<0.7 && ts>5600)
  {
      printf("It is of grade 8");
  }
  else if(h>80 && c>=0.7 &&  ts>5600)
  {
      printf("It is of grade 7");
  }
  else if (h>80 || c<0.7 || ts>5600)
  {
      printf("It is of grade 6");
  }
  else
  {
      printf("It is of grade 5");
  }
  return 9990;

}