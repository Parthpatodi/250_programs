//program to find the Gross salary of the employee
//hra = 20% , da=80%
#include<stdio.h>
float gross_salary(float);
float gross_salary(float x)
{
    float result,hra,da;
    hra=(x*20)/100;
    da=(x*80)/100;
    result=x+hra+da;
    return result;
}
int main()
{
   float bs,gs;
   printf("Enter basic salary of the employee");
   scanf("%f",&bs);
   gs = gross_salary(bs);
   printf("Gross salary : %.2f",gs);
      
}