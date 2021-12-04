//W.A.P to Find simple interest 
#include<stdio.h>
float simpleinterest(float,float,float);
float simpleinterest(float x, float y ,float z)
{ float si;
   si = (x*y*z)/100.0f;
   return (si);
}
int main(){
float p,r,t;
float result;
printf("Enter amount , rate & time :\n");
scanf("%f%f%f",&p,&r,&t);
result = simpleinterest(p,r,t);
printf("\nSimple interest = %.2f",result);
}