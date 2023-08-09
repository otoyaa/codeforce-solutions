#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n; // questions 
    int count = 0;

    for (int i=0;i<n;i++){
        int p,v,s; cin >>p >>v>>s;
        
        if (p+v+s>=2){
            count += 1;
        }
    }


    cout << count << endl;
}
