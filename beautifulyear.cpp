#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int y;
    cin >> y;
    do
    {
        y++;
    }

    while (y != 0)
    {
        int a, b, c, d;
        s.insert(y % 10);
        y = y / 10;
    }
}
