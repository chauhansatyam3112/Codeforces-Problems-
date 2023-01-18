#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int abra_cadabra;
        cin >> abra_cadabra;
        string abra_cadabra1;
        cin >> abra_cadabra1;
        int abra_cadabra2 = abra_cadabra1[0] - '0';
        string answer = "";
        for (int x = 1; x < abra_cadabra; x = x + 1)
        {
            /* code */ if (abra_cadabra2 == 0)
            {
                answer = answer + "+";
                abra_cadabra2 = abra_cadabra2 + (abra_cadabra1[x] - '0');
            }
            else
            {
                answer = answer + "-";
                abra_cadabra2 = abra_cadabra2 - (abra_cadabra1[x] - '0');
            }
        }
        cout << answer << endl;
    }
}