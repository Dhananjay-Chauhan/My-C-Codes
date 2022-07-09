#include<stdio.h>
#include<math.h>
int main(){
    float n;
    do{
        printf("Enter a number :");
        scanf("%f",&n);
        if (n<0){
            continue;
        }
        else if(n==000){
            break;
        }
        else{
            printf("Square root::%f\n",sqrt(n));
        }
    }while (n>0);
    return 0;
}