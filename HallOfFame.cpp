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
        int abra_cadabra;
        cin >> abra_cadabra;
        /* code */ string str;
        cin >> str;
        int right = 0;
        for (int i = 0; i < abra_cadabra; i++)
        {
            /* code */ if (str[i] == 'R')
                right++;
        }
        if (right == 0 || right == abra_cadabra)
        {
            cout << -1 << endl;
            // return 0;
        }
        else
        {
            for (int i = 0; i < abra_cadabra - 1; i++)
            {
                /* code */ if (str[i] == 'L' && str[i + 1] == 'R')
                {
                    cout << i + 1 << endl;
                    break;
                }
                else if (str[i] == 'R' && str[i + 1] == 'L')
                {
                    cout << 0 << endl;
                    break;
                }
            }
        }
    }
    // return 0;
}