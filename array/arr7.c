// •	Remove Duplicates Items In An Array
#include<stdio.h>
void Duplicate(int arr[],int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
               for(k=j;k<n;k++){
                   arr[k] = arr[k+1];
               }
               j--;
            n--;
            }
            
        }

    }
    


    printf("final array\n");

    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}
int main(){
    int arr[50],i,n;

    printf("enter how much element you wanna enter\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    Duplicate(arr,n);

return 0;

}