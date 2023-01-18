#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ int n;
        cin >> n;
        vector<int> vec(n);
        ll ans_wer = 1;
        for (int i = 0; i < n; i = i + 1)
        {
            cin >> vec[i];
            ans_wer = ans_wer * vec[i];
        }
        ans_wer = ans_wer + (n - 1);
        ll p = ans_wer * 2022 ;cout << p << endl;
    }
}