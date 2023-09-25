#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)<<"\n"
#define vi vector<int>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
#define repe(i,s,n) for (int i=int(s);i<=int(n);i++)
typedef long long int ll;
using namespace std;


// https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P22
void solve(){

    ll n;read(n);
    vi prime(n+1, true);
    vi a;

    // Sieve of Eratosthenes Algorithm
    prime[0]=prime[1]=false; // zero e um é falso

    for(int i=2;i*i<=n;i++){ // começa em dois e vai até a raiz quadrade de N
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){ 
                prime[j]=false;
            }
        }
    }

    rep(i,2,n+1){
        if(prime[i])
            a.pb(i);
    }

    cout<<a.size()<<"\n";
    rep(i,0,a.size()){
        cout<<a[i]<<" ";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);

    solve();
}
