// The transpose of a matrix.

#include<stdio.h>
void transpose()
{
     int r, c, n, m;
    printf("Enter size of matrix\n  ");
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("Enter element of matrix A\n");
    for (r = 0; r < m; r++)
    {
        for (c = 0; c < n; c++)
            scanf("%d", &a[r][c]);
    }
    printf("Transpose of matrix is \n");
   
    
        for (c = 0; c < n; c++) 
        {for (r = 0; r < m; r++)
         {
             printf(" %d",a[r][c]);
         }     
      printf("\n"); 
    }
}
int main()
{
    transpose();
    return 0;
}