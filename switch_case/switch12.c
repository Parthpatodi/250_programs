// •	Check whether a number is positive, negative or zero using a switch case.
#include <stdio.h>
void check(int n)
{
     switch (n > 0)
    {
        
        case 1:
            printf("%d is positive.", n);
        break;
        case 0:
            switch (n < 0)
            {
                case 1: 
                    printf("%d is negative.", n);
                    break;
                case 0:
                    printf("%d is zero.", n);
                    break;
            }
        break;
    }
}
int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);
    check(num);

    return 0;
}