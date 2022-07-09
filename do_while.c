#include<stdio.h>
int main(){
    int n; int i=1 ;
    printf("Enter a number :");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    } while(i<n+1);
    return 0;
}