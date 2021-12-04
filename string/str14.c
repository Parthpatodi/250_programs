// •	Count the total number of vowels and consonants in a string.
#include<stdio.h>
#include <string.h>
#define str_size 100 
int main()
{
    char str[str_size];
    int vow=0, cons=0, i=0;
    printf("Input the string : ");
    gets(str);	
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vow++;
        }
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            cons++;
        }

        i++;
    }

    printf("Number of Consonant in the string is : %d\n", cons);
    printf("Number of Vowels in the string is : %d\n", vow);

}