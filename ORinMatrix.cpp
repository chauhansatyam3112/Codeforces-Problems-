#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007

int main()
{

    /* code */ int n, m;
    cin >> n >> m;
    int arr[n][m];

    // for (int i = 0; i < n; i++)
    // {
    //     /* code */ for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    int arr1[n][m];
    for (int i = 0; i < n; i++)
    {
        /* code */ for (int j = 0; j < m; j++)
        {
            /* code */ arr1[n][m] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */ for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                for (int k = 0; k < m; k++)
                    arr1[i][k] = 0;
                for (int l = 0; l < n; l++)
                    arr1[l][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */ for (int j = 0; j < m; j++)
        {
            /* code */ if (arr[i][j] == 1)
            {
                int sum = 0;
                for (int k = 0; k < m; k++)
                    sum += arr1[i][k];
                for (int l = 0; l < n; l++)
                    sum += arr1[l][j];

                if (sum == 0)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        /* code */ for (int j = 0; j < m; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
}
