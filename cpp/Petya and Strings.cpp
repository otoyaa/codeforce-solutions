#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); // fast cin/cout | sem flush.
    
    string a,b;cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);

    if(a==b){
        cout<<"0";
    }
    else if(a<b){
        cout<<"-1";
    }
    else{
        cout<<"1";
    }
}
