#include<stdio.h>
int rd(char c);
int main(){
    int i=0;
    int num,num2;
    char str[100];
    int tnum;
    
    printf("Enter Roman::");
    scanf("%s",&str);
    tnum=rd(str[0]);
    for (i=1;str[i]!='\0';i++){
        num=rd(str[i-1]);
        num2=rd(str[i]);
        if (num<num2){
            tnum=tnum-num+(num2-num);
        }
        else{
            tnum+=num2;
        }
        
    }
    printf("%d",tnum);
    return 0;
}
int rd(char c){
    switch(c){
    case 'I':  
        return 1;  
    case 'V':  
        return 5;  
    case 'X':  
        return 10;  
    case 'L':  
        return 50;  
    case 'C':  
        return 100;  
    case 'D':  
        return 500;  
    case 'M':  
        return 1000;  
    default:
        return 0;
    }
}