#include<stdio.h>
int sum(int a,int b);
int main(){
    int c;
    int d;
    int fin;
    printf("Enter numbers::");
    scanf("%d",&c);
    scanf("%d",&d);
    fin=sum(c,d);
    printf("sum::%d",fin);
    return 0;
}
int sum(int a,int b){
    int res;
    res=a+b;
    return res;
}