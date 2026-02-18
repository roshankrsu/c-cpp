#include<bits/stdc++.h>
using namespace std; 

void explainStack(){

    stack<int> st;

    st.push(1); // {1,}
    st.push(2); // {2,1,}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}

    cout<<st.top()<<endl;

    st.pop();//{3,2,1}
    cout<<st.top()<<endl;
    cout<<st.empty();

}

int main(){

    explainStack();
    
    return 0;
}