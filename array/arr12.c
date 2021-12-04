//•	Get the second largest element in an array.
#include<stdio.h>
void second(int a[])
{
int k=2,count=0,i;
if(k<8){
for(i=7-1;i>0;i--)
{
 if(a[i]!=a[i+1])
 count++;
 if(count==k)
 break;
}
printf("%d\n",a[i]);
}
else if(k!=count)
printf("No exists:");
}
int main(){
int a[]={1,2,3,4,5,6,7};
second(a);

return 0;
}