// Temperature Conversion Celsius To Fahrenheit And Vice Versa
#include<stdio.h>
void print()
{
    printf("Hello");
}
void celsius_to_fahrenheit();
void celsius_to_fahrenheit()
{
    float total;
    float cel;
    printf("Enter temperature in Celsius\n");
    scanf("%f",&cel);
    total = (cel * 9/5) + 32; 
    printf("Temperature in Fahrenheit : %.2f",total);
}
void fahrenheit_to_celsius();
void fahrenheit_to_celsius()
{
    float result,fahren;
    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&fahren);
    result = (fahren - 32)*(5/9);
    printf("Temperature in Celsius : %.2f",result);
}

int main(){
   char ch;

   printf("Enter your choice if you want to\n");
   printf("convert celsius to fahrenheit then press C\n");
   printf("convert fahrenheit to celsius then press F \n");
   scanf("%c",ch);
   print();
   switch(ch)
   {
         case 'C' : celsius_to_fahrenheit();
                   break;
         case 'F' :  fahrenheit_to_celsius();
                   break;
        default : printf("Invalid choice");
    }
return 0;
}