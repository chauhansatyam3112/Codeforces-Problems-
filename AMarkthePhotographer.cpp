#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ int n, x;
        // int cnt = 0;
        // cin >> n >> x;
        // int count = 0;
        // vector<int> v;
        ll n, x;
        cin >> n >> x;
        vector<int> v(2 * n, 0);
        for (ll i = 0; i < 2 * n; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll flag = 1;
        for (ll i = 0; i < n; ++i)
        {
            if (v[i + n] - v[i] < x)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}