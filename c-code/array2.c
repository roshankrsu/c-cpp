#include<stdio.h>
int main(){
    int arr[6] = {1,43,53,67,34,41};
    int n = sizeof(arr)/sizeof(arr[0]);
     arr[0] = 10;
    for(int i = 0; i<n; i++){
    printf("%d\n",arr[i]);
    }
 
    return 0;
}