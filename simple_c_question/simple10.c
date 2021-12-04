//Read Integer (N) and Print the First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int three_power(int);
int three_power(int n)
{
  printf("the value of three power is %d %d %d",n,n*n,n*n*n);
} 
int main()
{
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  three_power(n);
}