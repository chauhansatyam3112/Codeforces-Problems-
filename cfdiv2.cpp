

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007

//################## Vector ###################
#define vll vector<ll>
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define pll pair<ll, ll>
#define pi pair<int, int>
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define mem(a, x) memset(a, x, sizeof(a))
#define ff first
#define ss second
#define f(i, n) for (int i = 0; i < n; i++)
#define fo(i, l, u) for (int i = l; i < u; i++)
#define rfo(i, l, u) for (int i = l; i >= u; i--)
#define ps(x, y) fixed << setprecision(y) << x
#define nl "\n"
#define py cout << "YES" << nl;
#define pn cout << "NO" << nl;
#define pm1 cout << -1 << nl;
#define p0 cout << 0 << nl;
#define pmp cout << i.first << " " << i.second << nl;
#define pstr(s) cout << s << nl;
#define p1(x) cout << x << "\n";
#define p2(x, y) cout << x << " " << y << "\n";
#define p3(x, y, z) cout << x << " " << y << " " << z << "\n";
#define c(v)                   \
    ll n;                      \
    cin >> n;                  \
    vll v(n);                  \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define cc(v)          \
    ll n, m;           \
    cin >> n >> m;     \
    vvll v(n, vll(m)); \
    fo(i, 0, n) fo(j, 0, m) cin >> v[i][j];
#define px(a)             \
    for (auto x : a)      \
        cout << x << " "; \
    cout << '\n';
#define px2(v)       \
    for (auto p : v) \
        cout << p.first << " " << p.second << "\n";
ll ceilval(ll a, ll b)
{
    return ((a / b) + ((a % b) != 0));
}

// Syntax to create a min heap for priority queue
// priority_queue <int, vector<int>, greater<int>> g = gq;
// priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
// v.push_back( make_pair(a[i],ar1[i]) );
// vector< pair<int, pair<int, int> > > myvec;
// myvec.push_back(make_pair(2, make_pair(31, 102)));

// debug templates
#define debug(x) cout << #x << " : " << x << endl;
#define debuga(A, N)            \
    cout << #A << " : [";       \
    for (int i = 0; i < N; i++) \
        cout << A[i] << " ";    \
    cout << "]\n";
#define debuga2(A, N, M)            \
    cout << #A << " : \n";          \
    for (int i = 0; i < N; i++)     \
    {                               \
        cout << "[";                \
        for (int j = 0; j < M; ++j) \
            cout << A[i][j] << " "; \
        cout << "]\n";              \
    }
#define debugp(p) cout << #p << " : " \
                       << "(" << (p).first << "," << (p).second << ")\n";
#define debugv(v)                        \
    cout << #v << " : "                  \
         << "[";                         \
    for (int i = 0; i < (v).size(); i++) \
        cout << v[i] << " ";             \
    cout << "]\n";
#define debugv2(v)                              \
    cout << #v << " : \n";                      \
    for (int i = 0; i < v.size(); i++)          \
    {                                           \
        cout << "[";                            \
        for (int j = 0; j < (v[0].size()); ++j) \
            cout << v[i][j] << " ";             \
        cout << "]\n";                          \
    }
#define debugs(m)                                     \
    cout << #m << " : [ ";                            \
    for (auto itr = m.begin(); itr != m.end(); itr++) \
        cout << *itr << " ";                          \
    cout << "]\n";
#define debugm(m)                                                \
    cout << #m << " : [ ";                                       \
    for (auto itr = m.begin(); itr != m.end(); itr++)            \
        cout << "(" << itr->first << "," << itr->second << ") "; \
    cout << "]\n";

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == 0 && c == 0)
    {
        p0;
        return;
    }

    if (a == 0 || c == 0)
    {
        p1(1);
        return;
    }

    ll a1 = a * d;
    ll a2 = b * c;

    if (a1 == a2)
    {
        p0;
        return;
    }

    if (a1 % a2 == 0 || a2 % a1 == 0)
    {
        p1(1);
        return;
    }

    p1(2);
}

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T;
    T = 1;
    cin >> T;

    while (T--)
    {
        solve();
    }
}