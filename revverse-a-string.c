#include<stdio.h>
int main(){
    char str[100];
    char temp;
    int len=0;
    int i=0;
    printf("Enter the string:");  
    gets(str);  
    while (str[i]!='\0'){
        len++;
        i++;
    }
    for(int j=0;j<len/2;j++){
        temp=str[j];
        str[j]=str[len-1-j];
        str[len-1-j]=temp;
    }
    printf("Reversed string is %s",str);
    return 0;
}