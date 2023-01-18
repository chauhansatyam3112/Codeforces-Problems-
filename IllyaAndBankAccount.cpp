#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
//#define endl 'd1'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("A.in", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // My Code
    // cout << "Welcome to my macro" << endl;
    ll n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        string s = to_string(n);
        ll len = s.length();
        if (s[len - 1] == '0')
        {
            s.erase(s.begin() + (len - 2));
        }
        else
        {
            ll lst = s[len - 1] - '0';
            ll lst2 = s[len - 2] - '0';
            if (lst > lst2)
            {
                s.erase(s.begin() + (len - 1));
            }
            else
            {
                s.erase(s.begin() + (len - 2));
            }
        }
        ll ii = stoi(s);
        if (ii == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}