#include<stdio.h>
int main(){
    float principle,rate,time,si;
    printf("enter the principle amount : ");
    scanf("%f",&principle);
    printf("enter the rate : ");
    scanf("%f",&rate);
    printf("enter the time: ");
    scanf("%f",&time);

    si=(principle*rate*time)/100;
    printf("enter the simple interst : %f",si);
    
return 0;
}