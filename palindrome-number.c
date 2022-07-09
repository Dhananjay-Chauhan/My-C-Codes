#include<stdio.h>

void isPalindrome(int x);
int main(){
    int y;
    scanf("%d",&y);
    isPalindrome(y);
    return 0;
    
}
void isPalindrome(int x){
    int arr[100];
    int rev[100];
    int i=0;
    int z,len;
    while (x!=0){
        z=x%10;
        arr[i]=z;
        x=x/10;
        i++;
    }
    len=i;
    for(int j=0;j<i;j++){
        printf("%d",arr[j]);
    }
    printf("\n");
    for(int j=i;j>-1;j--){
        rev[i-j]=arr[j-1];
    }
    for(int j=0;j<i;j++){
        printf("%d",rev[j]);
    }
    int counter=0;
    for(int j=0;j<i;j++){
        if(arr[j]==rev[j]){
            counter++;
        }
    }
    if (counter==i){
        printf("True");
    }
    else{
        printf("False");
    }
}
