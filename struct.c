#include<stdio.h>
struct employee{
    int id;

};
int main(){
    int i;
    struct employee e[5];
    printf("Enter ID::");
    for(int i=0;i<5;i++){
        scanf("%d",&e[i].id);
    }
    for(int i=0;i<5;i++){
        printf("%d",e[i].id);
    }
    return 0;    
}