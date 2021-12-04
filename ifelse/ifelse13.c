//•	Find whether a number is even or odd.
#include<stdio.h>
int even_odd(int x)
{
    if(x%2==0)
    printf("given no. is even\n");
    else
    printf("given no. is odd\n");
}
int main()
{
  int n;
  printf("Enter a no.");
  scanf("%d",&n);
  even_odd(n);
  return 0;
}