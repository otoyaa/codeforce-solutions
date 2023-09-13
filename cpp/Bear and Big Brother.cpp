#include <bits/stdc++.h>
#define reada(x,y) cin>>x>>y
#define print(x) cout<<(x)<<"\n"
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;reada(a,b);

    int ans=0;
    while(a<=b){
        a*=3;b*=2;
        ans++;
    }

    print(ans);
}   
