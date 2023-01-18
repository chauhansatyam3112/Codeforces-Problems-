#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;

    multiset<char> ms;
    for (int i = 0; i < n.length(); i++)
    {
        ms.insert(n[i]);
    }

    for (auto it = ms.begin(); it != ms.end();)
    {
        if (*it == '+')
            it = ms.erase(it);
        else
            ++it;
    }
    char t = *(ms.begin());
    cout << t;
    vector<char> v(ms.begin(), ms.end());
    // char m=*(v.begin());
    
    v.erase(v.begin());
    for (auto it : v)
         
    {

        cout << '+' << it;
    }
}