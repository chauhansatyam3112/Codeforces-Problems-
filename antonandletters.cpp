#include <bits/stdc++.h>
using namespace std;
int main()
{
    string  s;
    getline(cin,s);
    

  //  for(int i=0;i!0;++i) 
  set<int>st;
  for(int i=0;i<s.length();i++){
  
  if( s[i] != '{' && s[i] != '}' && s[i] != ',' && s[i] != ' ' ) st.insert( s[i] );}
    cout<<st.size();
}