#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ int abra_cadabra[2][2];
        for (int x = 0; x < 2; x++)
        {
            /* code */ for (int y = 0; y < 2; y = y + 1)
            {
                /* code */ cin >> abra_cadabra[x][y];
            }
        }
        bool falg = false;
        if (abra_cadabra[0][0] < abra_cadabra[0][1])
        {
            if (abra_cadabra[0][0] < abra_cadabra[1][0])
            {
                if (abra_cadabra[1][0] < abra_cadabra[1][1])
                {
                    if (abra_cadabra[0][1] < abra_cadabra[1][1])
                        falg = true;
                    break;
                }
            }
        }
        if (falg)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}