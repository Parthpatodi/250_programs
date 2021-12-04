//program to find the area of triangle
#include<stdio.h>
float area(float x , float y)
 {
  float arr;
  arr = (x*y)/2;
  return arr;
 }
 int main() 
 {
    float b,h,result=0;
    printf("Enter base and height of the triangle\n");
    scanf("%f%f",&b,&h);
    result =  area(b,h); 
    printf("%.2f",result);
     
   return 0;
 }
