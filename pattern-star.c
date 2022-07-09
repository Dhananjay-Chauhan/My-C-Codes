#include<stdio.h>
void star(int n);
int main(){
    int k;
    printf("Enter the number the lines::");
    scanf("%d",&k);
    star(k);
    return 0;
}
void star(int n){
    if (n==1){
        printf("*\n");

    }
    star(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}