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

    int t;read(t);

    rep(i,0,t){
        string s;read(s);
        if(s=="yes"||s=="Yes"||s=="yeS"
        ||s=="YES"||s=="YeS"||s=="yES"||s=="yEs"||s=="YEs"){
            print("YES");
        }else{
            print("NO");
        }
    }


}
