#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}
    q.back() += 5;
    cout<<q.back()<<endl;// prints 9
    cout<<q.front()<<endl; //prints 1
    q.pop();// {2,9}
    cout<<q.front()<<endl; //prints 2
}

void explainPQ(){
    //maximum heap
    priority_queue<int>pq;
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}
    cout<<pq.top()<<endl; //prints 10
    pq.pop(); //{8,5,2}
    cout<<pq.top()<<endl;//prints 8;

    //minimum heap

 priority_queue<int, vector<int>, greater<int>>pq2;
    pq2.push(5); //{5}
    pq2.push(2); //{2,5}
    pq2.push(8); //{2,5,8}
    pq2.emplace(10); //{2,5,8,10}
    cout<<pq2.top()<<endl; //prints 2
}

int main(){
    explainPQ();

    return 0;
}