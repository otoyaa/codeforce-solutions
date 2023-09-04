#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,h;cin>>n>>h;

    int c=0;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        
        if(a<=h)
            c++;
    }
    cout<<c<<"\n";
}
