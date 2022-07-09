#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char str[100];
    char emp[100];
    printf("Enter string::::");
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if (str[i]==','){
            str[i]=';';
        }
    }
    printf("%s",str);
    
    return 0;
}