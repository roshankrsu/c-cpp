#include<bits/stdc++.h>
using namespace std;

int findSum(int arr[], int n){
    //intialized a varaible with 0 to contain the final answer
    int sum = 0;
    for(int i=0; i<n; i++){
        int j=i+1;
        while (j<n){
            if(arr[j]==arr[i]){
                break;
            }
            j++;
        }
        if(j==n){
            sum+=arr[i];
        }
    }
    return sum;
}

int main(){
    int arr[] = {1,2,3,2,3,4,5,4};
    int n = sizeof(arr)/sizeof(int);
    cout<<findSum(arr, n);
    return 0;
}