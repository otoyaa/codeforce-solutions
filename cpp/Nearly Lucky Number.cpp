#include <bits/stdc++.h>
#define read(x) cin>>x
#define reada(x,y) cin>>x>>y
#define printt(x) cout<<(x)
#define print(x) cout<<(x)
#define printv(arr) for (int i=0;i<arr.size();i++) cout<<arr[i]<<" "<<"\n"
#define vi vector<int>
#define vs vector<string>
#define mp make_pair
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
#define repe(i,s,n) for (int i=int(s);i<=int(n);i++)
typedef long long int ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll n;read(n);

    int quatro,sete;
    string lucky=to_string(n);
    
    rep(i,0,lucky.length()){
        if(lucky[i]=='4'){
            quatro++;
        }else if(lucky[i]=='7'){
            sete++;
        }
    }

    if(quatro+sete==7||quatro+sete==4){
        print("YES");
    }else{
        print("NO");
    }
}
