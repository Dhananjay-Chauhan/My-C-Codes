#include<stdio.h>
struct std{
    int roll;
    int marks[3];
    char name[100];
    int gpa[100];
}s;
void calcgpa(int arr[],int x){
    int sum;
    int arrgpa[100];
    for (int j = 0; j < 3; j++)
    {
        sum=sum+arr[i];
    }
    
    
    
    for (int k = 0; k < x; k++)
    {
        printf("%d",s[i].gpa);
    }
    
}
int main(){
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct std s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name:");
        scanf("%s",s[i].name);
        printf("Enter the roll:");
        scanf("%d",&s[i].roll);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the marks:");
            scanf("%d",&s[i].marks);
        }
    }
    for (int i = 0; i < n; i++)
    {
        calcgpa(s[i].marks,n);
    }
    
    
    

}