//program to check the no. is negative or positive
#include<stdio.h>
int pos_neg(int);
int pos_neg(int x)
{
   if(x<0)
   printf("no. is negative"); 
   else
   printf("no. is positive");
}
int main()
{
 int n;
 printf("Enter a no.\n");
 scanf("%d",&n);
 pos_neg(n);
}