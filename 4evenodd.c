#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("Your enter number is even");
    }
    else
     printf("Your enter number is odd");
return 0;    
}