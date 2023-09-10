#include <bits/stdc++.h>
#define read(x) cin>>x
#define readA(x,y) cin>>x>>y
#define printt(x) cout<<(x)
#define print(x) cout<<(x)<<"\n"
#define printl(arr, i) cout<<(arr[i])
#define vi vector<int>
#define vs vector<string>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
#define repe(i,s,n) for (int i=int(s);i<=int(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;read(t);

    rep(i,0,t){
        int a,b,c;cin>>a>>b>>c;
        int max_value=max({a,b,c});
        int min_value=min({a,b,c});
        int mid=a+b+c-max_value-min_value;

        if(mid+min_value==max_value)
            print("yes");
        else
            print("no");
    }
}
