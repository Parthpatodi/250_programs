// •	Find diameter, circumference and area of a circle using functions.
#include<stdio.h>
float diameter(float r){
     float d = 2*r;
     return d;
 
}
float circumference(float r)
{
    float circum;
    circum = 2*3.14f*r;
    return circum;
}
float area(float r)
{
    float ar;
     ar =  3.14f*r*r;
    return ar;
}
int main()
{
    float radius,result;
    printf("Enter radius of a circle : ");
    scanf("%f",&radius);
    result = diameter(radius);
    printf("The diameter of circle is %.2f\n",result);
    result = circumference(radius);
    printf("Circumference of a circle is %.2f\n",result);    
    result = area(radius);
    printf("Area of circle is %.2f\n",result);
    return 0;
}