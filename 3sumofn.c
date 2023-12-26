#include<stdio.h>
int main(){
    int num,sum;
    printf("enter a number which sum you want : ");
    scanf("%d",&num);

    sum =0;
    for (int i = 0; i <= num; i++)
    {
        sum=sum+i;
    }
printf("The sum of first %d  natural numbers is %d",num,sum);
return 0;
}