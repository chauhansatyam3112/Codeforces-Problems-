/*//        Amor Foti             */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    string n;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
        /* code */ char x = n[i];
        if (i == 0 && x >= '5' && x < '9')
            n[i] = '9' - x + '0';
        else if (i > 0 && x >= '5')
            n[i] = '9' - x + '0';
    }
    cout << n << endl;
}