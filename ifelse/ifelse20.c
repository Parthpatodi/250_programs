//•	Input month number and print number of days in that month.
#include<stdio.h>
int month(int x)
{
  switch(x){
      case 1 : printf("month is january and days in january : 31");break;
      case 2 : printf("month is february and days in feb : 28 and in leap year 29 days");break;
      case 3 : printf("month is march and days in march : 31");break;
      case 4 : printf("month is April and days in April : 30");break;
      case 5 : printf("month is May and days in May : 31");break;
      case 6 : printf("month is June and days in June : 30");break;
      case 7 : printf("month is July and days in July : 31");break;
      case 8 : printf("month is August and days in August : 31");break;
      case 9 : printf("month is September and days in September : 30");break;
      case 10: printf("month is October and days in October : 31");break;
      case 11: printf("month is November and days in November : 30");break;
      case 12: printf("month is December and days in December : 31");break;
      default: printf("Invalid choice");
      }
}
int main()
{
  int n;
  printf("Enter a no.");
  scanf("%d",&n);
  month(n);
  return 0;
}