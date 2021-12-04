//•	Greatest of Two Numbers
#include<stdio.h>
int greater_no(int x, int y)
{
  int result;
  result = x>y ? x : y;
  return result;
}
int main()
{ 
    int greater,m,n;
  printf("Enter two no.\n");
  scanf("%d%d",&m,&n);
  greater = greater_no(m,n);
  printf("%d is greater",greater);
  return 0;
}
