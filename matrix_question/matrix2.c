//W.A.P to find subtraction of two matrix
#include <stdio.h>
void sub(){
    int r, c, n, m;
    printf("Enter size of matrix\n  ");
    scanf("%d%d", &m, &n);
    int a[m][n];
    int b[m][n];
    printf("Enter element of matrix A\n");
    for (r = 0; r < m; r++)
    {
        for (c = 0; c < n; c++)
            scanf("%d", &a[r][c]);
    }
    printf("Enter element of matrix B");
    for (r = 0; r < m; r++)
    {
        for (c = 0; c < n; c++)
            scanf("%d", &b[r][c]);
    }
    int add[m][n];
    for (r = 0; r < m; r++)
    {
        for (c = 0; c < n; c++)
          {  
              add[r][c] = a[r][c] - b[r][c];
          }
    }

    for (r = 0; r < m; r++)
    {
        for (c = 0; c < n; c++)
         {
             printf(" %d",add[r][c]);
         }     
      printf("\n"); 
    }
    
}
int main()
{
    sub();
    return 0;

}    


