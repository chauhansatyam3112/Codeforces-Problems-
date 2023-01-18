#include <bits/stdc++.h>
using namespace std;
int main()
{int a;
    for (int i = 0; i <6; i++)
    {
        for(int j=0;j<6;j++){
        cin>>a;
        if (a==1)
        {
            cout<<(abs(3-i)+abs(3-j));
        }
        }
        
    }
    
}