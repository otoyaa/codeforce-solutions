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
    string a;read(a);
    vector<char> v(n);

    l(i,0,n)v[i]=a[i];

    int sum1=0,sum2=0;
    l(i,0,n){
        if(v[i-n/2]=='4'||v[i-n/2]=='7'){
            sum1+=v[i-n/2];
        }else if(v[i+n/2]=='4'||v[i+n/2]=='7'){
            sum2+=v[i+n/2];
        }else{
            no;
            return;
        }
    }
    if(sum1==sum2){
        yes;
    }else{
        no;
    }
}   

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);

    solve();
}
 
