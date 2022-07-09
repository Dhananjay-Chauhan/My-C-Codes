#include<stdio.h>
void slice(char *str,int start,int stop);
int main(){
    char str[100];
    printf("Enter a string::");
    scanf("%s",str);
    int a,b;
    printf("Enter Start::");
    scanf("%d",&a);
    printf("Enter Stop::");
    scanf("%d",&b);
    slice(str,a,b);
    printf("%s",str);
    return 0;
}
void slice(char *str,int start,int stop){
    char strf[100];
    int i=0;
    while((start+i)<stop){
        str[i]=str[i+start];
        i++;
    }
    str[i]='\0';

}