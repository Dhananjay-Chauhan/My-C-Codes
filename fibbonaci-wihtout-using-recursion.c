#include<stdio.h>
int fibonacci(int n);

int main(){
    int k;

    printf("Enter number of terms:");
    scanf("%d",&k);
    fibonacci(k);
    return 0;
}
int fibonacci(int n){
    int a=0; int b=1; int c;
    int temp=0;
    printf("%d\n",a);
    printf("%d\n",b);
    for (int i=0;i<n-2;i++){
        c=a+b;
        printf("%d\n",c);
        temp=b;
        b=c;
        a=temp;
      
    }
    
}