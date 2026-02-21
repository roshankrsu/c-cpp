#include<bits/stdc++.h>
using namespace std;

int calSum(int n){
   int sum = 0, k;
   for(int i = 1; i<=n; i++){
    cin>>k;
    sum+=k;
   }
   return sum;
}

int main(){
    int p;
    cin>>p;
    for(int i = 0; i<p; i++){
        cout<<calSum(p);
    }

}