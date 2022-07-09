#include<stdio.h>
int modify(int arr_m[],int n);
int main(){
    int num,j;
    int arr[100];
    scanf("%d",&num);
    if (num<0){
        printf("Invalid Input");
    }
    else{
        for (int i=0;i<num;i++){
            scanf("%d",&arr[i]);
        }
        modify(arr,num);
    return 0;
    } 
}
int modify(int arr_m[],int n){
    int temp[100];
    for(int i=0;i<n;i++){
        temp[i]=arr_m[i]*3;
        
    }
    for(int k=0;k<n;k++){
        printf("%d",temp[k]);
    }
}