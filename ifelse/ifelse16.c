//Input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
char vowel_consonant(char);
char vowel_consonant(char x)
{
    if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    printf("Alphabet is a vowel");
    else if(x>96&&x<123 || x>64 && x<91)
    printf("This Alphabet is a consonant ");
    else
    printf("This Character is not a Alphabet\n");
}
int main()
{
  char ch;
  printf("Enter a Alphabet\n");
  scanf("%c",&ch);
  vowel_consonant(ch);
}