#include<stdio.h>

int main()
{
    FILE * fpointer = fopen("me.txt","a");
  
    fprintf(fpointer, "\n nice");
  
    fclose(fpointer);
    return 0;
}