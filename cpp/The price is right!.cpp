#include <bits/stdc++.h>
#define read(x) cin>>x
#define vi vector<int>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
typedef long long int ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);

    int n;read(n);
    vi a(n);
   
    rep(i,0,n)read(a[i]);

    int min_v=*min_element(a.begin(),a.end());

    rep(i,0,n){
        if(a[i]==min_v){
            cout<<i<<"\n";
            return 0;
        }
    }
}
