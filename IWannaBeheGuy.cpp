#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p;
    int q;
    set<int> s;
    cin >> p;

    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        /* code */ s.insert(t);
    }
    if (s.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}