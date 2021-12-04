// •	Identity matrix in C.

#include<stdio.h>
void sum()
{
    int r, c, n,i,j,sum =0,count=0;
    printf("Enter size of matrix\n  ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter element of matrix A\n");
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < n; c++)
          { 
             scanf("%d", &a[r][c]);
             
          }
    }
    printf("matrix is\n");
    for (r = 0; r < n; r++)
       {
         for (c = 0; c < n; c++)
            {
                printf("%d ", a[r][c]);
            }
            printf("\n");
        }
    for (r = 0; r < n; r++)
       {
         for (c = 0; c < n; c++)
           {
             if((r == c) && a[r][c] != 1)
              {
                count = -1;
                break;
              }    
             else if (r != c && a[r][c] != 0)
			  {
				count = -1;
				break;
              }
           }
       }
        if(count==0)
        printf("The given matrix is identity\n");
        else
        printf("The matrix is not an identity matrix\n");
}
int main()
{
    sum();
    return 0;
}