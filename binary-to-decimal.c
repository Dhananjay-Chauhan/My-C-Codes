#include<stdio.h>
#include<math.h>
int main(){
    int bi,de=0,i=0,d,d1;
    printf("Enter a number :");
    scanf("%d",&bi);
    while(bi>0){
        i++;
        d=bi%10;
        d1=bi/10;
        if (d==0){
            de=de+0;
        }
        else{
            de=de+pow(2,i);
        }
    }
    printf("Decimal Equivalent::%d\n",de);
    return 0;
}