#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n, i; // words counter
    string word;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> word;
        if (word.length() > 10)
        {
            cout << *word.begin() << (word.length() - 2) << *word.rbegin() << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
    return 0; // sucessful call
}
