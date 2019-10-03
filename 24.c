#include <stdio.h>

int main() 
{
  float x,y,a,b,c,d;
  printf("Input Number 1 = ");
  scanf("%f",&x);
  printf("Input Number 2 = ");
  scanf("%f",&y);
  printf("Number 1 plus Number 2 = %.0f\n",a=x+y);
  printf("Number 1 minus Number 2 = %.0f\n",b=x-y);
  printf("Number 1 multiply Number 2 = %.0f\n",c=x*y);
  printf("Number 1 divide Number 2 = %.2f\n",d=x/y);
  return 0;
}