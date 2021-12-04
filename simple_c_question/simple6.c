//W.A.P to convert temperature Celsius into Fahrenheit
#include<stdio.h>
float celsius_to_fahrenheit(float);
float celsius_to_fahrenheit(float x)
{
    float result;
    result = (x * 9/5) + 32;
    return result;
}
int main()
{
  float cel,temp;
  printf("Enter temperature in Celsius\n");
  scanf("%f",&cel);
  temp = celsius_to_fahrenheit(cel);
  printf("Temperature in Fahrenheit : %.2f",temp);
  return 0;
}