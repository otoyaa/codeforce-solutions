#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)<<"\n"
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;read(n);
    if(n%5==0){
        print(n/5);
    }else{
        int ans=n/5;
        print(ans+1);
    }
}   
