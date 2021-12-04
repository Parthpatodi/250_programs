//	Factorial of a Given Number
#include<stdio.h>
int factorial(int);
int factorial(int x)
{
 int i,result=1;
 for(i=x;i>0;i--)
   { 
     result = result * x;
     x--;
    }
 return result;
}
int main(){
int n,fact;
printf("Enter a no. : ");
scanf("%d",&n);
fact=factorial(n);
printf("Factorial of a given no. is %d",fact);
}