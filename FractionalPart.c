#include<stdio.h>
int main(){
    float x;
    printf("Enter the number : ");
    scanf("%f",&x);
    int y=x;
    float z=x-y;
    printf("%f",z);
    return 0;
}