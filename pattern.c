#include<stdio.h>
int main(){
    int i,j,n,s;
    s=1;
    printf("%d\n",1);
    for(j=10;j<=10000;j=j*10){
        s=s+j;
        printf("%d\n",s*s);   
    }
    return 0;

}