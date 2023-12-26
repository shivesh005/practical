#include<stdio.h>

int main (){
    FILE* fp;
    
    fp=fopen("test.txt","r");

    char content[1000];

    if(fp!=NULL)
    {
        while (fgets(content,1000,fp)){
         printf("%s",content);
        }
    }
    else
    printf("file does not exist");

return 0;    
}