//Reverse a given no.using do while 
#include<stdio.h>
int reverse(int n){
   int r,s=0;
   do
  {
      r = n%10;
      s = s*10+r;
      n = n/10;
  }while(n!=0);
  return s;
}
int main()
{
  int n,result;
  printf("Enter a no.\n");
  scanf("%d",&n);
  result = reverse(n);
  printf("Reverse of given no. : %d",result);
  return 0;
}