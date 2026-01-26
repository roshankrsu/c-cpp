#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i = 0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int even[8] = {5,6,7,8,2,5,8,9};
    int odd[5] = {55,67,96,2,4};

    swapAlternate(even, 8);
    printArray(even, 8);
}