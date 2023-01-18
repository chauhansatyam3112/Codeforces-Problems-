#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    /* int n;
     cin >> n;
     int arr[n][2];
     int rows = sizeof(arr) / sizeof(arr[0]);
     int col = sizeof(arr[0]) / sizeof(int);
     int p = rows * col;
     int k = 0;
     int t = 0;

     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < 2; j++)
         {
             cin >> arr[i][j];
         }
     }
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             if (arr[i][0] == arr[j][1])
             {

                 t++;
             }
         }
     }

     cout << t;*/

    int n;
    cin >> n;
    /*vector<int> v, v1;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(x);
        v1.push_back(y);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i] == v1[j])

                t++;
        }
    }
    cout << t;*/
    
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        /* code */ v.push_back({x, y});
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */ if (i == j)
                continue;

            if (v[i].first == v[j].second)
            {
                t++;
            }
        }
    }
    cout << t;
}
