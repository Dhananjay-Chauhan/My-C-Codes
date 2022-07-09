#include<stdio.h>
int main () {
    int  n,c,counter;
    counter=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
        if(n%c==0)
        {
            counter+=1;
        }
    }
    if (counter>=3)
    {
        printf("%d is a composite number",n);
    
    }
    else
    {
        printf("%d is a prime number",n);
    }

    return 0;   
}