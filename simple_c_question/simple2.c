//program to print the ASCII value of a character
#include <stdio.h>
char ASCII(char x)
 {
    printf("%d",x);
 }
int main()
 {
    char ch;
    printf("Enter a Character \n");
    scanf("%c", &ch);
    ASCII(ch);
  return 0;
 }