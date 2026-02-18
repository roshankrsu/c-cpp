#include<bits/stdc++.h>
using namespace std; 

void explainedList(){
   
    list<int> ls;

    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2, 4}

    ls.push_front(5); //{5, 2, 4}
    
    ls.emplace_front(10); //{10, 5, 2, 4}
    
     for(auto it = ls.begin(); it!= ls.end(); it++){
        cout<<*it<<" ";
     }

}

int main(){

    explainedList();

    return 0;
}