#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;cin>>a>>b;

    while(b>0){
        if(a%10==0){
            a/=10;
        }else{
            a--;
        }
    b--; // diminuindo o valor b
    }
    cout<<a;
}
