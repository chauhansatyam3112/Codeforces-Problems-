#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count = 0;
    int j = 0;
    vector<char> v;
    vector<char> m = {'h', 'e', 'l', 'l', 'o'};
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o')
        {

            v.push_back(s[i]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == m[j])
        {
            j++;
        }
        if (j == 5)
        {
            break;
        }
    }

    if (j == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
