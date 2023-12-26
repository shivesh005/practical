#include<stdio.h>
int fact(int n);
int main (){
    int n,r;
    float ncr;

    printf("enter n and r value \n");
    scanf("%d %d",&n,&r);
    printf("You want  %dc%d .\n",n,r);

    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("the calculation is %f",ncr);
return 0;    
}
int fact(int a){
    if (a==1)
     return 1;
return a*fact(a-1);    
}