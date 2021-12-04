// •	Find the maximum between two numbers using the switch case.
#include <stdio.h>
void maximum(int n1, int n2)
{
    switch(n1 > n2)
    {   
        case 0: 
            printf("%d is maximum", n2);
            break;

        case 1: 
            printf("%d is maximum", n1);
            break;
    }

}
int main()
{
    int num1, num2;

    printf("Enter two numbers to find maximum: ");
    scanf("%d%d", &num1, &num2);
    maximum(num1,num2);
     return 0;
}