// Find factorial of any number using recursion
#include<stdio.h>
int fact(int no)
{
    if(no==1)
    return 1;

    return no*fact(no-1);
}
int main()
{
  int n,result;
  printf("Enter a no.\n");
  scanf("%d",&n);
  result = fact(n);
  printf("factorial of given no. is %d",result);
  return 0;
}