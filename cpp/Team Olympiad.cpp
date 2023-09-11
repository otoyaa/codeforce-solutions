#include <bits/stdc++.h>
#define read(x) cin>>x
#define readA(x,y) cin>>x>>y
#define printt(x) cout<<(x)
#define print(x) cout<<(x)<<"\n"
#define printv(arr) for (int i=0;i<arr.size();i++) cout<<arr[i]<<" "<<"\n"
#define vi vector<int>
#define vs vector<string>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
#define repe(i,s,n) for (int i=int(s);i<=int(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;read(n);
    int math=0;
    int dev=0;
    int ed=0;
    vi children(n);

    rep(i,0,n) read(children[i]); // w. number of possible teams

    rep(i,0,children.size()){
        if(children[i]==1){
            dev++;
        }else if(children[i]==2){
            math++;           
        }else{
            ed++;
        }
    }
    int minimal_teams=min({dev,math,ed});
    print(minimal_teams);

    vector<int> t1,t2,t3;
    rep(i,0,n){
        if(children[i]==1)t1.push_back(i+1);
        if(children[i]==2)t2.push_back(i+1);
        if(children[i]==3)t3.push_back(i+1);
    }

    rep(i,0,minimal_teams){
        cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<"\n";
    }
}
