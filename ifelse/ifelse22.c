//	Input angles of a triangle and check whether the triangle is valid or not.
#include<stdio.h>
int valid_or_not(int x, int y, int z)
{
  if(x+y+z==180)
  printf("triangle is valid");
  else
  printf("triangle is invalid");

}
int main()
{
  int a,b,c;
  printf("Enter the angles of a triangle\n");
  scanf("%d%d%d",&a,&b,&c);
  valid_or_not(a,b,c);
  return 0;
}