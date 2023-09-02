#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); // fast cin/cout | sem flush.

    int arr[5][5];

    int c_row, c_col,count=0;
    for (int r=0;r<5;r++){
        for(int c=0;c<5;c++){
            cin>>arr[r][c];

            if (arr[r][c]==1){
                c_row=r+1;
                c_col=c+1;
            }
        }
    }
    cout<<abs(3-c_row)+abs(3-c_col)<<"\n";
}
