#include<stdio.h>
#include<stdlib.h>
int main (){
    int a[3][3],b[3][3],c[3][3],i,j,sum=0;
    printf("enter the elements of 1st matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the elements of 2nd matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("the 1st matrix is \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("  %d",a[i][j]);
        }
        printf("\n");
    }

    printf("the 2nd matrix is \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("  %d",b[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
             sum=0;
            for ( int k = 0; k < 3; k++)
            {
                sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
            } 
        }
    }
    
    printf("the product of two matrix is \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("  %d",c[i][j]);
        }
        printf("\n");
    }
return 0;    
}