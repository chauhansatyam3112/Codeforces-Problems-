#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ int n, m;
        cin >> n >> m;
        vector<ll> v(n), v1(m);
        ll sum1 = 0, sum2 = 0;
        ll summer = 0;
        priority_queue<int, vector<int>, greater<int>> priorityq;
        // ll summer = 0;

        for (int i = 0; i < n; i=i+1)
        {
            cin >> v[i];
            priorityq.push(v[i]);
        }
        long long int bsum = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> v1[i];
        }
        for (int hello = 0; hello < m; hello = hello + 1)
        {
            priorityq.pop();
            priorityq.push(v1[hello]);
        }

        while (!priorityq.empty())
        {
            summer += priorityq.top();
            priorityq.pop();
        }
        cout << summer << endl;

        // for (ll i = 0; i < n; i++)
        // {
        //     cin >> v[i];
        //     sum1 += v[i];
        // }
        // for (ll j = 0; j < m; j++)
        // {
        //     cin >> v1[j];
        //     sum2 += v1[j];
        // }
        // int abc_d = 0;
        // int de_f = m - 1;
        // int temprory = min(n, m);
        // while (temprory--)
        // {
        //     /* code */ sum1 = sum1 - v[abc_d];
        //     sum1 = sum1 + v1[de_f];
        //     abc_d++;
        //     de_f--;
        // }
        // cout << sum1 << endl;

        // sort(v.begin(), v.end());
        // sort(v1.begin(), v1.end());

        // if (n == m)
        // {
        //     for (ll i = m - 1; i >= 0; i--)
        //     {
        //         ans += v1[i];
        //     }
        //     cout << ans << endl;
        // }
        // else if (n > m)
        // {
        //     for (ll i = 0; i < v1.size(); i++)
        //     {
        //         ans += v1[i];
        //     }
        //     int len = n - m;
        //     int i = v.size() - 1;
        //     while (len--)
        //     {
        //         ans += v[i];
        //         i--;
        //     }
        //     cout << ans << endl;
        // }
        // else if (m > n)
        // {
        //     int len = n;
        //     int i = m - 1;
        //     while (len--)
        //     {
        //         ans += v1[i];
        //         i--;
        //     }
        //     cout << ans << endl;
        // }
    }
}