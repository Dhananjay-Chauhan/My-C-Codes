#include<stdio.h>
#include<string.h>
int main(){
    char str[4][10]={"Ram","Raju","BabuRao","Putin"};
    char temp[100];
    for (int i=0;i<4;i++){
        for(int j=0;j<4-1-i;j++){
            if(strcmp(str[j],str[j+1])>0){
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);

            }
        }
    }
    for (int i=0;i<4;i++){
        printf("%s ",str[i]);
    }
    return 0;
}