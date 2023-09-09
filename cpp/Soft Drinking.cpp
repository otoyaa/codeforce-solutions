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

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int drink=(k*l)/n;
    int salt=c*d;
    int toast=p/np;

    int t=min(drink,salt);
    print(min(t,toast)/n);
}
