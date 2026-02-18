#include<stdio.h>
int main()
{
   char name[20];
   printf("Enter your name: ");
   fgets(name, 20, stdin);
   printf("Your Name is %s", name);


    return 0;
}