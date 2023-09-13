#include <bits/stdc++.h>
#define reada(x,y) cin>>x>>y
#define print(x) cout<<(x)<<"\n"
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m,n;reada(m,n);
    int board_size=m*n;
    int ans=0;

    while(board_size>1){
        ans++;
        board_size-=2;
    }
    print(ans);
}   
