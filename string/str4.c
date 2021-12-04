//two string compare
#include<stdio.h>
#include<string.h>
void compare()
{
    char a[100], b[100];    
    printf("Enter the first string\n");    
    gets(a);    

    printf("Enter the second string\n");    
    gets(b);
    
    if( strcmp(a,b) == 0 )
        printf("Entered strings are equal.\n");
    else
        printf("Entered strings are not equal.\n");
    
}
int main()
{
    compare();

        return 0;
}