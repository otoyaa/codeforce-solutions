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
    rep(i,0,t){
        string a;read(a);
        bool ans=true; // if square

        if(a.length()%2==0){
            rep(i,0,a.length()/2)
                if(a[i]!=a[i+a.length()/2])
                    ans=false;
        }else
            ans=false;
        print(ans? "yes":"no");
    }
}
