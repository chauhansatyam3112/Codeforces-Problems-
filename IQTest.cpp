#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
#define f(i, j, n) for (ll i = j; i < n; ++i)
#define fo(i, j, n) for (ll i = j; i >= n; --i)
#define pb push_back

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    vector<ll> e, o;
    f(i, 0, n)
    {
        cin >> arr[i];
        if (arr[i] & 1)
            o.pb(i + 1);
        else
            e.pb(i + 1);
    }
    if (o.size() > e.size())
    {
        for (auto x : e)
            cout << x << " ";
        cout << endl;
    }
    else
    {
        for (auto x : o)
            cout << x << " ";
        cout << endl;
    }
}
