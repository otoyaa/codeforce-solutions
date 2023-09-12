#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)<<"\n"
#define vi vector<int>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;

void solve(){
    int n;read(n);
    vi v(n); 
    rep(i,0,v.size()) read(v[i]);

    // make copy
    vi a_2=v;
    sort(a_2.begin(),a_2.end());
    rep(i,0,n){
        if(v[i]!=a_2[1]){
            print(i+1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;read(n);
    while(n--){
        solve();
    }
}
