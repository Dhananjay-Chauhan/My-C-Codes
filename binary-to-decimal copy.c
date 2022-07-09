#include<stdio.h>

#include<math.h>
int main(){
    int b,df=0,i=0,d,d1;
    printf("Enter a number :");
    scanf("%d",&b);
    while(b>0){
        i++;
        d=b%10;
        d1=b/10;
        if (d==0){
            df=df+0;
        }
        else{
            df=df+pow(2,i);
        }
    }
    printf("Decimal Equivalent::%d\n",df);
    return 0;
}