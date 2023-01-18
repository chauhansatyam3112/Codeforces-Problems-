#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n - 1; i++)
    {
        /* code */ cin >> v[i];
    }
    int pos = 1;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (pos < t)
        {
            pos += v[pos - 1];
        }
        else
        {

            break;
        }
    }
    if (pos == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}