#include<stdio.h>
int main(){

    char line[100];
    FILE * fpointer = fopen("me.txt","r");

    if(fpointer == NULL){
        printf("file not found!\n");
    }
    while (fgets(line, sizeof(line), fpointer))
    {
        printf("%s",line);
    }
   
    fclose(fpointer);
    return 0;
}