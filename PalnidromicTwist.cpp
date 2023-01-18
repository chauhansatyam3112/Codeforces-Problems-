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
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool flag = false;
        int sum = 0;
        int i = 0, j = str.length() - 1;
        while (i < j)
        {
            if (str[i] == str[j])
            {
                i++;
                j--;
                sum++;
            }
            else
            {

                if (char(str[i] + 1) == char(str[j] + 1))
                {
                    i++;
                    j--;
                    sum++;
                }

                else if (char(str[i] + 1) == char(str[j] - 1))
                {
                    i++;
                    j--;
                    sum++;
                }
                else if (char(str[i] - 1) == char(str[j] + 1))
                {
                    i++;
                    j--;
                    sum++;
                }
                else if (char(str[i] - 1) == char(str[j] - 1))
                {
                    i++;
                    j--;
                    sum++;
                }
                else
                {
                    i++;
                    j--;
                }
            }
        }
        if (sum == n / 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    // cout << char('c' + 1);
    // string d = "abc";
    // int i = 0;
    // cout << char(d[i] + 2) << endl;
}