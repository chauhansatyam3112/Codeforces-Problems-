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
        /* code */ ll n;
        cin >> n;
        vector<ll> vectr;
        ll abrac_adabra = 0;
        for (int hello = 0; hello < n; hello++)
        {
            // ll x;cin>>x;
            // vectr.push_back(x);
            /* code */ cin >> vectr[hello];
            abrac_adabra = __gcd(vectr[hello], abrac_adabra);
        }
        /*for (int hello = 0; hello < n; hello++)
        {
            abrac_adabra = __gcd(vectr[hello], abrac_adabra);
        }*/
        ll abracadabra = 0;
        ll abracadabra = vectr[n - 1] / abrac_adabra;
        cout << abracadabra << endl;
    }
}