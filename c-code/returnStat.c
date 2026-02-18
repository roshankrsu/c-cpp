#include<stdio.h>
#include<stdlib.h>
   
double cube(double num){
    return num * num * num ;
}

int main(){
       
    printf("Answer: %.2lf", cube(2.0));

    return 0;
}