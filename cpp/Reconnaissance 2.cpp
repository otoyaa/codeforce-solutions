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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    int n;read(n);
    int v[101];

    l(i,0,n)read(v[i]);
    int m=1001,ff=0;
    ff=abs(v[0]-v[n-1]);
    m=min(m,ff);

    int p1=1,p2=n;
    for(int i=0;i<n;i++){
        ff=abs(v[i]-v[i+1]);
        if(m>ff){
            m=ff;
            p1=i+1;
            p2=i+2;
        }
    }
    cout<<p1<<" "<<p2;
}
