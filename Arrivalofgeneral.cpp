#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    if (n == 2)
    {
        cin >> a[1] >> a[2];
        if (a[1] > a[2])
        {
            cout << '0';
        }
        else
        {
            cout << '1';
        }
    }
    if (n > 2)
    {

        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] < a[i + 1])
            {
                swap(a[i], a[i + 1]);
                count++;
            }
        }
        for (int i = n - 2; i != 0; i--)
        {
            if (a[i] > a[i - 1])
            {
                swap(a[i], a[i - 1]);
                count++;
            }
        }
    }
    cout << count;
    return 0;
}