//	Calculate Sum of Natural Numbers using do while //
#include<stdio.h>
int sum(int n)
{ int i=1;
  int total = 0;
  do{
  total = total + i;
  i++;
  }while(i<=n);
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