#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ string abracadabra;
        cin >> abracadabra;
        string abracadabra1 = abracadabra;
        reverse(abracadabra.begin(), abracadabra.end());
        string ans = abracadabra1 + abracadabra;
        cout << ans << endl;
    }
}