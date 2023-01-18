int getMaximumPower(int arr[], int power[], int n, int k)
{
    int p = k / 2;
    int maxpower = 0;
    for (int i = 0; i < p; i++)
    {
        int power1 = 0;
        int j = power[i];
        int m = power[k - i - 1];
        for (int r = j; r < m + 1; r++)
        {
            maxpower += arr[r];
        }
        j = 0;
        m = 0;
    }
    return (maxpower) % 10000000007;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int power[k];
    for (int i = 0; i < k; i++)
    {
        cin >> power[i];
    }
    sort(power, power + k);

    cout << getMaximumPower(arr, power, n, k);
}
