// To compute the roots of a quadratic quuations
#include<stdio.h>
#include<math.h>
int main()
{ 
  float a,b,c;
  float x1,x2,D;
  printf("Enter the coefficients: ");
  scanf("%f %f %f",&a,&b,&c);
  D= b*b-4*a*c;
  if(a==0 && b==0)
  {
      printf("There is no solution");
  }
  else if(a==0)
  {
      x1 = -c/b;
      printf("The solution is %f",x1);
  }
  else if(D<0)
  {
      printf("There is no real root");
  }
 else if (D>0)
  {
    x1 = (-b+sqrt(D))/2*a;
    x2 = (-1*b-sqrt(D))/2*a;
    printf("The roots are x1 = %f x2 = %f",x1,x2);
  }
  return 9990;





}