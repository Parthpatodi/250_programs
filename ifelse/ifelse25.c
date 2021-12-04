//program to calculate profit and loss
#include<stdio.h>
int profit_loss(int x, int y)
{
  if (x>y)
  { 
    int profit;
    profit = x - y;
   printf("profit of %d rs",profit);
  }
  else if(x<y)
   {
    int loss;
    loss = y - x;
    printf("Loss of %d rs",loss);
   }
   else
   printf("No profit No loss");
}
int main()
 {
   int sp,cp;
   printf("Enter Selling price \n");
   scanf("%d",&sp);
   printf("Enter Cost price \n");
   scanf("%d",&cp);
   profit_loss(sp,cp);
   return 0;
 }
