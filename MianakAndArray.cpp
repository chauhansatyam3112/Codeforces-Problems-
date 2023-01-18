#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    int p, q;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        auto it = v.begin();
        auto x = v.end();
        cout << *(x - 1) - *(it);

        /* for (auto it : v)
         {
              p = *max_element(v.begin(), v.end());
             q = *min_element(v.begin(), v.end());
         }
         cout << (p - q) << endl;
     }*/
    }
}