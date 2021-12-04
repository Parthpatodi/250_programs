//greatest no. amoung three no.
#include<stdio.h>
int greater_no(int , int ,int);
int greater_no(int x, int y, int z)
{ int result;
  result = (x>y && x>z)? x : ( (y>z)?y:z );
   return result;
}
int main()
{
 int a,b,c,greatest_no;
 printf("Enter three no.");
 scanf("%d%d%d",&a,&b,&c);
 greatest_no=greater_no(a,b,c);
 printf("greatest no. is %d",greatest_no);
return 0;
} 