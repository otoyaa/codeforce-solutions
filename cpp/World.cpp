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
    vector<char> ar(s.length());
    int lower=0; // ascii lower letters is > 97
    int upper=0;

    rep(i,0,s.length()){
        ar[i]=s[i];
        if(s[i]<97){
            upper++;
        }else{
            lower++;
        }
    }

    rep(i,0,ar.size()){
        char ans;
        if(lower>=upper){
            ans=tolower(ar[i]);
            print(ans);
        }else{
            ans=toupper(ar[i]);
            print(ans);
        }
    }

}   

