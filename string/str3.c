//to copy a string into another string
#include <stdio.h>
#include <string.h>
 void string()
 {
     char text1[100], text2[100];
    printf("Enter any string: ");
    gets(text1);
    strcpy(text2, text1);

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);

 }
int main()
{
    string();
    return 0;
}
