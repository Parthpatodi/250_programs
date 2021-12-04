//greatest of two no.
#include<stdio.h>
int greater_no(int , int);
int greater_no(int x,int y)
{
    int result;
   result = (x>y)?x:y;
   return result;
}
int main()
{
  int m,n,greater;
  printf("Enter two no.\n");
  scanf("%d%d",&m,&n);
  greater = greater_no(m,n);
  printf("%d is greatest no",greater);
  
}