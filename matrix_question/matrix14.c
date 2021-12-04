// 	Check the symmetric matrix.
#include<stdio.h>
 
int main()
{
  int m, n, c, d, A[10][10], trans[10][10];
   printf("Enter the size of matrix\n");
   scanf("%d%d", &m, &n);
 printf("Enter elements of array\n");
    {
      for (c = 0; c < m; c++)
        {
          for (d = 0; d < n; d++)
            {
              scanf("%d", &A[c][d]);
            }
        }
    }
    {  
       for (c = 0; c < m; c++)
         {
            for (d = 0; d < n; d++)
               {
                 trans[d][c] = A[c][d];
               }
         }
    }        
  if (m == n) 
  {
    for (c = 0; c < m; c++)
    {
      for (d = 0; d < m; d++)
      {
        if (A[c][d] != trans[c][d])
        break;
      }
      if (d != m)
       break;
    }
    if (c == m)
      printf("Symmetric\n");
    else
      printf("Not Symmetric\n");
  }
  else
    printf("Not Symmetric\n");
 
  return 0;
}