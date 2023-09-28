#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)<<"\n"
#define vi vector<int>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);

    int i,j;
    int n;read(n);
    int v[n][n];

    int sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)read(v[i][j]);
    }

    for(i=0,j=0;i<n,j<n;i++,j++){
        sum+=v[i][j];
        v[i][j]=0;
    }

    for(i=0,j=n-1;i<n,j>=0;i++,j--){
        sum+=v[i][j];
        v[i][j]=0;
    }

    for(i=0;i<n;i++){
        sum+=v[n/2][i];
        v[n/2][i]=0;

    }
    for(i=0;i<n;i++){
        sum+=v[i][n/2];
        v[i][n/2]=0;
    }

    print(sum);
}
