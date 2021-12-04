//program to find Area and Circumference of a circle
#include <stdio.h>
float area(float);
float area(float x)
{
  float ar;
  ar = (3.14 * x * x);
  return (ar);
}
float circumference(float);
float circumference(float y)
{
  float cir;
  cir = (2 * 3.14 * y);
  return (cir);
}
int main()
{ float s,t,r;
  printf("Enter a radius of a circle :  ");
  scanf("%f",&r);
  s=area(r);
  printf("Area of circle is %.2f\n\n",s);
  t=circumference(r);
  printf("Circumference of circle is %.2f",t);
  return 0;
}