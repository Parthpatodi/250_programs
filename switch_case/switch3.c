// 	Calculator
#include<stdio.h>
void calculator(char x)
{  
   int n1,n2,result;
 switch(x){
 case '+':  printf("Enter two no.");
            scanf("%d%d",&n1,&n2);
            result = n1 + n2;
            printf("Sum of given no. is %d",result);break;
 case '-': printf("Enter two no.");
           scanf("%d%d",&n1,&n2);
           result = n1 - n2;
           printf("Subtraction of given no. is %d",result);break;
 case '*': printf("Enter two no.");
           scanf("%d%d",&n1,&n2);
           result = n1 * n2;
           printf("Multiplication of given no. is %d",result);break;
 case '/': printf("Enter two no.");
           scanf("%d%d",&n1,&n2);
           result = n1 / n2;
           printf("Division of given no. is %d",result);break;
 case '%': printf("Enter two no.");
           scanf("%d%d",&n1,&n2); 
           result = n1 % n2;
           printf("Remainder of given no. is %d",result);break;
 case '=': printf("Enter two no.");
           scanf("%d%d",&n1,&n2);
           result = n1 == n2;
           printf("Given no. %d is equal",result);break;
 default : printf("Invalid choice ...\n");
}
}
int main()
{
char operator;
printf("Enter a operator ");
scanf("%c",&operator);
calculator(operator);
return 0;
}
 
 
 
          
