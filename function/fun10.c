#include <stdio.h>
int isPrime(int num);
void armstrong(int num);
int isPerfect(int num);
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(isPrime(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
        armstrong(num);

    if(isPerfect(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    }
    return 0;
}

int isPrime(int num) 
{
    int i;
    
    for(i=2; i<=num/2; i++)  
    {  
        if(num%i == 0)  
        {
            return 0;
        }  
    } 
    return 1; 
}
 void armstrong(int num)
 { int r,s=0,temp; 
    temp = num;

   while(num!=0)
    {
        r = num% 10;
        s = s+r*r*r;
        num = num/10;
    }
    if(s==temp)
    printf("No. is armstrong\n");
    else
    printf("No. is not a armstrong\n");
 }

int isPerfect(int num) 
{
    int i, sum, n;
    sum = 0;
    n = num;
    
    for(i=1; i<n; i++)  
    {  
        if(n%i == 0)  
        {  
            sum += i;  
        }  
    }
    return (num == sum);
}