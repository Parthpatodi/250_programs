#include <stdio.h>
#include <stdlib.h>
int countEven(int n, int *a)
{
    int Even = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 == 0)
        {
            Even++;
        }
    }
    return Even;
}
int countOdd(int n, int *a)
{
    int Odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 != 0)
        {
            Odd++;
        }
    }
    return Odd;
}
int main()
{
    int *a, n, Even = 0, Odd = 0;
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    printf("Odd:%d\n", countOdd(n, a));
    printf("Even:%d\n", countEven(n, a));

    return 0;
}