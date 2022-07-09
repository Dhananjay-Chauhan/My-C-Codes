#include<stdio.h>
int avg1,avg2,avg3;
int pasf(int math,int phy,int chem);
int main(){
    int n;
    scanf("%d",&n);
    char name[n][50];int math[n];int phy[n];int chem[n];
    for(int i=0;i<n;i++){
        scanf("%s",&name[i]);
        scanf("%d",&math[i]);
        scanf("%d",&phy[i]);
        scanf("%d",&chem[i]);
    }
    int sum1=0;int sum2=0;int sum3=0;
    for(int i=0;i<n;i++){
        sum1+=math[i];
        sum2+=phy[i];
        sum3+=chem[i];
    }
    avg1=(sum1/n);avg2=(sum2/n);avg3=(sum3/n);
    int pass=1;
    int pasv;
    for(int i=0;i<n;i++){
        pasv==pasf(math[i],phy[i],chem[i]);
        if (pasv==1){
            printf("%s is Admitted",name[i]);
        }
    }
    return 0;
}
int pasf(int math,int phy,int chem){
    int c=1;
    if ((math>90) && (phy>avg2) && (chem>avg3) &&(math>avg1)){
        return c;
    }
}