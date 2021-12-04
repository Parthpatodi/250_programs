// program to calculate the LCM of two no.
#include <stdio.h>
int lcm(int n1,int n2)
{ int max ;
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
}
int main() {
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    lcm(n1,n2);
    // maximum number between n1 and n2 is stored in max
    
    return 0;
}