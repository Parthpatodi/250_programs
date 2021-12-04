// •	Check Whether a Number is A Palindrome or Not
#include<stdio.h>
int reverse(int n){
   int r,s=0;
   while(n!=0)
  {
      r = n%10;
      s = s*10+r;
      n = n/10;
  }
  return s;
}
int main()
{
  int n,result;
  printf("Enter a no.\n");
  scanf("%d",&n);
  result = reverse(n);
  if (result == n)
  printf("%d is a palindrome",result);
  else
  printf("%d is not a palindrome",result);
  
  return 0;
}