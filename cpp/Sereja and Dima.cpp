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

    int n;
    read(n); // sereja first dima second
    vi cards(n);
    
    int sereja_points=0;
    int dima_points=0;

    rep(i,0,n) read(cards[i]);

    int left=0;
    int right=n-1;
    bool sereja=true;

    while(left<=right){
        if(sereja)
            sereja_points+=max(cards[left],cards[right]);
        else
            dima_points+=max(cards[left],cards[right]);

        sereja=!sereja; // a bool sereja vai passar a ser falso

        if(cards[left]>=cards[right])
            left++;
        else
            right--;
    }



    cout<<sereja_points<<" "<<dima_points<<"\n";
}
