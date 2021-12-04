//•	Find A Generic Root Of Number
#include<stdio.h>  
void generic_root(int num)
{
   int temp,rem,sum = 0;
   temp = num;  
  
    while(temp > 0)  
    {  
        rem  = temp % 10;  
        sum  = sum + rem;  
        temp = temp / 10;  
        
        if(temp == 0)  
        {  
            if(sum > 9)  
            {  
                temp = sum;  
                sum  = 0;  
            }  
        }  
    }  
  
    printf("Generic Root of %d is %d\n", num, sum);  
}
int main()  
{  
    int num;  
    printf("Enter a number\n");  
    scanf("%d", &num);  
    generic_root(num);
    return 0;  
}  