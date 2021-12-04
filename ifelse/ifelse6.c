//program to check the year is leap or not
#include<stdio.h>
int leap_year(int);
int leap_year(int x)
{
    if(x%4==0)
    printf("Given year is leap year\n");
    else
    printf("Given year is not a leap year\n");
}
int main()
{ int year;
  printf("Enter a year\n");     
  scanf("%d",&year);
  leap_year(year);
  return 0;
}