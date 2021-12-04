//•	Count Number of Digits of an Integer
#include<stdio.h>
int number_of_digits(int n)
{
int count = 0;
do{
   n = n/10;
   ++count;
  }while(n!=0);
  return count; 
   
}

int main()
{
 int n,result;
 printf("Enter a number \n");
 scanf("%d",&n);
 result = number_of_digits(n);
 printf("Number of digits in %d is %d",n,result);   
 return 0;    
}