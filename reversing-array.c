#include<stdio.h>
int main(){
    int arrf[10];

    printf("Enter the Array Elements::\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arrf[i]);
    }
    int temp[10];
    for(int i=0;i<5;i++){
        temp[i]=arrf[5-1-i];
    }
    for(int j=0;j<5;j++){
        printf("%d",temp[j]);
    }
    
    return 0;
}
