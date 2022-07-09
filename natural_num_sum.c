#include<stdio.h>

int main(){
    int a,s=0,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        s+=a;
    }
    printf("Sum = %d\n",s);
       
    return 0;

}