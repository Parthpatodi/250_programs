//Check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int divisible(int x)
{
  if((x%5==0)&&(x%11==0))
  printf("No. is divisible by 5 and 11");
  else
  printf("No. is not divisible by 5 & 11");
}
int main()
{
    int n;
    printf("Enter a no. to check the no. is divisible by 5 and 11 : ");
    scanf("%d",&n);
    divisible(n);
    return 0;
}