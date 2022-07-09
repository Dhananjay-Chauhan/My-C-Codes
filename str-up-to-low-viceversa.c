#include<stdio.h>
int main(){
    char str[100];
    int len=0;
    int i=0;
    printf("Enter the string:");  
    gets(str);  
    while (str[i]!='\0'){
        len++;
        i++;
    }
    for(int j=0;j<len;j++){
        str[j]=str[j]-32;
    }
    printf("Changed pattern:%s",str);
    return 0;
}