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
        cin >> m >> n;
        if (n > m || (!(n & 1) && m & 1))
        {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
        if (n == m)
        {
            for (ll i = 1; i <= n; i++)
            {
                /* code */ cout << 1 << " ";
            }
            cout << endl;
        }
        else if (n % 2 != 0)
        {
            for (ll i = 1; i < n; i++)
            {
                /* code */ cout << 1 << " ";
            }
            cout << m - n + 1 << endl;
        }
        else
        {
            for (ll i = 1; i <= n - 2; i++)
            {
                /* code */ cout << 1 << " ";
            }
            cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << endl;
        }
    }
}