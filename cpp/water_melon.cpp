#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w; // watermelon weights
    cin >> w;
    if (w > 0)
    {
        if (w > 2 and w % 2 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}
