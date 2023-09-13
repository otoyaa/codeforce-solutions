#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)<<"\n"
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;read(n);
    vector<char> v(n);

    rep(i,0,n)read(v[i]);

    int ans=0;
    rep(i,0,v.size()){
        if(v[i]!=v[i+1])
            continue;
        else
            ans++;
    }
    print(ans);
}   
