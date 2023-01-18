#include <bits/stdc++.h>
using namespace std;
//#define endl "\nl"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0 && c == 0)
        {
            cout << '0' << endl;
        }
        if (a == 0 || c == 0)
        {
            cout << '1' << endl;
        }
        ll p1 = a * d;
        ll  p2 = b * c;
        if (p1 == p2)
        {
            cout << '0' << endl;
        }
        else if (p1 % p2 == 0 || p2 % p1 == 0)
        {
            cout << '1' << endl;
        }
        else
        {
            cout << '2' << endl;
        }
    }
}