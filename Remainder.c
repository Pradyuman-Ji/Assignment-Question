#include<stdio.h>
int main(){
    int a,b; //a>b   
    printf("Enter the value of a and b :");
    scanf("%d \n %d",&a,&b);
    int q=b/a;
    int r = b-a*q;
    printf("Remainder :%d",r);
}   