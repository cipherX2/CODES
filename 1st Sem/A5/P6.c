// To find largest among  four integers
#include<stdio.h>
int main()
{
  int x,y,z,p;
  printf("Enter the values:   ");
  scanf("%d %d %d %d",&x,&y,&z,&p);

  if(x>y)
  {
      if(x>z && x>p)
      {
          printf("%d is the greatest",x);
      }
  }
  if(y>z)
  {
      if(y>x && y>p)
      {
          printf("%d is the greatest",y);
      }
  }
  if(z>p)
  {
      if(z>x && z>y)
      {
          printf("%d is the greatest",z);
      }
  }
  if(p>x)
  {
      if(p>y && p>z)
      {
          printf("%d is the greatest",p);
      }
  }
  return 9990;
}