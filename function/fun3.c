// •	Cube of any number using the function.
#include<stdio.h>
int cube(int n){
    int result = n*n*n;
    return result;
}
int main()
{
  int no;
  printf("Enter a no.\n");
  scanf("%d",&no);
  printf("Cube of %d is %d\n",no,cube(no));
}