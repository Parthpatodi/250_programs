//	Remove All Vowels From A String
#include<stdio.h>
#include<string.h>
int isvowel(char);

void main()
{
  char str[100],new[100];
  int i,j=0;

  printf("Enter a String To Remove Vowels \n\n");
  gets(str);
  for(i = 0; str[i] != '\0'; i++)
  {
   if(isvowel(str[i]) == 1)
   {
    new[j] = str[i];
    j++;
   }
  }

  new[j] = '\0';
  
 printf("\n\nString After Removing Vowels: \n\n%s", new);
  getchar();
}

int isvowel(char ch)
{
  switch(ch)
  {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
   return 0;
  
   default:
   return 1;
 }
}