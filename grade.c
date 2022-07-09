#include <stdio.h>
int main() {
    int n;
    printf("Enter the marks:");
    scanf("%d",&n);
    if (n>90)
    {
        printf("Grade A");
    }
    else if (n>75 && n<90)
    {
        printf("Grade B");
    }
    else if (n>65 && n<75)
    {
        printf("Grade C");
    }
    return 0;
}