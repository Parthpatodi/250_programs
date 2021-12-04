// •	Sum of the main diagonal elements of a matrix.
#include<stdio.h>
void sum(){
    int r, c, n, m,i,j,sum =0;
    printf("Enter size of matrix\n  ");
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("Enter element of matrix A\n");
    for (r = 0; r < m; r++)
    {
        for (c = 0; c < n; c++)
          { 
             scanf("%d", &a[r][c]);
            if(r==c)
            sum = sum + a[r][c];
          }
    }
    printf("matrix is\n");
        for (r = 0; r < m; r++)
        {
            for (c = 0; c < n; c++)
            {
                printf("%d ", a[r][c]);
            }
            printf("\n");
        }
  printf("The sum of diagonal of the matrix is : %d\n",sum);
}
int main()
{
    sum();
    return 0;
}