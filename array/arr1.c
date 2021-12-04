// Convert All Input String Simultaneously Into Asterisk ( * )
#include<stdio.h>
#include<string.h>

char convert(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++){

 s[i] = '*';
    }

    printf("%s",s);
  
}
int main()
{
    char s[100];
    printf("enter string");
    scanf("%s", s);
    convert(s);
}