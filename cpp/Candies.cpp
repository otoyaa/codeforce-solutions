#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)
#define vi vector<int>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,a,b;read(n);
    vi v(n);

    rep(i,0,n)read(v[i]);
    cin>>a>>b;

    vi copy(v.begin()+a,v.begin()+b+1);
    // copy original vector with slice index
    
    int ans=0;
    rep(i,0,copy.size()){
        ans+=copy[i];
    //    print(copy[i]);
    }
    
    print(ans);
}
