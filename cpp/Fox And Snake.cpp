#include <bits/stdc++.h>
#define read(x) cin>>x
#define readA(x,y) cin>>x>>y
#define printt(x) cout<<(x)
#define print(x) cout<<(x)<<"\n"
#define printl(arr, i) cout<<(arr[i])
#define vi vector<int>
#define vs vector<string>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
#define repe(i,s,n) for (int i=int(s);i<=int(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;readA(n,m);

    repe(r,1,n){
        repe(c,1,m){
        
            if(r%2==1){ // se a linha for impar
                printt("#");
            }else if((r/2)%2==1&&c==m){
                printt("#");
            }else if((r/2)%2==0&&c==1){ // caso
                printt("#");
            }else{
                printt(".");
            }
        }
       cout<<endl;
    }
}
