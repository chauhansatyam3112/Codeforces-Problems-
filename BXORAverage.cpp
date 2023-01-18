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
        /* code */ ll abraca_dabra;
        cin >> abraca_dabra;
        int m = abraca_dabra % 2;
        if (m)
        {
            for (int hello = 0; hello < abraca_dabra; hello = hello + 1)
            {
                cout << "1";
                cout << endl;
            }
        }
        else
        {
            for (int hello = 0; hello < abraca_dabra - 2; hello = hello + 1)
            {
                int p = 2;
                cout << p << " ";
                int q = 1, r = 3;
                cout << q << " " << r << endl;
            }
        }
    }
}