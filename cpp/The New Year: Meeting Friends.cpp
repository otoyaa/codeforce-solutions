#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)
#define vi vector<int>
#define mp make_pair
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vi travel(3);
    int ans=0;
    rep(i,0,3) read(travel[i]);
    
    sort(travel.begin(),travel.end());

    rep(i,0,travel.size()){
        while(travel[0]<travel[2]){
            ans++;
            travel[2]--;
        }
    }
    print(ans);
}
