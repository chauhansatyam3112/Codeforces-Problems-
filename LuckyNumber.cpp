#include <bits/stdc++.h>
using namespace std;
bool islucky(int);
int main()
{
    int n;
    cin >> n;
    if (islucky(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
bool islucky(int n)
{
    static int counter = 2;
    if (counter > n)
    {
        return 1;
    }
    if (counter % n == 0)
    {
        return 0;
    }
    int p = n;
    p = p - p / counter;
    counter++;
    return islucky(p);
}