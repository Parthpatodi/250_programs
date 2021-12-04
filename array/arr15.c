// •	Insert An Element In An Array
#include<stdio.h>
void inserting(int arr[],int pos,int val,int n){
    int i;
    for(i=n-1;i>=pos-1;i--){
        arr[i+1] = arr[i];
    }

    arr[pos-1] = val;

    printf("final array\n");

    for(i=0;i<=n;i++){
        printf("%d\n",arr[i]);
    }

}
int main(){
    int arr[50],i,n,val,pos;

    printf("enter how much element you want to enter\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter position to insert your element\n");
    scanf("%d",&pos);
    printf("enter value");
    scanf("%d",&val);
    
    inserting(arr,pos,val,n);

return 0;

}