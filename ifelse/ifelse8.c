//program to check the voting eligibility checker
#include<stdio.h>
int criteria(int x)
  {
    if(x>=18)
    printf("You are eligible for voting\n");
    else
    printf("You are not eligible for voting\n");
  }
int main()
  {   
    int age;
    printf("Enter your age to check the voting eligibility\n");
    scanf("%d",&age);
    criteria(age);
    return 0;
  }