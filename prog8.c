//Sort the array into ascending order. 
#include <stdio.h>

int main(){
    int arr[10];
    int n,i,j,temp;

    printf("enter the number of element:");
    scanf(" %d",&n);

    printf("enter %d element:",n);
    for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("array in ascending order:\n");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }

    return 0;

}