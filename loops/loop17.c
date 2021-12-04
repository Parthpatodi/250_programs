//•	Display Fibonacci Series using do while
#include <stdio.h>
void fibonacci(int n)
{
    int i=3;
   int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;

    printf("Fibonacci Series: %d, %d, ", t1, t2);

  do {
      printf("%d, ", nextTerm);
      t1 = t2;
      t2 = nextTerm;
      nextTerm = t1 + t2;
      ++i;
     }while(i<=n);
}
int main() {

  int  n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  fibonacci(n);
  return 0;
}