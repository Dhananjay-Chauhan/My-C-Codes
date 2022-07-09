#include<stdio.h>
void readArray();
void printArray(int *ptr);
int reverseArray();
int arr[100];
int num;
int main(){
    scanf("%d",&num);
    readArray();
    printArray(arr);
    return 0;
}
void readArray(){
    if (num<0){
        printf("N is -ve");
    }
    else{
        for(int i=0;i<num;i++){
            scanf("%d",&arr[i]);
        }
    }
}
void printArray(int *ptr)
{
    for(int i=0;i<num;i++){
        printf("%d",*ptr);
        ptr++;
    }
}