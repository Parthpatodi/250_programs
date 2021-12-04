//percentage of 5 subject
#include<stdio.h>
int percentage(int,int,int,int,int);
int percentage(int p,int c,int m,int b,int e){
    float total,percentage;
    total = p+c+m+b+e;
    percentage = total/5.0f;
    return percentage;
}
int main()
{
    int p,c,m,b,e;
    float result;
    printf("Enter marks of physhics : ");
    scanf("%d",&p);
    printf("\nEnter marks of chemistry : ");
    scanf("%d",&c);
    printf("\nEnter marks of maths : ");
    scanf("%d",&m);
    printf("\nEnter marks of biology : ");
    scanf("%d",&b);
    printf("\nEnter marks of english : ");
    scanf("%d",&e);
    result = percentage(p,c,m,b,e);
    printf("Percentage of 5 subject is %.2f",result);

}