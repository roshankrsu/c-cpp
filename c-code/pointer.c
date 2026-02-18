#include<stdio.h>

int main(){
   
    int age = 20;
    int * pAge = &age;
    double gpa = 6.3;
    double * pGpa = &gpa;
    char grade = 'B';
    char * pGrade = &grade;


    printf("age's memory address: %p\n", pAge); 

    

    return 0;
}