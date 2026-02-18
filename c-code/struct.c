#include<stdio.h>
#include<string.h>

struct Student
{
    char name[50];
    char course[50];
    int age;
    double gpa;

};

int main(){
    
    struct Student student1;
    student1.age = 20;
    student1.gpa = 6.3;
    strcpy( student1.name,"Roshan");
    strcpy( student1.course,"Computer Science");

     struct Student student2;
    student2.age = 21;
    student2.gpa = 4.3;
    strcpy( student2.name,"sam");
    strcpy( student2.course,"Computer Science");

     printf("%d\n", student1.age);
     printf("%s\n", student1.name);

       printf("%d\n", student2.age);
     printf("%s\n", student2.name);

    return 0;
}