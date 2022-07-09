#include<stdio.h>
int main(){
    char a[10]="hello";
    char b[10]="world";
    char c[10]="";
    printf("a=%s\nb=%s\n",a,b);
    int i=0,j=0,k=0;
    while (a[i] !='\0'){
        c[i]=a[i];
        i++;
    }
    while (a[j] !='\0'){
        a[j]=b[j];
        j++;
    }
    while (a[k] !='\0'){
        b[k]=c[k];
        k++;
    }
    printf("a=%s\nb=%s",a,b);

    return 0;
}