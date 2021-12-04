//	Calculate Sum of Natural Numbers//
#include<stdio.h>
int sum(int n)
{ int i;
  int total = 0;
  for(i = 1;i<=n;i++)
  total = total + i;
  return total;
}
int main()
{
   int n , result;
   printf("Enter a no. ");
   scanf("%d",&n);
   result = sum(n);
   printf("Sum of series 1 to %d is : %d",n,result);
   return 0;
}