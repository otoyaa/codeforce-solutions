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

    int n;read(n);

    int five_pow=pow(5,n);
    string ans=to_string(five_pow);

    cout<<ans[ans.length()-2]<<ans[ans.length()-1]<<"\n";
}
