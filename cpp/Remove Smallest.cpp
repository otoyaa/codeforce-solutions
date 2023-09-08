//this is not my code
// study code
#include <bits/stdc++.h>
#define read(x) cin>>x
#define readA(x,y) cin>>x>>y
#define print(x) cout<<(x)<<"\n"
#define printl(arr, i) cout<<(arr[i])
#define vi vector<int>
#define vs vector<string>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;read(t);
    while(t--){ // enquanto t!=0
        int n;read(n);
        vi arr(n);
        for(auto &it:arr)cin>>it;
        sort(arr.begin(),arr.end());
        bool ok=true;
        rep(i,1,n){
            ok&=(arr[i]-arr[i-1]<=1);
        }
        print(ok?"yes":"no");
    } 
}
