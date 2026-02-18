#include<stdio.h>
int main(){
    int a=2,b=4;
    printf("a = %d and b = %d\n",a,b);

    //swap
    int temp=a;
    a = b;
    b=temp;

    printf("a = %d and b = %d",a,b);
    return 0;
}