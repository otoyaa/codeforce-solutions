#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)<<"\n"
#define vi vector<int>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
typedef long long int ll;
using namespace std;

void solve(){
    string s;read(s);
    set<char> chars;

    rep(i,0,s.length()){
        chars.insert(s[i]);
    }

    if(chars.size()%2!=0){
        cout<<"IGNORE HIM!"<<"\n";
    }else{
        cout<<"CHAT WITH HER!"<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);

    solve();
}
