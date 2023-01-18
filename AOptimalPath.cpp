#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ ll n, m;
        cin >> n >> m;
        int p = 0;
        int q = 0;
        ll ans = (m * (m + 1) / 2 + m * (n * (n + 1) / 2));
        cout << ans - m << endl;
    }
}