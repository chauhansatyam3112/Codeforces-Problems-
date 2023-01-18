#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i < 4; i++)
        {
            int a, b, c;
            cin >> a;
            cin >> b;
            cin >> c;
            if (i == 1)
            {
                if (a == 2 || a == 3 && b == 2 || b == 3 && c == 2 || c == 3)
                {
                    cout << "yes" << endl;
                }
                else
                {
                    cout << "no";
                }
            }
            if (i == 2)
            {
                if (a == 1 || a == 3 && b == 1 || b == 3 && c == 1 || c == 3)
                {
                    cout << "yes" << endl;
                }
                else
                {
                    cout << "no";
                }
            }
            if (i == 3)
            {
                if (a == 1 || a == 2 && b == 1 || b == 2 && c == 1 || c == 2)
                {
                    cout << "yes" << endl;
                }
                else
                {
                    cout << "no";
                }
            }
        }
    }
}