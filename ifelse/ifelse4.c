//•	A Character Is an Alphabet or Not
#include<stdio.h>
char alphabet(char);
char alphabet(char x)
{
    if (x>=97&&x<=122 || x>=65&&x<=90)
    printf("It is a Alphabet \n");
    else
    printf("This Character is not a Alphabet\n");
}
int main()
{
  char ch;
  printf("Enter a Alphabet\n");
  scanf("%c",&ch);
  alphabet(ch);

}