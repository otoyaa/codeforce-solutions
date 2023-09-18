#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a,b,c;cin>>a>>b>>c;
    string a_b=a.append(b);
    sort(a_b.begin(),a_b.end());
    sort(c.begin(), c.end());

    if(a_b==c){ 
        print("YES");
    }else{
        print("NO");
    }
}
