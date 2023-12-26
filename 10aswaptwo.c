#include<stdio.h>
void swap (int *,int *);
int main(){
    int a,b;
    printf("Enter a numbers:\n");
    scanf("%d",&a);
    printf("Enter a numbers:\n");
    scanf("%d",&b);

    printf("\n before swapping a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("\n after swapping a=%d and b=%d",a,b);
return 0;
}
void swap(int*a ,int*b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;   
}