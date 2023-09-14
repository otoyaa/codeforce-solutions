#include <bits/stdc++.h>
#define read(x) cin>>x
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;read(t);

    double ans=0;
    rep(i,0,t){
        int p;read(p);
        ans+=p;
    }
    printf("%.6f", ans/t);
}
