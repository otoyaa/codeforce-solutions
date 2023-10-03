#include <bits/stdc++.h>
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define f first
#define s second
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

void solve(){
    string s,t;
    cin>>s>>t;
    
    string reverse="";
    for(int i=t.length()-1;i>=0;i--){
        // iterando do ultimo elemento -> condição
        // de parada vai ser quando i, que é o tamanho
        // da string ser menor que 0 -> vai tirando 1
        reverse+=t[i];
    }
    cout<<(s==reverse?"YES":"NO")<<"\n";
}
        
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   

    solve();
}
