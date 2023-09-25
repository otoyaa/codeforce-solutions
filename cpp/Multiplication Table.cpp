#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void solve(){

    ll n,x;cin>>n>>x;
    int c=0;

    for(ll i=1;i*i<=x&&i<=n;i++){
        if(x%i==0&&x/i<=n){
            if(i*i==x){
                c++;
            }else{
                c+=2;
            }
        }
    }
    cout<<c<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);

    solve();
}
