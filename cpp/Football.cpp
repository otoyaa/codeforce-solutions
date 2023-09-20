#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;read(s);

    if(s.find("0000000")<100||s.find("1111111")<100){
        print("YES");
    }else{
        print("NO");
    }
}
