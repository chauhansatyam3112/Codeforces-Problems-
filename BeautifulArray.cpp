 #include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
 
int main(){
    ll t ,n,k,b,s;
    ll a[101010];
    while (t--)
    {
        cin>>n>>k>>b>>s;
        memset(a,0,sizeof a);
        a[n]=k*b;
        s-=k*b;
        if(s<0){
            cout<<"-1"<<endl;
            return 0;
        }
        for (int  i = n-1; i>=1; i--)
        {
            if(s>=k){
                a[i]=k-1;
                s-=k-1;
            }else if(s<k){
                a[i]=s;
                s=0;break;
            }
        }
        if(s!=0){
            cout<<"-1"<<endl;return 0;
        }
        for (int i = 1; i <=n; i++)
        {
            cout<<a[i]<<" ";
        }
    return 0;
        
        
    }
    
}