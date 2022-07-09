#include<stdio.h>
int main(){
    int i,j;
    int a[5][4];
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("Enter a[%d][%d]::",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("value %d::\n",a[i][j]);
        }
    }
    
    return 0;

}