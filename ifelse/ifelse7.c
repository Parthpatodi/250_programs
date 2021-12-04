//The Date Is Correct or Not
#include<stdio.h>
int valid_or_not(int dd , int mm , int yy )
{
   if(yy>1900 && yy<9999)
     {
        if(mm>=1 && mm<=12)
          {
              if((dd>=1&&dd<=31) && (mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12))
                 printf("Date is Valid...\n");
              else if((dd>=1 && dd<=30) && (mm==4||mm==6||mm==9||mm==11))
                 printf("Date is Valid...\n");
              else if((dd>=1&&dd<=28) && (mm==2))
                 printf("Date is Valid...\n");
              else if(dd==29&&mm==2&&(yy%4==0))
                 printf("Date is valid...\n");
              else 
                 printf("Date is invalid...\n");
          }
        else 
            printf("month is invalid...\n");
     }
    else
        printf("Year is not valid...\n");
}
int main()
{  int dd,mm,yy;
   printf("Enter the date in (dd/mm/yyyy format) : ");
   scanf("%d/%d/%d",&dd,&mm,&yy);
   valid_or_not(dd,mm,yy);
   return 0;

}