#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;read(s);
    vector<char> v(s.size());

    int j=0;
    rep(i,0,v.size()){
        char c=tolower(s[i]);
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='y'){
            v[j]=c;
            j++;
        }
    }
    rep(i,0,j){
        cout<<"."<<v[i];
    }

}
