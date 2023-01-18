#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        unordered_set<char>p;
        for (int i = 0; i < s.size(); i++)
        {
            p.insert(s[i]);
        }
        int x=p.size();
        int y=s.size();
        //int z=(x*z)+(y-x);
        int z=x+y;
        cout<<z<<endl;
    }
    return 0;
    
}