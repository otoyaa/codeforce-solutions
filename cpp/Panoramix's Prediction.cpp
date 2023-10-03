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

bool prime_solve(int n){
    if(n==1||n==0)return false;
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   

    int n,m;cin>>n>>m;
    vi v;

    for(int i=2;i<51;i++){
        if(prime_solve(i)){
            v.pb(i);
        }
    }

    bool s=false;
    for(int i=0;i<v.size();i++){
        if(v[i]==n){
            if(v[i+1]==m){
                s=true;
            }
        }
    }

    cout<<(s?"YES":"NO")<<"\n";
}
