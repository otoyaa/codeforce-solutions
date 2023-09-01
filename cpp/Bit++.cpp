#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); // fast cin/cout | sem flush.

    int t;cin>>t;
    int c=0;

    for (int i=0;i<t;++i){
        string a;cin>>a;
        if (a=="X++"||a=="++X"){
            c++;
        }else{
            c--;
        }
    }
    cout<<c<<"\n";
}
