//find no. is armstrong or not using do while
#include<stdio.h>
 void armstrong(int n)
 { int r,s=0,temp; 
    temp = n;

   do
    {
        r = n% 10;
        s = s+r*r*r;
        n = n/10;
    }while(n!=0);
    if(s==temp)
    printf("No. is armstrong\n");
    else
    printf("No. is not a armstrong\n");
 }
    int main(){
    int n,r,s=0;
    printf("Enter a no. \n");
    scanf("%d",&n);
    armstrong(n);
   return 0;   
}