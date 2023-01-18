#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min_no = arr[0];
    int min_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (min_no >= arr[i])
        {
            min_no = arr[i];
            min_index = i;
        }
    }
    int min_moves = 0;
    for (int i = min_index; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
        min_moves++;
    }
    int max_no = arr[n - 1];
    int max_index = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (max_no <= arr[i])
        {
            max_no = arr[i];
            max_index = i;
        }
    }
    for (int i = max_index; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
        min_moves++;
    }

    cout << min_moves << endl;
    return 0;
}