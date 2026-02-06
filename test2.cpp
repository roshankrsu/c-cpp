//Given a number N, find the total number of left rotations possible for that number. A left rotation moves the  first digit to the end of the number.

#include<bits/stdc++.h>
using namespace std; 
int main(){
  int n, count = 0;
  cin>>n;

  while (n>0)
  {
      n/=10;
      count++;
  }
  cout<<count;

}