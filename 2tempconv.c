#include<stdio.h>
int main(){
   // f=(c*9/5)+32;
   char unit;
   float f,c;
   printf("enter tempture unit which you want to convert : ");
   scanf("%s",&unit);
   

   switch (unit)
   {
   case 'c':
   printf("enter tempture in celcius : ");
   scanf("%f",&c);
   f=(c*9/5)+32;
   printf("the tempture is %f",f);
   break;
   
   case 'fc':
   printf("enter tempture in fahrenheit : ");
   scanf("%f",&f);
   c=(f-32)*(5/9);
   printf("the tempture is %f",c);

   default:
   printf("you enter invalid input");
return 0;
}
}