#include<stdio.h>
int main(){
    int n1,n2,n3,n4;
    printf("Enter num_1 :");
    scanf("%d",&n1);
    printf("Enter num_2 :");
    scanf("%d",&n2);
    printf("Enter num_3 :");
    scanf("%d",&n3);
    printf("Enter num_4 :");
    scanf("%d",&n4);
    if((n1 >n2) && (n1 > n4) && (n1 >n3))
    {
        printf("Greatest number is %d",n1);
    }
    else if ((n2>n1) && (n2>n3) && (n2>n4))
    {
        printf("Greatest number is %d",n2);
    }
    else if ((n3>n2) && (n3>n1) && (n1>n4))
    {
        printf("Greatest number is %d",n3);
    }
    else if ((n4>n2) && (n4>n3) && (n4>n1))
    {
        printf("Greatest number is %d",n4);
    }
    return 0;
}
  