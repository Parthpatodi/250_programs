// •	Maximum and minimum between two numbers using functions.
#include<stdio.h>
int max_min(int a,int b)
{
  int x = a > b ? a : b;
  return x; 
}
int main()
{
 int n,m;
 printf("Enter two no.\n");
 scanf("%d%d",&n,&m);
 printf("Maximum no. is %d \n",max_min(n,m));

}