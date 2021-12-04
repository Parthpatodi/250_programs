// •	Uppercase, Lowercase, Special Character, or Digit
#include<stdio.h>
char character(char x)
{
  if(x>='a'&&x<='z')
     printf("Character is in Lowercase\n");
  else if(x>='A' && x<='Z')
     printf("Character is in Uppercase\n");
  else if(x>=0&&x<=9)
       printf("Character is a digit\n");
  else 
       printf("Character is a special character\n");

}
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    character(ch);
    return 0;
}