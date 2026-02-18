#include<stdio.h>
#include<stdbool.h>

bool isEven(int num){
    num%2==0;
}

int num;

int main(){
    printf("Enter a number:");
    scanf("%d",&num);

    if(isEven(num)){
        printf("%d is a even number",num);
    }else
    {
       printf("%d is a odd number",num);
    }
    
}