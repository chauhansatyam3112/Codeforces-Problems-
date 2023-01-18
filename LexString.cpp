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

        ll a, b, k;

        cin >> a >> b >> k;
        // int k;
        // cin >> k;
        string c, d;
        cin >> c >> d;

        string ans = "";
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        int i = 0, j = 0, count1 = 0, count2 = 0;

        while (i < a && j < b)
        {
            if (c[i] <= d[j])
            {
                if (count1 < k)
                {
                    count1++;
                    ans += c[i];
                    count2 = 0;
                    i++;
                }
                else
                {
                    count2++;
                    ans += d[j];
                    count1 = 0;
                    j++;
                }
            }
            else
            {
                if (count2 < k)
                {
                    count2++;
                    ans += d[j];
                    count1 = 0;
                    j++;
                }
                else
                {
                    count1++;
                    count2 = 0;
                    ans += c[i];
                    i++;
                }
            }
        }
        cout << ans << endl;
    }
}