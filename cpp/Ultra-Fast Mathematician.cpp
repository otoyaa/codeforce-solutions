#include <bits/stdc++.h>
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define f first
#define s second
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

void solve(){
    string a;cin>>a;
    string b;cin>>b;
    string ans="";
    // diferente é 1 e igual 0
    
    l(i,0,a.size()){
        if(a[i]!=b[i]){
            ans+='1';
        }else{
            ans+='0';
        }
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   

    solve();
}
