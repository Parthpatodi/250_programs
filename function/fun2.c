// •	Sum of all array elements. – using recursion.
#include<stdio.h>
int findSum(int arr[], int n)
 {
    if (n <= 0)
        return 0;
    return (findSum(arr, n - 1) + arr[n-1]);
 }
int main()
 {
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", findSum(arr, n));
    return 0;
 }