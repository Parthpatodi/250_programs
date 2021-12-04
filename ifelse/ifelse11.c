//	Check whether a number is negative, positive or zero.
#include<stdio.h>
int check(int x){
    if(x>0)
    printf("given no. is positive\n");
    else if(x==0)
       printf("given no. is zero\n");
    else
       printf("given no. is negative\n");
}
int main()
{ int n;
  printf("Enter a no.\n");
  scanf("%d",&n);
  check(n);
  return 0;
}