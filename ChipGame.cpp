#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        /* code */ long long int n, m;
        cin >> n >> m;
        if ((n + m) % 2 != 0)
        {
            cout << "Burneka";
        }
        else
        {
            cout << "Tonya";
        }
    }
}