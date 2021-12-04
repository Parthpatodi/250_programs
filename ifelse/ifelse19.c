//•	Input week number and print weekday.
#include<stdio.h>
int week_no(int x)
{
  switch (x){
    case 1 : printf("Day is Monday");break;
    case 2 : printf("Day is Tuesday");break;
    case 3 : printf("Day is Wednesday");break;
    case 4 : printf("Day is Thursday");break;
    case 5 : printf("Day is Friday");break;
    case 6 : printf("Day is Saturday");break;
    case 7 : printf("Day is Sunday");break;
    default  : printf("Invalid Choice");break;
    }
}

int main()
{
 int n;
 printf("Enter a week no.");
 scanf("%d",&n);
 week_no(n);
 return 0;
}