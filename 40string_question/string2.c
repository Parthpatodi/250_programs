// . Write a C program to copy one string to another string.
#include <stdio.h>
#include <string.h>
 
int main()
{
    char text1[100], text2[100];
    printf("Enter any string: ");
    gets(text1);
    strcpy(text2, text1);
    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
    return 0;
}