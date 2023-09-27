#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)<<"\n"
#define vi vector<int>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
typedef long long int ll;
using namespace std;

void solve(){

    int n,m;cin>>n>>m;

    int ans=0;
 
    // (a, b) (0 ≤ a, b)
    for(int a=0;a*a<=n&&a<=m;a++){
        int b=n-a*a;
        if(a+b*b==m)
            ans++;
    }

    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);

    solve();
}
