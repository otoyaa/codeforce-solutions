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
    int n;read(n);
    bool y=false;
    for(int i=1;(i*(i+1))<=(n*2);i++){
        if((i*(i+1)/2)==n){
            y=true;
        }
    }
    cout<<(y?"YES":"NO")<<"\n";
}
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   

    solve();
}
