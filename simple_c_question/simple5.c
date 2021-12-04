//program to check the no. is even or odd
#include<stdio.h>
int even_or_odd(int);
int even_or_odd(int x)
{
   if(x%2==0)
   printf("\nThe no. is even");
   else
   printf("\nThe no. is odd");
}

int main()
{ int n;
  printf("Enter a no.");
  scanf("%d",&n);
  even_or_odd(n);
}