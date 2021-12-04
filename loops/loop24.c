//Sort A Float Array In Ascending And Descending Order Using.
#include<stdio.h>
void sort()
{
    int i,n=11,j;
float temp=0.0f;

float a[11] = {1.01,6.66,3.3,7.5,2.2,4.1,7.9,9.7,0.01,9.14,0.69};

printf("\nSorting A Float Array \n");

printf("\n\nElement Before Sorting \n\n");
i= 0; 
do {
     printf("%.2f  ", a[i]);
     i++;
   }while(i<=10);
printf("\n");
printf("\n\nElement After Sorting \n\n");
i = 0;
do 
{  
    j = 0;
     do{
        if(a[j]>a[j+1])
          {
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
          }
        j++;
      }while(j<n-i-1);   
    i++;
}while(i<n);

i= 0;   
 do {
     printf("%.2f  ", a[i]);
     i++;
    }while( i< 11);
 }
int main()
{

sort();
printf("\n\n");
return 0;
}

