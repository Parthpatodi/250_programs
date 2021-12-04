// print array element using recursion

#include<stdio.h>


void printEle(int arr[],int n,int i){
   
   if(n==0){
           return;
   }else{
       printf("%d",arr[i]);
   }

    printEle(arr,n,i+1);
      
}

int main(){

    int n,i,I=0;
    int arr[200];

    printf("enter size");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }

    printEle(arr,n,I);
}