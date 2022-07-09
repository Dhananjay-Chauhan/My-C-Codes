#include<stdio.h>
int main(){
    float i=0;
    float n=0,s=0,av;
    do{
        printf("Enter a number:");
        scanf("%f",&n);
        if (n==0){
            continue;
        }
        else if (n>0){
            i++;
            s=s+n;
            
        }
    }while(n>0);
    printf("Average=%f\n",s/i);
    return 0;
}