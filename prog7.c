//Delete an element from the array from user defined function.
#include<stdio.h>

int main(){
    int arr[20];
    int n,i,pos;

    printf("enter the number of element:");
    scanf("%d",&n);

    printf("enter %d element:\n",n);
    for(i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }

    printf("enter the position to delete:",n);
    scanf("%d",&pos);

    for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }

    n--;

    printf("array after delation:");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }

    return 0;
}