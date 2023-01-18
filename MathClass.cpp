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
        set<ll> st;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v[i];
        }
        sort(v.begin(), v.end());
        // st.insert(v.begin(), v.end());
        for (auto it : v)
        {
            st.insert(it);
        }
        for (int i = 0; i < v.size(); i++)
        {

            for (int j = 0; j < v.size(); j++)
            {

                /* code */ if (st.find(abs(v[j] - v[i])) != st.end())
                {
                    continue;
                }
                else
                {
                    st.insert(v[j] - v[i]);
                    v.resize(n + 1);
                    v.push_back(v[j] - v[i]);
                }
            }
        }
        cout << st.size() - 1 << endl;
    }
}