#include<stdio.h>
void fabonacci(int num);
int main (){
    int num=0;
    printf("enter a number :");
    scanf("%d",&num);
    fabonacci( num);
return 0;
}
void fabonacci (int num){
    int a=0,b=1,c,i=3;

    if (num==1)
    printf("%d\t",a);

    if(num>=2)
    printf("%d\t%d\t",a,b);

    while (i<=num)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        i++;
    }
}
