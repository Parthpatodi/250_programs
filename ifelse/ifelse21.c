//•	Count the total number of notes in a given amount.
#include<stdio.h>
int n2000=0,n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
unsigned int amount,temp;
int note(int amount)
{
if(amount>=1)
{
n2000 = amount/2000;
amount = amount - (n2000*2000);

n500 = amount/500;
amount = amount - (n500*500);

n200 = amount/200;
amount = amount - (n200*200);

n100 = amount/100;
amount = amount - (n100*100);

n50 = amount/50;
amount = amount - (n50*50);

n20 = amount/20;
amount = amount - (n20*20);

n10 = amount/10;
amount = amount - (n10*10);

n5 = amount/5;
amount = amount - (n5*5);

n2 = amount/2;
amount = amount - (n2*2);
 
n1 =  amount;
printf("%u amount contains\n",temp);
if(n2000)
printf("%d notes of 2000\n",n2000);
if(n500)
printf("%d notes of 500\n",n500);
if(n200)
printf("%d notes of 200\n",n200);
if(n100)
printf("%d notes of 100\n",n100);
if(n50)
printf("%d notes of 50\n",n50);
if(n20)
printf("%d notes of 20\n",n20);
if(n10)
printf("%d notes of 10\n",n10);
if(n5)
printf("%d notes of 5\n",n5);
if(n2)
printf("%d notes of 2\n",n2);
if(n1)
printf("%d notes of 1\n",n1);
}
else 
printf("Paise ki kami he ....");
}
int main()
{
printf("Enter amount:");
scanf("%u",&amount);
temp=amount;
note(amount);
return 0;
}
