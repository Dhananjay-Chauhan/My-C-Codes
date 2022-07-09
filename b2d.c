#include<stdio.h>
#include<math.h>
int main(){
    int df=0,i=0,d=0;
    int b;
    printf("Enter a number :");
    scanf("%d",&b);
    while(b!=0){
        
        d=b%10;
        
        if (d==0){
            df=df+0;
        }
        else{
            df=df+(pow(2,i));
        }
        b=b/10;
        i++;
    }
    printf("Decimal Equivalent::%d\n",df);
    return 0;
}