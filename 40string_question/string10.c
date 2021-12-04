// count total no. of words in a string
#include<stdio.h>
#include <string.h>
#define str_size 100 
int main()
{
    char str[str_size];
    int  count=1, i=0;
    printf("Input the string : ");
    gets(str);	
    while(str[i]!='\0')
    {
      if(str[i]==' ')
      count++;
      i++;
    }
    printf("Total words in the string is : %d",count);
    
}