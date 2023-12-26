#include<stdio.h>


int main (){
    FILE* fp;

    fp=fopen("test.txt","a");

    if(fp!=NULL)
    printf("file open succesfully");
    else
    printf("file does not  exist");
fputs("My name is nikhil",fp);
return 0;    
}