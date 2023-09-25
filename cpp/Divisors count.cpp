#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)<<"\n"
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
#define repe(i,s,n) for (int i=int(s);i<=int(n);i++)
typedef long long int ll;
using namespace std;

void solve(){
    ll n;read(n);
    ll ans=0;

    repe(i,1,n+1){
        ans+=(n/i);
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);

    solve();
}
