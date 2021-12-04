//•	Check whether a character is an uppercase or lowercase alphabet.
#include<stdio.h>
int character(char x)
{
  if(x>='A'&&x<='Z')
    printf("Character is in Uppercase\n");
  else if(x>='a'&&x<='z')
       printf("Character is in lowercase\n");
  else 
       printf("Character is not a alphabet\n");

}
int main()
{
  char ch;
  printf("Enter a character ");
  scanf("%c",&ch);
  character(ch);
  return 0;
}