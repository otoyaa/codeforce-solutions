#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)
#define repe(i,s,n) for (int i=int(s);i<=int(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k,n,w;cin>>k>>n>>w;

    int ans=0;
    repe(i,1,w){
        ans+=i*k;
    }

    if((ans-n)<=0)
        print(0);
    else
        print(ans-n);   
}
