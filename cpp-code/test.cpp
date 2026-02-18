#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    
    if(a < 30 || b < 30 || c < 30 || d < 30 || e < 30){
        cout <<"Fail"<< endl;
        return 0;
    }
    
    float percentage = ((a + b + c + d + e) / 500.0) * 100;
    bool jee = (a>= 90 && percentage > 80);
    bool medical = (b>= 90 && percentage > 60);
    
    if(jee && medical){
        cout<< "Qualified Both jee and medical"<< endl;
        return 0;
    }else if(jee){
        cout << "qualified for jee"<<endl;
        return 0;
    }else if(medical){
        cout<<"qualified for medical"<<endl;
        return 0;
    }else {
        cout<<"Not qualified and failed";
    } 
    return 0;
}