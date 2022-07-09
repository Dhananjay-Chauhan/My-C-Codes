#include<stdio.h>
int main(){
    float i=0;
    float n=0,s=0,av;
    label:
        printf("Enter a number:");
        scanf("%f",&n);
        if (n>0){
            i++;
            s=s+n;
            goto label;
        }
    printf("Average=%f",s/i);
    return 0;
}