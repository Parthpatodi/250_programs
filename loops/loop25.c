//Find GCD of two Numbers Using
#include <stdio.h>
int gcd(int,int);
int gcd(int n1 , int n2)
{
    int hcf,i=1;
    do{
        if(n1%i==0 && n2%i==0)
            hcf = i;
            ++i;
    }while(i <= n1 && i <= n2);
    return hcf;
}
int main()
{
    int n1, n2, result = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    result= gcd(n1,n2);
   printf("HCF of the given no is: %d",result);
    return 0;
}