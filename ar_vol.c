#include<stdio.h>
int main(){
    float l,b,r,a,v,h,ac,tf,tc;
    printf("Enter the length:\n");
    scanf("%f",&l);
    printf("Enter the breadth:\n");
    scanf("%f",&b);
    a=l*b;
    printf("Area of Rectangle=%f \n",a);
    printf("Enter the Radius:\n");
    scanf("%f",&r);
    ac=3.14*r*r;
    printf("Area of Circle=%.2f\n",ac);
    printf("Enter the hieght :\n");
    scanf("%f",&h);
    v=ac*h;
    printf("Volume of Cylnder=%.2f\n",v);
    return 0;
    

}