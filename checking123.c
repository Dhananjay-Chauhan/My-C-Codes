#include<stdio.h>

int main(){
    int n;
    printf("Enter the Number of Colors::");
    scanf("%d",&n);
    printf("Enter the Colors::");
    int arr[100];int tarr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        tarr[i]=arr[i];
    }
    for(int j=0;j<n;j++){
        printf("%d",tarr[j]);    
    }

    return 0; 
}