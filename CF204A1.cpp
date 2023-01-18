#include <bits/stdc++.h>
using namespace std;
int main()
{
    
     
     int n;cin>>n;
     
     int a,b,c;
     
     int sum1=0;int sum2=0;int sum3=0;
     for (int i = 1; i<=n; i++)
     {
        cin>>a>>b>>c;
        sum1=sum1+a;
        sum2=sum2+b;
        sum3=sum3+c;
        
     
     }
     if(sum1==0&&sum2==0&&sum3==0)
     {
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }
}