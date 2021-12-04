// Delete Element From Array At Desired Or Specific Position
#include<stdio.h>
void deleting(int arr[],int pos,int  n){
    int i;
    
    for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }

    printf("final array\n");

    for(i=0;i<n-1;i++){
        printf("%d\n",arr[i]);
    }

}
int main(){
    int arr[50],i,pos,n;

    printf("enter how much element you want to  enter\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter position to where delete your element\n");
    scanf("%d",&pos);
    
    
    deleting(arr,pos,n);

return 0;

}