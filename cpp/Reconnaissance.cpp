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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    int n;read(n);ll d;read(d);
    // a diferença de pares não pode ser maior
    // que o valor de d
    vi v(n);
    int posi=0;
    for(int i=0;i<n;i++)read(v[i]);
    for(int i=1;i<n;i++){ // pule o primeiro elemento
        for(int j=0;j<i;j++){ // comece do primeiro elemento e vai até o final de i
            if(abs(v[j]-v[i])<=d){
                posi++;
            }
        }
    }
    cout<<posi*2<<"\n"; // se 50-60 =~ 60-20
}
