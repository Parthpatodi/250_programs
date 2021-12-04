//•	Check whether the triangle is an equilateral, isosceles or scalene triangle.
#include<stdio.h>
int triangle(int x, int y, int z)
{
  if(x==y&&x==z)
  printf("triangle is equilateral\n");
  else if(x==y||y==z||x==z)
  printf("triangle is isoceles\n");
  else 
  printf("triangle is scalene\n");

}
int main()
{
  int a,b,c;
  printf("Enter the angles of a triangle\n");
  scanf("%d%d%d",&a,&b,&c);
  triangle(a,b,c);
  return 0;
}