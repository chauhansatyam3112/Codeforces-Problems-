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
        int abraca_dabra;
        cin >> abraca_dabra;
        if (abraca_dabra % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < abraca_dabra; i = i + 1)
            {
                if (i % 2 != 0)
                    cout << -1 << " ";
                else if (i % 2 == 0)
                    cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            if (abraca_dabra == 3)
                cout << "NO" << endl;
            else
            {
                cout << "YES" << endl;
                for (int i = 0; i < abraca_dabra; i = i + 1)
                {
                    if (i % 2)
                        cout << -abraca_dabra / 2 << " ";
                    else
                        cout << abraca_dabra / 2 - 1 << " ";
                }
                cout << endl;
            }
        }
    }
}