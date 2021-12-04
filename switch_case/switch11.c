// •	Check whether a number is even or odd using a switch case.
#include <stdio.h>
void odd_even(int n)
{
    switch(n%2) 
    {
        case 0:
            printf("%d is an EVEN number.\n",n);
            break;
        case 1:
            printf("%d is an ODD number.\n",n);
            break;
    }
    
} 
int main()
{
    int number;
     
    printf("Enter a positive integer number: ");
    scanf("%d",&number);
     odd_even(number);
     
    return 0;
}