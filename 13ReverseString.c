#include<stdio.h>
int main (){
    char a[1000],swap;
    int len,i;
    printf("Enter a string ");
    gets(a);
    for ( len = 0; a[len]; len++);
    for ( i = 0; i <len/2 ; i++)
    {
        swap=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=swap;
    }
    printf("the swap string is %s",a);
return 0;    
}