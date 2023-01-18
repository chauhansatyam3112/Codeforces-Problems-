/*#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
int main()*/

/* int p1=1,p2=1,p3=1;
 vector<int>v;
 ll n;cin>>n;
 for (int i = 0; i < n; i++)
 {

 int x;v.push_back(x);

 }
 for (int i = 0; i < n; i++)
 {
     if(v[i]<0){
         p1*=v[i];
     }*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> pos, neg, zer;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            neg.push_back(a[i]);
        }
        else if (a[i] == 0)
        {
            zer.push_back(a[i]);
        }
        else
        {
            pos.push_back(a[i]);
        }
    }
    //  for(int i=1;i<pos.size();i++){
    //     zer.push_back(pos[i]);
    //  }
    //  for(int i=1;i<neg.size();i++){
    //     zer.push_back(neg[i]);
    //  }
    //  cout<<1<<" "<<neg[0]<<endl;
    //  cout<<1<<" "<<pos[0]<<endl;
    //  cout<<zer.size()<<" ";
    //  for(int i=0;i<zer.size();i++){
    //     cout<<zer[i]<<" ";
    //  }
    //  cout<<endl;
    if (neg.size() % 2 != 0)
    {
        for (int i = 1; i < neg.size(); i++)
        {
            pos.push_back(neg[i]);
        }
    }
    else if (neg.size() % 2 == 0)
    {
        for (int i = 1; i < neg.size() - 1; i++)
        {
            pos.push_back(neg[i]);
        }
        zer.push_back(neg[neg.size() - 1]);
    }
    cout << 1 << " ";
    cout << neg[0] << endl;

    cout << pos.size() << " ";
    for (int i = 0; i < pos.size(); i++)
    {
        cout << pos[i] << " ";
    }
    cout << endl;
    cout << zer.size() << " ";
    for (int i = 0; i < zer.size(); i++)
    {
        cout << zer[i] << " ";
    }
    cout << endl;
    return 0;
}
