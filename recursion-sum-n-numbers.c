#include<stdio.h>
int r_sum(int n);
int main(){
    int k;
    int c;
    printf("Enter nth ::");
    scanf("%d",&k);
    printf("%d",r_sum(k));

}
int r_sum(int n){
    if (n==0){
        return 0;
    }
    else{
        return (n+r_sum(n-1));
    }
}