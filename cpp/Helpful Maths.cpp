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
    vector<char> v;

    if(s.length()<2)
        print(s);
    else{
        rep(i,0,s.length()){
            if(s[i]!='+')
                v.push_back(s[i]);
        }

        sort(v.begin(), v.end());
        
        rep(j,0,v.size()){
            print(v[j]);
            if(j<v.size()-1)
                print("+");
        }
        print("\n");
    }
}   
