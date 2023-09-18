#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;read(s);
    // 0 == .
    // 1 == -.
    // 2 == --

    rep(i,0,s.length()){
        if(s[i]=='-'&&s[i+1]=='-'){
            print(2);
            i++;
        }else if(s[i]=='.'){
            print(0);
        }else if(s[i]=='-'&&s[i+1]=='.'){
            print(1);
            i++;
        }else{
            cout<<s[i];
        }
    }

}
