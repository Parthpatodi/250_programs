//•	Display Fibonacci Series
#include <stdio.h>
void fibonacci(n)
{
    int i;
   int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;

    printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
}
int main() {

  int  n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  fibonacci(n);
  return 0;
}