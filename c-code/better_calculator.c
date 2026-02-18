// calculator for division multiplication minus and addition
#include<stdio.h>
#include<stdlib.h>

int main(){
  
    double num1;
    double num2;
    char op;//operator

    printf("Enter a Number: ");
    scanf("%lf",&num1);
    printf("Enter a Operator: ");
    scanf(" %c", &op);
    printf("Enter a Number: ");
    scanf("%lf",&num2);

    if(op == '+'){
        printf("%.2f", num1 + num2);
    }else if(op == '-'){
        printf("%.2f", num1 - num2);
    }else if(op == '*'){
        printf("%.2f", num1 * num2);
    }else if(op == '/'){
        printf("%.2f", num1 / num2);
    }else{
        printf("Invalid operators");
    }


    return 0;
}