#include<iostream>
using namespace std;
int main (){
    char ch = '7';
    if(ch >= 'a' && ch <= 'z' ){
        cout<<"lowercase";
    }
    else if(ch >= 'A' && ch <= 'Z' ){
        cout<<"Uppercase";
    }
    else if(ch >= '0' && ch <= '9' ){
        cout<<"Numeric";
    }
}