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
    int a,b,n;cin>>a>>b>>n;

    int c=0,s=0,anti=0;
    while(n>=0){
        c++;
        n-=gcd((c&1)?a:b,n);
    }
    if(c&1){
        cout<<1<<"\n";
    }else{
        cout<<0<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);    

    solve();
}
 
