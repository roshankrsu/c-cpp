#include<iostream>
using namespace std;

int main(){
    //2D array
    int arr[3][5];
    arr[1][3] = 11;
    cout<<arr[1][3];//prints 11
    cout<<arr[1][4];//prints garbage value cause the array indexs not initialized
    return 0;
}