#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ ll n;
        cin >> n;
        vector<int> v1, v2, v3;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            /* code */ v1.push_back(x);
        }
        for (int i = 0; i < v1.size(); i++)
        {
            /* code */ if (v1[i] % 2 == 0)
            {
                /* code */ v2.push_back(v1[i]);
            }
            else
            {
                v3.push_back(v1[i]);
            }
        }
        if (v3.size() > v2.size())
        {
            cout << v2.size() << endl;
        }
        else
        {
            cout << v3.size() << endl;
        }
    }
}