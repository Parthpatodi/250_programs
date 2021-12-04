// program to calculate the LCM of two no. using do while 
#include <stdio.h>
int lcm(int n1,int n2)
 { int max ;
    max = (n1 > n2) ? n1 : n2;

    do {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
           }
        ++max;
        }while (1);
 }
int main() {
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    lcm(n1,n2);
    return 0;
}