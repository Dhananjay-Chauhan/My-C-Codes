#include<stdio.h>
void check(char *str);
int main(){
    char words[100][100];
    int n;
    char com[100][100];
    printf("Enter the number of words::");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter words::");
        scanf("%s",&words[i]);
    }
    int counter=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            if(words[j][i]==words[j+1][i]){
                com[j][i]=words[j][i];
            }
        }
    }
    printf("%d\n",counter);
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            printf("%c",com[j][i]);
        }
    }
    return 0;
}
