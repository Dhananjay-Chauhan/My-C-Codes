#include<stdio.h>
int main(){
    int a,f=1,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        f*=a;
    }
    printf("Sum = %d\n",f);
       
    return 0;

}