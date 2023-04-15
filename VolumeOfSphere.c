#include<stdio.h>
int main(){
    float r;
    printf("Enter the radius : ");
    scanf("%f",&r);
    float volume = 4*3.14*r*r/3;
    printf("Area of circle : %f",volume);
    return 0;
} 