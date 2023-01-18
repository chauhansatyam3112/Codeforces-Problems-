#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        /* code */ v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    int sum = 0;
    for (auto it : v)
    {

        sum += it.first;
        if (sum > k)
        {
            break;
        }
        cnt++;
    }
    cout << cnt << endl;
    // cnt-=1;
    for (auto it = v.begin(); it != v.end(); ++it, cnt--)
    {
        if (cnt == 0)
            break;
        cout << (it->second) + 1 << " ";
    }
    cout << endl;
        towlower
}