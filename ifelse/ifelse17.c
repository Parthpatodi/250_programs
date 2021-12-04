//•	Input any character and check whether it is the alphabet, digit or special character.
#include<stdio.h>
char character(char x)
{
  if((x>='a'&&x<='z') || (x>='A' && x<='Z'))
     printf("Character is a alphabet\n");
  else if(x >= 48 && x <= 57)
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