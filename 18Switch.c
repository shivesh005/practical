#include <stdio.h>
int main (){
    int num1,num2,sum;
    char op;
    printf("enter a number ");
    scanf("%d",&num1);
    printf("enter a number ");
    scanf("%d",&num2);
    printf("enter an  operation (+,-,*,/): ");
    scanf("%s",&op);

    switch (op)
    {
    case'+':
    sum=num1+num2;
     printf("your sum is %d",sum);
        break;
        case'-':
     printf("%d",num1-num2);
        break;
        case'*':
     printf("%d",num1*num2);
        break;
        case'/':
     printf("%d",num1/num2);
        break;
     

    default:
      printf("You enter invalid ");
        
    }


return 0;
}