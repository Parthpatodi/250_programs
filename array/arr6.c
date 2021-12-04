// •	Check String Is Palindrome Or Not Using For Loop
#include <stdio.h>
#include <string.h>

char palindrome(char s[])
{
    int x, i = 0;
    x = strlen(s) - 1;

    while (i < x)
    {
        if(s[i++] != s[x--]){
            printf("it is not a palindrome %s",s);
            return 0;
        }
    }
    printf("it is a palindrome");
}
int main()
{
    char s[100];
    printf("enter string");
    scanf("%s", s);
    palindrome(s);
}