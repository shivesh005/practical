#include<stdio.h>
int main (){
    int num,r,s=0 ;
    printf("enter a number ");
    scanf("%d",&num);
    int x=num;

    while (num>0)
    {
       r=num % 10;
       s= s + r;
       num=num/10;

    }
    if (s==x)
    {
        printf("the number %d is palindrome",x);
    }
    else
    printf("the number %d is not palindrome",x);
return 0;    
}