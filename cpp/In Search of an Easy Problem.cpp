#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;cin>>n;
    vector<int>arr(n);
    bool hard=false;

    for(int i=0;i<n;i++){
        cin>>arr[i];

        if(arr[i]==1){
            hard=true;
        }
    }

    cout<<(hard? "HARD":"EASY");
}
