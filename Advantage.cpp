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
        vector<ll> vec(n), v(n);
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> vec[i];
            v[i] = vec[i];
        }
        // sort(vec.begin(), vec.end());
        // ll maxi = *max_element(vec.begin(), vec.end());
        sort(v.begin(), v.end());

        ll secondmaxi = v[n - 2];
        ll maxi = v[n - 1];
        vector<ll> ans;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] == maxi)
            {
                ans.push_back(maxi - secondmaxi);
            }
            else
            {
                ans.push_back(vec[i] - maxi);
            }
        }

        /*for (int i = 0; i < n; i++)
        {
            if (vec[i] != maxi)
            {
                ans.push_back(vec[i] - maxi);
            }
            else
            {
                // if(vec[secondmaxi]<vec[maxi])
                ans.push_back(maxi - secondmaxi);
            }
        }
        // ans.push_back(vec[n - 1] - vec[n - 2]);*/
        for (auto it : ans)
        {
            /* code */ cout << it << " ";
        }
        cout << endl;
    }
}