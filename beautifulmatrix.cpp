#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    int a[5][5];
    for (int i=0; i<5; i++)
    {
        for (int j = 0; j<5; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    if(a[2][2]!=1){
        for(int i=0;i<4;i++){
        
        for (int j = 0;j<4; j++)
        {
            
            swap(a[i],a[i+1]);
            swap(a[j],a[j+1]);
            
            
        }
        count++;
        
        }
    }
    
    cout<<count;
    
    
}