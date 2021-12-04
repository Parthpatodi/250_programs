// •	Print all negative elements in an array.
#include<stdio.h>

void negative(int arr[],int n){

    int i=0;
    for(i=0;i<n;i++){
        if(arr[i]<0){
            printf("%d",arr[i]);
        }
    }
}
int main(){
     int arr[100],n,i;
     printf("enter arr size");
     scanf("%d",&n);
     printf("enter %d elements",n);
     for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
     }

     negative (arr,n);
}