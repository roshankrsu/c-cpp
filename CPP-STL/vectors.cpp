#include<bits/stdc++.h>
using namespace std;

void explainVector(){

    vector<int> v;

    v.push_back(10);
    v.emplace_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // cout<<v[0]<<" "<<v[1]<<endl;
    // cout<<v.back()<<" ";
    
    //to print the vector
    // for(auto i = v.begin(); i != v.end(); i++){
    //     cout<<*(i)<<" ";
    // }
 
    //erase function
    //{10, 20, 30 , 40 ,50}
    v.erase(v.begin()+2, v.begin()+4); // {10, 20, 50}
  
    //Insert function
    vector<int>v1(2, 100); // {100, 100}
    v1.insert(v1.begin(),300); //{300, 100, 100}
    v1.insert(v1.begin() + 1, 2, 10); // {300, 10 , 10 , 100 , 100}

    vector<int> copy(2, 50); //{50, 50}
    v1.insert(v1.begin(), copy.begin(), copy.end());//{50, 50, 300, 10 , 10 , 100 , 100}

    cout<<v.size();
    cout<<v1.size();
}

int main(){
    explainVector();
}
  