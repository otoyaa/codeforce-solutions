#include <bits/stdc++.h>
#define print(x) cout<<(x)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s1,s2,s3,s4;cin>>s1>>s2>>s3>>s4;
    set<int> v;
    v.insert(s1);
    v.insert(s2);
    v.insert(s3);
    v.insert(s4);
    
    print(4-v.size());
}
