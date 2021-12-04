//•	Count Number of Digits of an Integer using do while
#include<stdio.h>
int number_of_digits(int n)
{
int count = 0;
 while(n!=0) {
   n = n/10;
   ++count;
  }
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