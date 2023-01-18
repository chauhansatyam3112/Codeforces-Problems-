#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll T = 1;
    cin >> T;

    while (T--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        cout << v[n - 1] + v[n - 2] - v[0] - v[1] << endl;
    }

    return 0;
}