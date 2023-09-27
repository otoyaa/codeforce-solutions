#include <bits/stdc++.h>
#define read(x) cin>>x
#define print(x) cout<<(x)<<"\n"
#define vi vector<int>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
typedef long long int ll;
using namespace std;

void solve(){
    int n_1;read(n_1);

    if(n_1==1||n_1%2!=0){
        cout<<"-1";
    }else{
        int c=1,n=2;
        cout<<n<<" "<<c<<" ";

        int i=3; // proximo elemento depois do 2
    while(i<=n_1){ 
        int c=i,n=i+1; // cria os proximos dois
        cout<<n<<" "<<c<<" ";
        i+=2; // aumenta o contador em dois para calcular os proximos dois elementos
        }
        cout<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);

    solve();
}
