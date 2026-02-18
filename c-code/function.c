#include<stdio.h>
#include<stdlib.h>

void sayHi();

int main()
{
    sayHi("ros",20);
    return 0;
}

void sayHi(char name[] ,int age){
    printf("hello %s you are %d years old\n", name,age);
}
