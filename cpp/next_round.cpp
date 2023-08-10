#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    // add sequence on vector
    for (int i = 0; i < n; i++){
        cin >> arr[i];}

    int aprov = 0;
    // iterable vector
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k-1] && arr[i]>0)
        {
            aprov ++;
        } 
    }

    cout << aprov << endl;

    return 0; // successful
}
