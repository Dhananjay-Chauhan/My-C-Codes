#include<stdio.h>
int main(){
    int i,j;
    int a[2][4];
    int sum=0;
    int counter=0;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("Enter a[%d][%d]::",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        counter++;
        for(j=0;j<4;j++){
            sum+=a[i][j];
        }
        printf("Value of Group %d is %d.",counter,sum);
        sum=0;
    }
    
    return 0;

}