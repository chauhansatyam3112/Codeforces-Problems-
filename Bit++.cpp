/*       Amor Foti             */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007

int main()
{
    ll t;
    int cnt = 0;
    cin >> t;
    while (t--)
    {
        /* code */ int n;
        cin >> n;
        string str;
        // vector<char> v(n);
        for (int i = 0; i < n; i++)
        {
            /* code */ // cin >> v[i];
            cin >> str;

            /* code */ if (str == "++X" || str == "X++")
                cnt++;
            else
                cnt--;
        }

        cout << cnt-- << endl;
    }
}